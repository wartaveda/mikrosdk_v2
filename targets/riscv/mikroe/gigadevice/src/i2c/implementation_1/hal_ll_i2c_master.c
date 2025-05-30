/****************************************************************************
**
** Copyright (C) ${COPYRIGHT_YEAR} MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  hal_ll_i2c_master.c
 * @brief I2C master HAL LOW LEVEL layer implementation.
 */

#include "hal_ll_rcu.h"
#include "hal_ll_gpio.h"
#include "hal_ll_i2c_master.h"
#include "hal_ll_i2c_pin_map.h"

/*!< @brief Local handle list */
static volatile hal_ll_i2c_master_handle_register_t hal_ll_module_state[I2C_MODULE_COUNT] = { (handle_t *)NULL, (handle_t *)NULL, false };

// ------------------------------------------------------------- PRIVATE MACROS
/*!< @brief Helper macro for getting hal_ll_module_state address */
#define hal_ll_i2c_get_module_state_address ((hal_ll_i2c_master_handle_register_t *)*handle)
/*!< @brief Helper macro for getting module specific control register structure base address // first register address */
#define hal_ll_i2c_get_handle (hal_ll_i2c_master_handle_register_t *)hal_ll_i2c_get_module_state_address->hal_ll_i2c_master_handle
/*!< @brief Helper macro for getting module specific control register structure */
#define hal_ll_i2c_get_base_struct(_handle) ((hal_ll_i2c_base_handle_t *)_handle)
/*!< @brief Helper macro for getting module specific base address directly from HAL layer handle */
#define hal_ll_i2c_get_base_from_hal_handle ((hal_ll_i2c_hw_specifics_map_t *)((hal_ll_i2c_master_handle_register_t *)\
                                            (((hal_ll_i2c_master_handle_register_t *)(handle))->hal_ll_i2c_master_handle))->hal_ll_i2c_master_handle)->base

/*!< @brief Helper macro for setting appropriate I2C maximum rise time in Fm/Sm mode */
#define hal_ll_set_frequency(freqrange,speed) (speed<=100000)?(freqrange + 1):(((freqrange*300U)/1000U)+1U)

/*!< @brief Helper macros used for speed calculation */
#define hal_ll_i2c_get_rcu_clocks_apb1 ((uint16_t)(rcu_clocks.rcu_clocks_apb1 / 1000000))
#define HAL_LL_I2CCLK_MINIMUM_ALLOWED_VALUE (0x02)

/*!< @brief Default I2C bit-rate if no speed is set */
#define HAL_LL_I2C_MASTER_SPEED_100K      (100000UL)
#define HAL_LL_I2C_MASTER_SPEED_400K      (400000UL)
#define HAL_LL_I2C_MASTER_SPEED_1M        (1000000UL)
#define HAL_LL_I2C_MASTER_SPEED_3M2       (3200000UL)

/*!< @brief Default pass count value upon reset */
#define HAL_LL_I2C_DEFAULT_PASS_COUNT     (10000)

/*!< @brief Macros defining register bit location */
#define HAL_LL_I2C_CKCFG_DTCY_BIT         (14)
#define HAL_LL_I2C_CTL0_I2CEN_BIT         (0)
#define HAL_LL_I2C0EN_BIT                 (21)
#define HAL_LL_I2C1EN_BIT                 (22)
#define HAL_LL_I2C_CTL0_ACKEN_BIT         (10)
#define HAL_LL_I2C_CTL0_POAP_BIT          (11)
#define HAL_LL_I2C_STAT0_ADDSEND_BIT      (1)
#define HAL_LL_I2C_STAT0_BTC_BIT          (2)
#define HAL_LL_I2C_CTL0_START_BIT         (8)
#define HAL_LL_I2C_CTL0_STOP_BIT          (9)
#define HAL_LL_I2C_STAT0_LOSTARB_BIT      (9)
#define HAL_LL_I2C_STAT0_SBSEND_BIT       (0)
#define HAL_LL_I2C_STAT1_I2CBSY_BIT       (1)
#define HAL_LL_I2C_STAT0_TBE_BIT          (7)
#define HAL_LL_I2C_STAT0_RBNE_BIT         (6)

/*!< @brief Macros defining register specific bit masks */
#define HAL_LL_I2C_CTL0_STOP_MASK         (0x200U)
#define HAL_LL_I2C_CTL1_I2CCLK_MASK       (0x3FU)
#define HAL_LL_I2C_CKCFG_FAST_MASK        (0x8000U)
#define HAL_LL_I2C_CKCFG_DTCY_MASK        (0x4000U)
#define HAL_LL_I2C_CKCFG_CLKC_MASK        (0xFFFU)

/*!< @brief Macro used for setting pin alternate functions */
#define HAL_LL_I2C_AF_CONFIG (GPIO_CTL_CFG_OUTPUT_AFIO_OD | GPIO_CTL_MODE_OUTPUT_SPEED_M50)

// -------------------------------------------------------------- PRIVATE TYPES
/*!< @brief I2C register structure */
typedef struct
{
    hal_ll_base_addr_t ctl0;
    hal_ll_base_addr_t ctl1;
    hal_ll_base_addr_t saddr0;
    hal_ll_base_addr_t saddr1;
    hal_ll_base_addr_t dat;
    hal_ll_base_addr_t stat0;
    hal_ll_base_addr_t stat1;
    hal_ll_base_addr_t ckcfg;
    hal_ll_base_addr_t rt;
    hal_ll_base_addr_t _unused[27];
    hal_ll_base_addr_t fmpcfg;
} hal_ll_i2c_base_handle_t;

/*!< @brief I2C hw specific structure */
typedef struct
{
    hal_ll_base_addr_t base;
    hal_ll_pin_name_t module_index;
    hal_ll_i2c_pins_t pins;
    uint32_t speed;
    uint8_t address;
    uint16_t timeout;
} hal_ll_i2c_hw_specifics_map_t;

/*!< @brief I2C hw specific module values */
typedef struct
{
    hal_ll_pin_name_t pin_scl;
    hal_ll_pin_name_t pin_sda;
} hal_ll_i2c_pin_id;

/*!< @brief I2C hw specific error values */
typedef enum
{
    HAL_LL_I2C_MASTER_SUCCESS = 0,
    HAL_LL_I2C_MASTER_WRONG_PINS,
    HAL_LL_I2C_MASTER_MODULE_ERROR,

    HAL_LL_I2C_MASTER_ERROR = (-1)
} hal_ll_i2c_master_err_t;

/*!< @brief I2C end mode selection values */
typedef enum
{
    HAL_LL_I2C_MASTER_END_MODE_RESTART = 0,
    HAL_LL_I2C_MASTER_END_MODE_STOP,
    HAL_LL_I2C_MASTER_WRITE_THEN_READ
} hal_ll_i2c_master_end_mode_t;

/*!< @brief I2C timeout error values */
typedef enum
{
    HAL_LL_I2C_MASTER_TIMEOUT_START = 1300,
    HAL_LL_I2C_MASTER_TIMEOUT_STOP,
    HAL_LL_I2C_MASTER_TIMEOUT_WRITE,
    HAL_LL_I2C_MASTER_TIMEOUT_READ,
    HAL_LL_I2C_MASTER_ARBITRATION_LOST,
    HAL_LL_I2C_MASTER_TIMEOUT_INIT,
    HAL_LL_I2C_MASTER_TIMEOUT_WAIT_IDLE
} hal_ll_i2c_master_timeout_t;

/**
 * @brief Enum containing predefined module standard speed values.
 *
 * Enum values:
 * HAL_LL_I2C_MASTER_SPEED_STANDARD -- Speed set at 100K
 * HAL_LL_I2C_MASTER_SPEED_FULL -- Speed set at 400K
 * HAL_LL_I2C_MASTER_SPEED_FAST -- Speed set at 1M
 */
typedef enum
{
    HAL_LL_I2C_MASTER_SPEED_STANDARD = 0,
    HAL_LL_I2C_MASTER_SPEED_FULL,
    HAL_LL_I2C_MASTER_SPEED_FAST
} hal_ll_i2c_master_speed_t;

// ------------------------------------------------------------------ VARIABLES
/*!< @brief I2C hardware specific info */
static hal_ll_i2c_hw_specifics_map_t hal_ll_i2c_hw_specifics_map[] =
{
    #ifdef I2C_MODULE_0
    {HAL_LL_I2C0_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_0), {HAL_LL_PIN_NC, 0, HAL_LL_PIN_NC, 0}, HAL_LL_I2C_MASTER_SPEED_100K , 0, HAL_LL_I2C_DEFAULT_PASS_COUNT},
    #endif
    #ifdef I2C_MODULE_1
    {HAL_LL_I2C1_BASE_ADDR, hal_ll_i2c_module_num(I2C_MODULE_1), {HAL_LL_PIN_NC, 0, HAL_LL_PIN_NC, 0}, HAL_LL_I2C_MASTER_SPEED_100K , 0, HAL_LL_I2C_DEFAULT_PASS_COUNT},
    #endif

    {HAL_LL_MODULE_ERROR, HAL_LL_MODULE_ERROR, {HAL_LL_PIN_NC, 0, HAL_LL_PIN_NC, 0}, 0, 0, 0}
};

/*!< @brief Global handle variables used in functions */
static volatile hal_ll_i2c_master_handle_register_t *low_level_handle;
static volatile hal_ll_i2c_hw_specifics_map_t *hal_ll_i2c_hw_specifics_map_local;

// ---------------------------------------------- PRIVATE FUNCTION DECLARATIONS
/**
  * @brief  Check if pins are adequate.
  *
  * Checks scl and sda pins the user has passed with pre-defined
  * pins in scl and sda maps. Take into consideration that module
  * index numbers have to be the same for both pins.
  *
  * @param[in]  scl - SCL pre-defined pin name.
  * @param[in]  sda - SDA pre-defined pin name.
  * @param[in]  *index_list - Index list address
  * @param[in]  *handle_map - I2C master low level handle
  * @return hal_ll_pin_name_t Module index based on pins.
  *
  * Returns pre-defined module index from pin maps, if pins
  * are adequate.
  */
static hal_ll_pin_name_t hal_ll_i2c_master_check_pins( hal_ll_pin_name_t scl, hal_ll_pin_name_t sda, hal_ll_i2c_pin_id *index_list, hal_ll_i2c_master_handle_register_t *handle_map );

/**
  * @brief  Get local hardware specific map.
  *
  * Checks handle value and returns address of adequate
  * hal_ll_i2c_hw_specifics_map array index.
  *
  * @param[in]  handle - Object specific context handler.
  * @return hal_ll_i2c_hw_specifics_map_t Map address.
  *
  * Returns pre-defined map index address based on handle value,
  * if handle is adequate.
  */
static hal_ll_i2c_hw_specifics_map_t *hal_ll_get_specifics( handle_t handle );

/**
  * @brief  Get I2C busy bit value.
  *
  * Checks I2C busy bit value and returns true if device is in operation.
  * Else returns false.
  *
  * @param[in]  hal_ll_hw_reg - Object specific context handler.
  * @return bool State of register busy bit.
  */
static bool hal_ll_i2c_master_is_idle( hal_ll_i2c_base_handle_t *hal_ll_hw_reg );

/**
  * @brief  Get adequate I2C bit-rate value.
  *
  * Returns one of pre-defined bit-rate values,
  * or the closest bit-rate based on bit_rate
  * value passed to the function.
  *
  * @param[in]  bit_rate - I2C bit rate.
  * @return uint32_t Adequate bit-rate value.
  *
  * Returns adequate value to be latter written into bare metal register address.
  * Take into consideration that this returns a predefined value.
  *
  * HAL_LL_I2C_MASTER_SPEED_100K -- 100Kbit/s
  * HAL_LL_I2C_MASTER_SPEED_400K -- 400Kbit/s
  * HAL_LL_I2C_MASTER_SPEED_1M -- 1Mbit/s
  * HAL_LL_I2C_MASTER_SPEED_3M2 -- 3.2Mbit/s
  */
static uint32_t hal_ll_i2c_get_speed( uint32_t bit_rate );

/**
  * @brief  Calculate I2C speed value.
  *
  * Calculates adequate value to be written in HW register
  * in order to set appropriate speed.
  *
  * @param[in]  clock_value - MCU clock value.
  * @param[in]  map - Object specific context handler.
  *
  * @return None
  */
static void  hal_ll_i2c_calculate_speed( uint32_t clock_value, hal_ll_i2c_hw_specifics_map_t *map);

/**
  * @brief  Enable clock for I2C module on hardware level.
  *
  * Initializes I2C module clock on hardware level, based on beforehand
  * set configuration and module handler.
  *
  * @param[in]  map - Object specific context handler.
  * @param[in]  hal_ll_stat - True(enable clock)/False(disable clock).
  *
  * @return None
  */
static void hal_ll_i2c_master_set_clock( hal_ll_i2c_hw_specifics_map_t *map, bool hal_ll_state );

/**
  * @brief  Initialize I2C module on hardware level.
  *
  * Initializes I2C module on hardware level, based on beforehand
  * set configuration and module handler.
  *
  * @param[in]  map - Object specific context handler.
  * @return hal_ll_err_t Module specific values.
  *
  * Returns one of pre-defined values.
  * Take into consideration that this is hardware specific.
  */
static void hal_ll_i2c_hw_init( hal_ll_i2c_hw_specifics_map_t *map );

/**
 * @brief  Maps new-found module specific values.
 *
 * Maps pin names and alternate function values for
 * I2C SCL and SDA pins.
 *
 * @param[in]  module_index I2C HW module index -- 0,1,2...
 * @param[in]  *index_list  Array with SCL and SDA map index values
 *                          and module number
 *
 * @return  None
 */
static void hal_ll_i2c_master_map_pins( uint8_t module_index, hal_ll_i2c_pin_id *index_list );

/**
  * @brief  Sets I2C pin alternate function state.
  *
  * Sets adequate value for alternate function settings.
  * This function must be called if I2C is to work.
  * Based on value of hal_ll_state, alternate functions can be
  * set or cleared.
  *
  * @param[in]  map - Object specific context handler.
  * @param[in]  hal_ll_state - Init/De-init
  *
  * @return  None
  */
static void hal_ll_i2c_master_alternate_functions_set_state( hal_ll_i2c_hw_specifics_map_t *map, bool hal_ll_state );

/**
  * @brief  Full I2C module initialization procedure.
  *
  * Initializes I2C module on hardware level, based on beforehand
  * set configuration and module handler. Sets adequate pin alternate functions.
  * Initializes module clock.
  *
  * @param[in]  map - Object specific context handler.
  * @return hal_ll_err_t Module specific values.
  *
  * Returns one of pre-defined values.
  * Take into consideration that this is hardware specific.
  */
static void hal_ll_i2c_init( hal_ll_i2c_hw_specifics_map_t *map );

/**
  * @brief  Generates start signal on I2C bus.
  *
  * Generates a start signal on the I2C bus.
  *
  * @param[in]  map - Object specific context handler.
  * @return hal_ll_err_t Module specific values.
  *
  * Returns one of pre-defined values.
  * Take into consideration that this is hardware specific.
  */
static hal_ll_err_t hal_ll_i2c_master_start( hal_ll_i2c_hw_specifics_map_t *map );

/**
  * @brief  Perform a read on the I2C bus.
  *
  * Initializes I2C module on hardware level, if not initialized beforehand
  * and continues to perform a read operation on the bus.
  *
  * @param[in]  map - Object specific context handler.
  * @param[in]  readDatabuf - Pointer to data buffer.
  * @param[in]  lenReadData - Number of data to be read.
  * @param[in]  mode - I2C end mode.
  * @return hal_ll_err_t Module specific values.
  *
  * Returns one of pre-defined values.
  * Take into consideration that this is hardware specific.
  */
static hal_ll_err_t hal_ll_i2c_master_read_bare_metal( hal_ll_i2c_hw_specifics_map_t *map, uint8_t *read_data_buf, size_t len_read_data, hal_ll_i2c_master_end_mode_t mode );

/**
  * @brief  Perform a write on the I2C bus.
  *
  * Initializes I2C module on hardware level, if not initialized beforehand
  * and continues to perform a write operation on the bus.
  *
  * @param[in]  map - Object specific context handler.
  * @param[in]  writeDatabuf - Pointer to data buffer.
  * @param[in]  lenWriteData - Number of data to be written.
  * @param[in]  mode - I2C end mode.
  * @return hal_ll_err_t Module specific values.
  *
  * Returns one of pre-defined values.
  * Take into consideration that this is hardware specific.
  */
static hal_ll_err_t hal_ll_i2c_master_write_bare_metal( hal_ll_i2c_hw_specifics_map_t *map, uint8_t *write_data_buf, size_t len_write_data, hal_ll_i2c_master_end_mode_t mode );

// ------------------------------------------------ PUBLIC FUNCTION DEFINITIONS
hal_ll_err_t hal_ll_i2c_master_register_handle( hal_ll_pin_name_t scl, hal_ll_pin_name_t sda, hal_ll_i2c_master_handle_register_t *handle_map, uint8_t *hal_module_id ) {

    hal_ll_i2c_pin_id index_list[I2C_MODULE_COUNT] = {HAL_LL_PIN_NC,HAL_LL_PIN_NC};
    uint16_t pin_check_result;

    // Check if pins are valid
    if ( HAL_LL_PIN_NC == ( pin_check_result = hal_ll_i2c_master_check_pins( scl, sda, &index_list, handle_map )) ) {
        return HAL_LL_I2C_MASTER_WRONG_PINS;
    };

    if ( (hal_ll_i2c_hw_specifics_map[pin_check_result].pins.pin_scl.pin_name != scl) ||
         (hal_ll_i2c_hw_specifics_map[pin_check_result].pins.pin_sda.pin_name != sda) )
    {
        hal_ll_i2c_master_alternate_functions_set_state( &hal_ll_i2c_hw_specifics_map[ pin_check_result ], false );

        hal_ll_i2c_master_map_pins( pin_check_result, &index_list );

        hal_ll_i2c_master_alternate_functions_set_state( &hal_ll_i2c_hw_specifics_map[ pin_check_result ], true );

        handle_map[pin_check_result].init_ll_state = false;
    }

    *hal_module_id = pin_check_result;

    hal_ll_module_state[pin_check_result].hal_ll_i2c_master_handle = (handle_t *)&hal_ll_i2c_hw_specifics_map[pin_check_result].base;

    handle_map[pin_check_result].hal_ll_i2c_master_handle = (handle_t *)&hal_ll_module_state[pin_check_result].hal_ll_i2c_master_handle;

    return HAL_LL_I2C_MASTER_SUCCESS;
}

hal_ll_err_t hal_ll_module_configure_i2c( handle_t *handle ) {
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);
    hal_ll_i2c_master_handle_register_t *hal_handle = (hal_ll_i2c_master_handle_register_t *)*handle;
    uint8_t pin_check_result = hal_ll_i2c_hw_specifics_map_local->module_index;

    hal_ll_i2c_init( hal_ll_i2c_hw_specifics_map_local );

    hal_ll_module_state[pin_check_result].hal_ll_i2c_master_handle = (handle_t *)&hal_ll_i2c_hw_specifics_map[pin_check_result].base;
    hal_ll_module_state[pin_check_result].init_ll_state = true;
    hal_handle->init_ll_state = true;

    return HAL_LL_I2C_MASTER_SUCCESS;
}

hal_ll_err_t hal_ll_i2c_master_set_speed( handle_t *handle, uint32_t speed ) {
    low_level_handle = hal_ll_i2c_get_handle;
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    low_level_handle->init_ll_state = false;

    hal_ll_i2c_hw_specifics_map_local->speed = hal_ll_i2c_get_speed( speed );

    hal_ll_i2c_init( hal_ll_i2c_hw_specifics_map_local );

    low_level_handle->init_ll_state = true;

    return hal_ll_i2c_hw_specifics_map_local->speed;
}

void hal_ll_i2c_master_set_timeout( handle_t *handle, uint16_t timeout ) {
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    if( HAL_LL_MODULE_ERROR != hal_ll_i2c_hw_specifics_map_local->base ) {
        hal_ll_i2c_hw_specifics_map_local->timeout = timeout;
    }
}

void hal_ll_i2c_master_set_slave_address( handle_t *handle, uint8_t addr ) {
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    if( HAL_LL_MODULE_ERROR != hal_ll_i2c_hw_specifics_map_local->base ) {
        hal_ll_i2c_hw_specifics_map_local->address = addr;
    }
}

hal_ll_err_t hal_ll_i2c_master_read( handle_t *handle, uint8_t *read_data_buf, size_t len_read_data ) {
    low_level_handle = hal_ll_i2c_get_handle;
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    return hal_ll_i2c_master_read_bare_metal( hal_ll_i2c_hw_specifics_map_local, read_data_buf, len_read_data, HAL_LL_I2C_MASTER_END_MODE_STOP );
}

hal_ll_err_t hal_ll_i2c_master_write( handle_t *handle, uint8_t *write_data_buf, size_t len_write_data ) {
    low_level_handle = hal_ll_i2c_get_handle;
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    return hal_ll_i2c_master_write_bare_metal( hal_ll_i2c_hw_specifics_map_local, write_data_buf, len_write_data, HAL_LL_I2C_MASTER_END_MODE_STOP );
}

hal_ll_err_t hal_ll_i2c_master_write_then_read( handle_t *handle, uint8_t *write_data_buf, size_t len_write_data, uint8_t *read_data_buf, size_t len_read_data ) {
    low_level_handle = hal_ll_i2c_get_handle;
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    if( NULL != hal_ll_i2c_master_write_bare_metal( hal_ll_i2c_hw_specifics_map_local, write_data_buf, len_write_data, HAL_LL_I2C_MASTER_WRITE_THEN_READ ) ) {
        return HAL_LL_I2C_MASTER_TIMEOUT_WRITE;
    }

    if( NULL != hal_ll_i2c_master_read_bare_metal( hal_ll_i2c_hw_specifics_map_local, read_data_buf, len_read_data, HAL_LL_I2C_MASTER_WRITE_THEN_READ ) ) {
        return HAL_LL_I2C_MASTER_TIMEOUT_READ;
    }

    return HAL_LL_I2C_MASTER_SUCCESS;
}

void hal_ll_i2c_master_close( handle_t *handle ) {
    low_level_handle = hal_ll_i2c_get_handle;
    hal_ll_i2c_hw_specifics_map_local = hal_ll_get_specifics(hal_ll_i2c_get_module_state_address);

    if( NULL != low_level_handle->hal_ll_i2c_master_handle ) {
        low_level_handle->hal_ll_i2c_master_handle = NULL;
        low_level_handle->hal_drv_i2c_master_handle = NULL;

        low_level_handle->init_ll_state = false;

        hal_ll_i2c_hw_specifics_map_local->address = 0;
        hal_ll_i2c_hw_specifics_map_local->timeout = HAL_LL_I2C_DEFAULT_PASS_COUNT;
        hal_ll_i2c_hw_specifics_map_local->speed = HAL_LL_I2C_MASTER_SPEED_100K;

        hal_ll_i2c_master_set_clock(hal_ll_i2c_hw_specifics_map_local, true);
        hal_ll_i2c_master_alternate_functions_set_state( hal_ll_i2c_hw_specifics_map_local, false );
        hal_ll_i2c_master_set_clock(hal_ll_i2c_hw_specifics_map_local, false);

        hal_ll_i2c_hw_specifics_map_local->pins.pin_scl.pin_name = HAL_LL_PIN_NC;
        hal_ll_i2c_hw_specifics_map_local->pins.pin_sda.pin_name = HAL_LL_PIN_NC;
        hal_ll_i2c_hw_specifics_map_local->pins.pin_scl.pin_af = 0;
        hal_ll_i2c_hw_specifics_map_local->pins.pin_sda.pin_af = 0;
    }
}

// ----------------------------------------------- PRIVATE FUNCTION DEFINITIONS
static hal_ll_err_t hal_ll_i2c_master_read_bare_metal( hal_ll_i2c_hw_specifics_map_t *map, uint8_t *read_data_buf, size_t len_read_data, hal_ll_i2c_master_end_mode_t mode ) {
    hal_ll_i2c_base_handle_t *hal_ll_hw_reg = hal_ll_i2c_get_base_struct(map->base);
    volatile uint32_t status_reg_clear;

    if ( HAL_LL_I2C_MASTER_WRITE_THEN_READ != mode ) {
        while( !hal_ll_i2c_master_is_idle( hal_ll_hw_reg ));
    }

    if( 2 == len_read_data ) {
        set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_POAP_BIT );
    }

    hal_ll_i2c_master_start(map);

    set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_I2CEN_BIT );

    hal_ll_i2c_master_start(map);

    hal_ll_hw_reg->dat = ( map->address << 1 ) | 1;

    if ( len_read_data < 3 ) {
        clear_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_ACKEN_BIT );
    }

    while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_ADDSEND_BIT ));

    // Reading the status registers clears the ADDSEND bit
    status_reg_clear = hal_ll_hw_reg->stat0;
    status_reg_clear = hal_ll_hw_reg->stat1;

    if( 1 == len_read_data ) {
        set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_STOP_BIT );
    }

    while( len_read_data ){
        if( 3 == len_read_data ){
            while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_BTC_BIT ));
            clear_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_ACKEN_BIT );
        }
        if( 2 == len_read_data ) {
            while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_BTC_BIT ));
            set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_STOP_BIT );
        }

        if( check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_RBNE_BIT )) {
            *read_data_buf = hal_ll_hw_reg->dat;
            read_data_buf++;
            len_read_data--;
        }
    }

    while( hal_ll_hw_reg->ctl0 & HAL_LL_I2C_CTL0_STOP_MASK );
    set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_ACKEN_BIT );
    clear_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_POAP_BIT );

    return HAL_LL_I2C_MASTER_SUCCESS;
}

static hal_ll_err_t hal_ll_i2c_master_write_bare_metal( hal_ll_i2c_hw_specifics_map_t *map, uint8_t *write_data_buf, size_t len_write_data, hal_ll_i2c_master_end_mode_t mode ) {
    hal_ll_i2c_base_handle_t *hal_ll_hw_reg = hal_ll_i2c_get_base_struct(map->base);
    volatile uint32_t status_reg_clear;

    while( !hal_ll_i2c_master_is_idle( hal_ll_hw_reg ));

    hal_ll_i2c_master_start(map);

    hal_ll_hw_reg->dat = ( map->address << 1 );

    while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_ADDSEND_BIT ));

    // Reading the status registers clears the ADDSEND bit
    status_reg_clear = hal_ll_hw_reg->stat0;
    status_reg_clear = hal_ll_hw_reg->stat1;

    while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_TBE_BIT ));

    while( len_write_data-- ){
        hal_ll_hw_reg->dat = *write_data_buf;
        write_data_buf++;
        while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_BTC_BIT ));
    }

    if( HAL_LL_I2C_MASTER_WRITE_THEN_READ != mode ) {
        set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_STOP_BIT );
        while( hal_ll_hw_reg->ctl0 & HAL_LL_I2C_CTL0_STOP_MASK );
    } else {
        set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_START_BIT );
    }

    return HAL_LL_I2C_MASTER_SUCCESS;
}

static hal_ll_err_t hal_ll_i2c_master_start( hal_ll_i2c_hw_specifics_map_t *map ) {
    hal_ll_i2c_base_handle_t *hal_ll_hw_reg = hal_ll_i2c_get_base_struct(map->base);
    uint16_t time_counter = map->timeout;

    set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_START_BIT );

    if ( check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_LOSTARB_BIT ) )
        return HAL_LL_I2C_MASTER_ARBITRATION_LOST;

    while( !check_reg_bit( &( hal_ll_hw_reg->stat0 ), HAL_LL_I2C_STAT0_SBSEND_BIT ));

    return HAL_LL_I2C_MASTER_SUCCESS;
}

static bool hal_ll_i2c_master_is_idle( hal_ll_i2c_base_handle_t *hal_ll_hw_reg ) {
    return !( check_reg_bit( &( hal_ll_hw_reg->stat1 ), HAL_LL_I2C_STAT1_I2CBSY_BIT ) );
}

static hal_ll_pin_name_t hal_ll_i2c_master_check_pins( hal_ll_pin_name_t scl, hal_ll_pin_name_t sda, hal_ll_i2c_pin_id *index_list, hal_ll_i2c_master_handle_register_t *handle_map ) {
    static const uint16_t scl_map_size = ( sizeof( hal_ll_i2c_scl_map ) / sizeof( hal_ll_i2c_pin_map_t ) );
    static const uint16_t sda_map_size = ( sizeof( hal_ll_i2c_sda_map ) / sizeof( hal_ll_i2c_pin_map_t ) );
    uint8_t hal_ll_module_id = 0;
    uint8_t index_counter = 0;
    uint16_t scl_index;
    uint16_t sda_index;

    if ( (HAL_LL_PIN_NC == scl) || (HAL_LL_PIN_NC == sda) ) {
        return HAL_LL_PIN_NC;
    }

    for ( scl_index = 0; scl_index < scl_map_size; scl_index++ ) {
        if ( hal_ll_i2c_scl_map[ scl_index ].pin == scl ) {
            for ( sda_index = 0; sda_index < sda_map_size; sda_index++ ) {
                if ( hal_ll_i2c_sda_map[ sda_index ].pin == sda ) {
                    if ( hal_ll_i2c_scl_map[ scl_index ].module_index == hal_ll_i2c_sda_map[ sda_index ].module_index ) {
                        // Get module number
                        hal_ll_module_id = hal_ll_i2c_scl_map[ scl_index ].module_index;
                        // Map pin names
                        index_list[hal_ll_module_id].pin_scl = scl_index;
                        index_list[hal_ll_module_id].pin_sda = sda_index;

                        // Check if module is taken
                        if ( NULL == handle_map[ hal_ll_module_id ].hal_drv_i2c_master_handle ) {
                            return hal_ll_module_id;
                        } else if ( I2C_MODULE_COUNT == ++index_counter ) {
                            return --index_counter;
                        }
                    }
                }
            }
        }
    }

    if ( index_counter ) {
        return hal_ll_module_id;
    } else {
        return HAL_LL_PIN_NC;
    }
}

static hal_ll_i2c_hw_specifics_map_t *hal_ll_get_specifics( handle_t handle ) {
    uint8_t hal_ll_module_count = sizeof(hal_ll_module_state) / (sizeof(hal_ll_i2c_master_handle_register_t));
    static uint8_t hal_ll_module_error = sizeof(hal_ll_module_state) / (sizeof(hal_ll_i2c_master_handle_register_t));

    while( hal_ll_module_count-- ) {
        if (hal_ll_i2c_get_base_from_hal_handle == hal_ll_i2c_hw_specifics_map[hal_ll_module_count].base) {
            return &hal_ll_i2c_hw_specifics_map[hal_ll_module_count];
        }
    }

    return &hal_ll_i2c_hw_specifics_map[hal_ll_module_error];
}

static void hal_ll_i2c_master_set_clock( hal_ll_i2c_hw_specifics_map_t *map, bool hal_ll_state ) {
    switch ( map->module_index )
    {
        #if defined(I2C_MODULE_0)
        case ( hal_ll_i2c_module_num(I2C_MODULE_0) ):
            if( hal_ll_state ) {
                set_reg_bit( RCU_APB1EN, HAL_LL_I2C0EN_BIT );
            } else {
                clear_reg_bit( RCU_APB1EN, HAL_LL_I2C0EN_BIT );
            }
            break;
        #endif
        #if defined(I2C_MODULE_1)
        case ( hal_ll_i2c_module_num(I2C_MODULE_1) ):
            if( hal_ll_state ) {
                set_reg_bit( RCU_APB1EN, HAL_LL_I2C1EN_BIT );
            } else {
                clear_reg_bit( RCU_APB1EN, HAL_LL_I2C1EN_BIT );
            }
            break;
        #endif

        default:
            break;
    }
}

static void hal_ll_i2c_master_map_pins( uint8_t module_index, hal_ll_i2c_pin_id *index_list ) {
    // Map new pins
    hal_ll_i2c_hw_specifics_map[module_index].pins.pin_scl.pin_name = hal_ll_i2c_scl_map[ index_list[module_index].pin_scl ].pin;
    hal_ll_i2c_hw_specifics_map[module_index].pins.pin_sda.pin_name = hal_ll_i2c_sda_map[ index_list[module_index].pin_sda ].pin;
    // SCL and SDA could have different alternate function settings, hence save both AF values
    hal_ll_i2c_hw_specifics_map[module_index].pins.pin_scl.pin_af = hal_ll_i2c_scl_map[ index_list[module_index].pin_scl ].af;
    hal_ll_i2c_hw_specifics_map[module_index].pins.pin_sda.pin_af = hal_ll_i2c_sda_map[ index_list[module_index].pin_sda ].af;
}

static void hal_ll_i2c_master_alternate_functions_set_state( hal_ll_i2c_hw_specifics_map_t *map, bool hal_ll_state ) {
    module_struct module;

    if( (HAL_LL_PIN_NC != map->pins.pin_scl.pin_name) && (HAL_LL_PIN_NC != map->pins.pin_sda.pin_name) ) {
        module.pins[0] = VALUE( map->pins.pin_scl.pin_name, map->pins.pin_scl.pin_af );
        module.pins[1] = VALUE( map->pins.pin_sda.pin_name, map->pins.pin_sda.pin_af );
        module.pins[2] = GPIO_MODULE_STRUCT_END;

        module.configs[0] = HAL_LL_I2C_AF_CONFIG;
        module.configs[1] = HAL_LL_I2C_AF_CONFIG;
        module.configs[2] = GPIO_MODULE_STRUCT_END;

        module.gpio_remap = map->pins.pin_scl.pin_af;

        hal_ll_gpio_module_struct_init( &module, hal_ll_state );
    }
}

static uint32_t hal_ll_i2c_get_speed( uint32_t bit_rate ) {
    if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_FAST ) {
        if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_STANDARD ) {
            return HAL_LL_I2C_MASTER_SPEED_100K;
        } else if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_FULL ) {
            return HAL_LL_I2C_MASTER_SPEED_400K;
        } else if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_FAST ) {
            return HAL_LL_I2C_MASTER_SPEED_1M;
        } else {
            return HAL_LL_I2C_MASTER_SPEED_100K;
        }
    } else {
        if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_100K ) {
            return HAL_LL_I2C_MASTER_SPEED_100K;
        } else if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_400K ) {
            return HAL_LL_I2C_MASTER_SPEED_400K;
        } else if ( bit_rate <= HAL_LL_I2C_MASTER_SPEED_1M ) {
            return HAL_LL_I2C_MASTER_SPEED_1M;
        } else {
            return HAL_LL_I2C_MASTER_SPEED_1M;
        }
    }
}

static void hal_ll_i2c_calculate_speed( uint32_t clock_value, hal_ll_i2c_hw_specifics_map_t *map ) {
    hal_ll_i2c_base_handle_t *hal_ll_hw_reg = hal_ll_i2c_get_base_struct(map->base);
    uint16_t clkc = 0;

    if ( HAL_LL_I2C_MASTER_SPEED_100K >= map->speed ) {
        clkc = ( uint16_t )( clock_value / ( map->speed << 1 ) );
        if ( clkc < HAL_LL_I2CCLK_MINIMUM_ALLOWED_VALUE )
            hal_ll_hw_reg->ckcfg = HAL_LL_I2CCLK_MINIMUM_ALLOWED_VALUE;
        else
            hal_ll_hw_reg->ckcfg = clkc;
    } else {
        if ( !check_reg_bit( &( hal_ll_hw_reg->ckcfg ), HAL_LL_I2C_CKCFG_DTCY_BIT )) {
            // I2C duty cycle is 2
            clkc = ( uint32_t ) ( clock_value / ( map->speed * 3 ));
            hal_ll_hw_reg->ckcfg &= ~HAL_LL_I2C_CKCFG_DTCY_MASK;
        } else {
            // I2C duty cycle is 16/9
            clkc = ( uint32_t ) ( clock_value / ( map->speed * 25 ));
            hal_ll_hw_reg->ckcfg |= HAL_LL_I2C_CKCFG_DTCY_MASK;
        }

        if ( HAL_LL_I2C_MASTER_SPEED_1M == map->speed ) hal_ll_hw_reg->fmpcfg |= 1;

        if ( 0 == ( clkc & HAL_LL_I2C_CKCFG_CLKC_MASK ) ) clkc |= 1;

        hal_ll_hw_reg->ckcfg |= HAL_LL_I2C_CKCFG_FAST_MASK;
        hal_ll_hw_reg->ckcfg |= clkc;
    }
}

static void hal_ll_i2c_hw_init( hal_ll_i2c_hw_specifics_map_t *map ) {
    hal_ll_i2c_base_handle_t *hal_ll_hw_reg = hal_ll_i2c_get_base_struct(map->base);
    uint16_t frequency_range;
    rcu_clocks_t rcu_clocks;

    system_rcu_get_clocks( &rcu_clocks );

    frequency_range = hal_ll_i2c_get_rcu_clocks_apb1;

    hal_ll_hw_reg->ctl1 &= ~HAL_LL_I2C_CTL1_I2CCLK_MASK;

    hal_ll_hw_reg->ctl1 = frequency_range;

    clear_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_I2CEN_BIT );

    hal_ll_hw_reg->rt = hal_ll_set_frequency( frequency_range, map->speed );

    hal_ll_i2c_calculate_speed( rcu_clocks.rcu_clocks_apb1, map );

    hal_ll_hw_reg->ctl0 = 0;

    set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_I2CEN_BIT );

    set_reg_bit( &( hal_ll_hw_reg->ctl0 ), HAL_LL_I2C_CTL0_ACKEN_BIT );
}

static void hal_ll_i2c_init( hal_ll_i2c_hw_specifics_map_t *map ) {
    hal_ll_i2c_master_set_clock( map, true );

    hal_ll_i2c_hw_init( map );
}
// ------------------------------------------------------------------------- END
