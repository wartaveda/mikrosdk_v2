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
 * @file  drv_digital_out.h
 * @brief API for Digital output driver.
 */

#ifndef _DRV_DIGITAL_OUT_H_
#define _DRV_DIGITAL_OUT_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "drv_name.h"
#include "hal_gpio.h"

/**
 * @details Return values.
 */
typedef enum
{
    DIGITAL_OUT_SUCCESS = 0,    /*!< Success. */
    DIGITAL_OUT_UNSUPPORTED_PIN = (-1) /*!< Error. */
} digital_out_err_t;

/**
 * @brief Digital output driver context structure, consisted of the following fields :
 * @details The context structure for storing driver internal state.
 * @note The values are specified by #digital_out_init.
 * See #hal_gpio_pin_t for more details.
 * @warning  The contents of the context structure are used by the module and
 * must not be altered. Reading or writing data directly from a control structure
 * by user should be avoided.
 */
typedef struct
{
    hal_gpio_pin_t pin; /*!< Structure defining pin base and mask. */
} digital_out_t;

/*!
 * @addtogroup pergroup Microcontroller Peripherals
 * @{
 */

/*!
 * @addtogroup drvgroup Driver Layer
 * @{
 */

/*!
 * @addtogroup digoutgroup Digital Output Driver
 * @brief Digital Output Pin Driver API Reference.
 * @details This driver provids functions for configuring GPIO pin as digital output and setting logical value to it.
 * @{
 */

/**
 * @brief Initialize GPIO pin.
 * @details Initializes digital output driver context structure
 * and individual GPIO pin as digital output.
 * @param[in,out] out Digital output driver context structure.
 * See #digital_out_t structure definition for detailed explanation.
 * @param[in] name The name of the GPIO pin.
 * See #pin_name_t structure definition for detailed explanation.
 * @return The function can return one of the values defined in
 * the #digital_out_err_t enum list.
 * @pre Make sure that \p out structure has been declared.
 * See #digital_out_t structure definition for detailed explanation.
 * @warning The following example includes pin mapping.
 * Take into consideration that different hardware might not have the same pins.
 * Make sure to accommodate pin name based on your hardware specifics.
 *
 * @b Example
 * @code
 *   // Digital output driver context structure.
 *   static digital_out_t output_pin;
 *
 *   // Initializes digital output driver context structure and individual GPIO pin as digital output.
 *   if ( DIGITAL_OUT_SUCCESS == digital_out_init( &output_pin, GPIO_PB2 ) ) {
 *       // No error
 *   } else {
 *       // Handle the error
 *   }
 * @endcode
 */
err_t digital_out_init( digital_out_t *out, pin_name_t name );

/**
 * @brief Set pin state to logical high.
 * @details Sets digital output individual pin \p out->pin to logic 1.
 * @param[in] out Digital output driver context structure.
 * See #digital_out_t structure definition for detailed explanation.
 * @return The function can return one of the values defined in
 * the #digital_out_err_t enum list.
 * @pre Make sure that \p out structure has been declared and
 * initialized beforehand.
 * See #digital_out_t structure definition and #digital_out_init for detailed explanation.
 *
 * @b Example
 * @code
 *   // Initializes output_pin to logical high state (1).
 *   if ( DIGITAL_OUT_SUCCESS == digital_out_high( &output_pin ) ) {
 *       // No error
 *   } else {
 *       // Handle the error
 *   }
 * @endcode
 */
#if defined(FLATTEN_ME) && (FLATTEN_ME_LEVEL >= FLATTEN_ME_LEVEL_HIGH)
#define digital_out_high(_handle) hal_gpio_set_pin_output( (hal_gpio_pin_t *)_handle )
#else
err_t digital_out_high( digital_out_t *out );
#endif

/**
 * @brief Set pin state to logical low.
 * @details Sets digital output individual pin \p out->pin to logic 0.
 * @param[in] out Digital output driver context structure.
 * See #digital_out_t structure definition for detailed explanation.
 * @return The function can return one of the values defined in
 * the #digital_out_err_t enum list.
 * @pre Make sure that \p out structure has been declared and
 * initialized beforehand.
 * See #digital_out_t structure definition and #digital_out_init for detailed explanation.
 *
 * @b Example
 * @code
 *   // Initializes output_pin to logical low state (0).
 *   if ( DIGITAL_OUT_SUCCESS == digital_out_low( &output_pin ) ) {
 *       // No error
 *   } else {
 *       // Handle the error
 *   }
 * @endcode
 */
#if defined(FLATTEN_ME) && (FLATTEN_ME_LEVEL >= FLATTEN_ME_LEVEL_HIGH)
#define digital_out_low(_handle) hal_gpio_clear_pin_output( (hal_gpio_pin_t *)_handle )
#else
err_t digital_out_low( digital_out_t *out );
#endif

/**
 * @brief Toggle pin state.
 * @details Toggles digital output individual pin \p out->pin logic state.
 * @param[in] out Digital output driver context structure.
 * See #digital_out_t structure definition for detailed explanation.
 * @return The function can return one of the values defined in
 * the #digital_out_err_t enum list.
 * @pre Make sure that \p out structure has been declared and
 * initialized beforehand.
 * See #digital_out_t structure definition and #digital_out_init for detailed explanation.
 *
 * @b Example
 * @code
 *   // Toggle pin state.
 *   if ( DIGITAL_OUT_SUCCESS == digital_out_toggle( &output_pin ) ) {
 *       // No error
 *   } else {
 *       // Handle the error
 *   }
 * @endcode
 */
#if defined(FLATTEN_ME) && (FLATTEN_ME_LEVEL >= FLATTEN_ME_LEVEL_HIGH)
#define digital_out_toggle(_handle) hal_gpio_toggle_pin_output( (hal_gpio_pin_t *)_handle )
#else
err_t digital_out_toggle( digital_out_t *out );
#endif

/**
 * @brief Set pin state.
 * @details Sets digital output individual pin \p out->pin to
 * logic state declared by \p value .
 * @param[in] out Digital output driver context structure.
 * See #digital_out_t structure definition for detailed explanation.
 * @param[in] value Logic value to write.
 * @return The function can return one of the values defined in
 * the #digital_out_err_t enum list.
 * @pre Make sure that \p out structure has been declared and
 * initialized beforehand.
 * See #digital_out_t structure definition and #digital_out_init for detailed explanation.
 *
 * @b Example
 * @code
 *   // Write value to GPIO port.
 *   if ( DIGITAL_OUT_SUCCESS == digital_out_write( &output_pin, 1 ) ) {
 *       // No error
 *   } else {
 *       // Handle the error
 *   }
 * @endcode
 */
#if defined(FLATTEN_ME) && (FLATTEN_ME_LEVEL >= FLATTEN_ME_LEVEL_HIGH)
#define digital_out_write(_handle,_value) hal_gpio_write_pin_output( (hal_gpio_pin_t *)_handle, _value )
#else
err_t digital_out_write( digital_out_t *out, uint8_t value );
#endif

/**
 * @brief Read GPIO pin.
 * @details Reads the current output value of the individual GPIO pin.
 * @param[in] out Digital output driver context structure.
 * See #digital_out_t structure definition for detailed explanation.
 * @return Function returns pin logical state (1 or 0).
 * @pre Make sure that \p out structure has been declared and
 * initialized beforehand.
 * See #digital_out_t structure definition and #digital_out_init for detailed explanation.
 * @note Return value depends on signal being output to current pin.
 *
 * @b Example
 * @code
 *   // GPIO value holder.
 *   uint8_t value;
 *
 *   // Read digital output value.
 *   value = digital_out_read( &output_pin );
 * @endcode
 */
#if defined(FLATTEN_ME) && (FLATTEN_ME_LEVEL >= FLATTEN_ME_LEVEL_HIGH)
#define digital_out_read(_handle) hal_gpio_read_pin_output( (hal_gpio_pin_t *)_handle )
#else
uint8_t digital_out_read( digital_out_t *out );
#endif

/*! @} */ // digoutgroup
/*! @} */ // drvgroup
/*! @} */ // pergroup

#ifdef __cplusplus
}
#endif

#endif // _DRV_DIGITAL_OUT_H_
// ------------------------------------------------------------------------- END
