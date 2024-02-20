/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/
/*!
 * @file  hal_ll_odcon_map.h
 * @brief HAL LOW LEVEL MAP FOR PIN/PORT ODCON REGISTERS.
 */

#ifndef _HAL_LL_ODCON_MAP_H_
#define _HAL_LL_ODCON_MAP_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_ll_pin_names.h"

/*!< @brief Helper macro for getting adequate module index number */
#define hal_ll_module_num(_module_num) (_module_num - 1)

/*!< @brief Macro defining `weak` attribute */
#define __weak __attribute__((weak))

typedef enum
{
    HAL_LL_HW_MODULES_CCP = 0,
    HAL_LL_HW_MODULES_SPI,
    HAL_LL_HW_MODULES_UART,

    HAL_LL_HW_MODULES_DEFAULT = 0xFF
} hal_ll_hw_modules_t;

/*!< @brief Hal low level slew rate map structure. */
typedef struct
{
    hal_ll_pin_name_t pin;
    uint8_t odcon_address_bit;
    uint8_t module_index;
    hal_ll_base_addr_t odcon_address;
    hal_ll_hw_modules_t is_odconx_numeric;
} hal_ll_odconx_t;

/*!< @brief Hal low level map list */
static const hal_ll_odconx_t odconx_map[ HAL_LL_ODCON_BIT_COUNT + 1 ] =
{
    //------------ BEGIN ODCONx
    #ifdef HAL_LL_ODCON_NUMERIC

    //------------ BEGIN ODCON,ODCON1...
    #ifdef HAL_LL_ODCON2_U1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_U1OD_BIT, hal_ll_module_num(UART_MODULE_1), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON2_U2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_U2OD_BIT, hal_ll_module_num(UART_MODULE_2), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON3_SPI1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON3_SPI1OD_BIT, hal_ll_module_num(SPI_MODULE_1), HAL_LL_ODCON3_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON3_SPI2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON3_SPI2OD_BIT, hal_ll_module_num(SPI_MODULE_2), HAL_LL_ODCON3_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON_U1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_U1OD_BIT, hal_ll_module_num(UART_MODULE_1), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON_U2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_U2OD_BIT, hal_ll_module_num(UART_MODULE_2), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON_CCP1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_CCP1OD_BIT, hal_ll_module_num(CCP_MODULE_1), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON_CCP2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_CCP2OD_BIT, hal_ll_module_num(CCP_MODULE_2), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON_CCP3OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_CCP3OD_BIT, hal_ll_module_num(CCP_MODULE_3), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON_CCP4OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_CCP4OD_BIT, hal_ll_module_num(CCP_MODULE_4), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON_CCP5OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_CCP5OD_BIT, hal_ll_module_num(CCP_MODULE_5), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON_SSPOD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON_SSPOD_BIT, hal_ll_module_num(SPI_MODULE), HAL_LL_ODCON_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON1_CCP4OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP4OD_BIT, hal_ll_module_num(CCP_MODULE_4), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_CCP5OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP5OD_BIT, hal_ll_module_num(CCP_MODULE_5), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_CCP6OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP6OD_BIT, hal_ll_module_num(CCP_MODULE_6), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_CCP7OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP7OD_BIT, hal_ll_module_num(CCP_MODULE_7), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_CCP8OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP8OD_BIT, hal_ll_module_num(CCP_MODULE_8), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON2_CCP9OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP9OD_BIT, hal_ll_module_num(CCP_MODULE_9), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON2_CCP10OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP10OD_BIT, hal_ll_module_num(CCP_MODULE_10), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_SSP1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_SSP1OD_BIT, hal_ll_module_num(SPI_MODULE_1), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON1_SSP2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_SSP2OD_BIT, hal_ll_module_num(SPI_MODULE_2), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON1_USART1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_USART1OD_BIT, hal_ll_module_num(UART_MODULE_1), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON1_USART2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_USART2OD_BIT, hal_ll_module_num(UART_MODULE_2), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON1_USART3OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_USART3OD_BIT, hal_ll_module_num(UART_MODULE_3), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON1_USART4OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_USART4OD_BIT, hal_ll_module_num(UART_MODULE_4), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON2_CCP4OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP4OD_BIT, hal_ll_module_num(CCP_MODULE_4), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON2_CCP5OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP5OD_BIT, hal_ll_module_num(CCP_MODULE_5), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON2_CCP6OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP6OD_BIT, hal_ll_module_num(CCP_MODULE_6), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON2_CCP7OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP7OD_BIT, hal_ll_module_num(CCP_MODULE_7), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON2_CCP8OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP8OD_BIT, hal_ll_module_num(CCP_MODULE_8), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_SPI2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_SPI2OD_BIT, hal_ll_module_num(SPI_MODULE_2), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON1_CCP1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP1OD_BIT, hal_ll_module_num(CCP_MODULE_1), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_CCP2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_CCP2OD_BIT, hal_ll_module_num(CCP_MODULE_2), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON1_SPI1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON1_SPI1OD_BIT, hal_ll_module_num(SPI_MODULE_1), HAL_LL_ODCON1_ADDRESS, HAL_LL_HW_MODULES_SPI },
    #endif
    #ifdef HAL_LL_ODCON2_CCP3OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON2_CCP3OD_BIT, hal_ll_module_num(CCP_MODULE_3), HAL_LL_ODCON2_ADDRESS, HAL_LL_HW_MODULES_CCP },
    #endif
    #ifdef HAL_LL_ODCON3_U1OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON3_U1OD_BIT, hal_ll_module_num(UART_MODULE_1), HAL_LL_ODCON3_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif
    #ifdef HAL_LL_ODCON3_U2OD_BIT
    { HAL_LL_PIN_NC, HAL_LL_ODCON3_U2OD_BIT, hal_ll_module_num(UART_MODULE_2), HAL_LL_ODCON3_ADDRESS, HAL_LL_HW_MODULES_UART },
    #endif

    //------------ END ODCON, ODCON1...
    #endif

    #ifdef HAL_LL_ODCON_ALPHABETIC

    //------------ BEGIN ODCONA,ODCONB...
    #if defined(HAL_LL_ODCONA_ODCA0_BIT) && defined(PA0)
    { PA0 , HAL_LL_ODCONA_ODCA0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA1_BIT) && defined(PA1)
    { PA1 , HAL_LL_ODCONA_ODCA1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA2_BIT) && defined(PA2)
    { PA2 , HAL_LL_ODCONA_ODCA2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA3_BIT) && defined(PA3)
    { PA3 , HAL_LL_ODCONA_ODCA3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA4_BIT) && defined(PA4)
    { PA4 , HAL_LL_ODCONA_ODCA4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA5_BIT) && defined(PA5)
    { PA5 , HAL_LL_ODCONA_ODCA5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA6_BIT) && defined(PA6)
    { PA6 , HAL_LL_ODCONA_ODCA6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONA_ODCA7_BIT) && defined(PA7)
    { PA7 , HAL_LL_ODCONA_ODCA7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONA_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB0_BIT) && defined(PB0)
    { PB0 , HAL_LL_ODCONB_ODCB0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB1_BIT) && defined(PB1)
    { PB1 , HAL_LL_ODCONB_ODCB1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB2_BIT) && defined(PB2)
    { PB2 , HAL_LL_ODCONB_ODCB2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB3_BIT) && defined(PB3)
    { PB3 , HAL_LL_ODCONB_ODCB3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB4_BIT) && defined(PB4)
    { PB4 , HAL_LL_ODCONB_ODCB4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB5_BIT) && defined(PB5)
    { PB5 , HAL_LL_ODCONB_ODCB5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB6_BIT) && defined(PB6)
    { PB6 , HAL_LL_ODCONB_ODCB6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONB_ODCB7_BIT) && defined(PB7)
    { PB7 , HAL_LL_ODCONB_ODCB7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONB_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC0_BIT) && defined(PC0)
    { PC0 , HAL_LL_ODCONC_ODCC0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC1_BIT) && defined(PC1)
    { PC1 , HAL_LL_ODCONC_ODCC1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC2_BIT) && defined(PC2)
    { PC2 , HAL_LL_ODCONC_ODCC2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC3_BIT) && defined(PC3)
    { PC3 , HAL_LL_ODCONC_ODCC3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC4_BIT) && defined(PC4)
    { PC4 , HAL_LL_ODCONC_ODCC4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC5_BIT) && defined(PC5)
    { PC5 , HAL_LL_ODCONC_ODCC5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC6_BIT) && defined(PC6)
    { PC6 , HAL_LL_ODCONC_ODCC6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONC_ODCC7_BIT) && defined(PC7)
    { PC7 , HAL_LL_ODCONC_ODCC7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONC_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD0_BIT) && defined(PD0)
    { PD0 , HAL_LL_ODCOND_ODCD0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD1_BIT) && defined(PD1)
    { PD1 , HAL_LL_ODCOND_ODCD1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD2_BIT) && defined(PD2)
    { PD2 , HAL_LL_ODCOND_ODCD2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD3_BIT) && defined(PD3)
    { PD3 , HAL_LL_ODCOND_ODCD3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD4_BIT) && defined(PD4)
    { PD4 , HAL_LL_ODCOND_ODCD4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD5_BIT) && defined(PD5)
    { PD5 , HAL_LL_ODCOND_ODCD5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD6_BIT) && defined(PD6)
    { PD6 , HAL_LL_ODCOND_ODCD6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCOND_ODCD7_BIT) && defined(PD7)
    { PD7 , HAL_LL_ODCOND_ODCD7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCOND_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE0_BIT) && defined(PE0)
    { PE0 , HAL_LL_ODCONE_ODCE0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE1_BIT) && defined(PE1)
    { PE1 , HAL_LL_ODCONE_ODCE1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE2_BIT) && defined(PE2)
    { PE2 , HAL_LL_ODCONE_ODCE2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF0_BIT) && defined(PF0)
    { PF0 , HAL_LL_ODCONF_ODCF0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF1_BIT) && defined(PF1)
    { PF1 , HAL_LL_ODCONF_ODCF1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF2_BIT) && defined(PF2)
    { PF2 , HAL_LL_ODCONF_ODCF2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF3_BIT) && defined(PF3)
    { PF3 , HAL_LL_ODCONF_ODCF3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF4_BIT) && defined(PF4)
    { PF4 , HAL_LL_ODCONF_ODCF4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF5_BIT) && defined(PF5)
    { PF5 , HAL_LL_ODCONF_ODCF5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF6_BIT) && defined(PF6)
    { PF6 , HAL_LL_ODCONF_ODCF6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONF_ODCF7_BIT) && defined(PF7)
    { PF7 , HAL_LL_ODCONF_ODCF7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONF_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE3_BIT) && defined(PE3)
    { PE3 , HAL_LL_ODCONE_ODCE3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE4_BIT) && defined(PE4)
    { PE4 , HAL_LL_ODCONE_ODCE4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE5_BIT) && defined(PE5)
    { PE5 , HAL_LL_ODCONE_ODCE5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE6_BIT) && defined(PE6)
    { PE6 , HAL_LL_ODCONE_ODCE6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONE_ODCE7_BIT) && defined(PE7)
    { PE7 , HAL_LL_ODCONE_ODCE7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONE_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG0_BIT) && defined(PG0)
    { PG0 , HAL_LL_ODCONG_ODCG0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG1_BIT) && defined(PG1)
    { PG1 , HAL_LL_ODCONG_ODCG1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG2_BIT) && defined(PG2)
    { PG2 , HAL_LL_ODCONG_ODCG2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG3_BIT) && defined(PG3)
    { PG3 , HAL_LL_ODCONG_ODCG3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG4_BIT) && defined(PG4)
    { PG4 , HAL_LL_ODCONG_ODCG4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG6_BIT) && defined(PG6)
    { PG6 , HAL_LL_ODCONG_ODCG6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONG_ODCG7_BIT) && defined(PG7)
    { PG7 , HAL_LL_ODCONG_ODCG7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONG_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH0_BIT) && defined(PH0)
    { PH0 , HAL_LL_ODCONH_ODCH0_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH1_BIT) && defined(PH1)
    { PH1 , HAL_LL_ODCONH_ODCH1_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH2_BIT) && defined(PH2)
    { PH2 , HAL_LL_ODCONH_ODCH2_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH3_BIT) && defined(PH3)
    { PH3 , HAL_LL_ODCONH_ODCH3_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH4_BIT) && defined(PH4)
    { PH4 , HAL_LL_ODCONH_ODCH4_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH5_BIT) && defined(PH5)
    { PH5 , HAL_LL_ODCONH_ODCH5_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH6_BIT) && defined(PH6)
    { PH6 , HAL_LL_ODCONH_ODCH6_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif
    #if defined(HAL_LL_ODCONH_ODCH7_BIT) && defined(PH7)
    { PH7 , HAL_LL_ODCONH_ODCH7_BIT, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_ODCONH_ADDRESS, HAL_LL_HW_MODULES_DEFAULT },
    #endif

    //------------ END ODCONA, ODCONB...
    #endif

    //------------ ODCONx LAST ARRAY ELEMENT
    { HAL_LL_PIN_NC, HAL_LL_PIN_NC, HAL_LL_HW_MODULES_DEFAULT, HAL_LL_MODULE_ERROR, HAL_LL_HW_MODULES_DEFAULT }
    //------------ END ODCONx
};

#ifdef __cplusplus
}
#endif

#endif // _HAL_LL_ODCON_MAP_H_
// ------------------------------------------------------------------------- END
