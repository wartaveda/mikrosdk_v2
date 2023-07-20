/****************************************************************************
**
** Copyright (C) 2023 MikroElektronika d.o.o.
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
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

//ADC
#define ADC_PA0_CH0
#define ADC_PA1_CH1
#define ADC_PA4_CH4
#define ADC_PA7_CH7

#define ADC_MODULE 1

#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_PA4_AF3
#define I2C1_SCL_PA9_AF1
#define I2C1_SDA_PA10_AF1
#define I2C1_SDA_PA13_AF3

#define I2C_MODULE_1 1

#define I2C_MODULE_COUNT 1
//EOF I2C

//UART

//EOF UART

//USART
#define UART2_RX_PA0_AF0
#define UART2_RX_PA10_AF4
#define UART2_TX_PA14_AF4
#define UART2_TX_PA9_AF4

#define UART_MODULE_2 1

#define UART_MODULE_COUNT 1
//EOF USART

//SPI
#define SPI1_MISO_PA14_AF5
#define SPI1_MOSI_PA7_AF0
#define SPI1_SCK_PA13_AF5

#define SPI_MODULE_1 1

#define SPI_MODULE_COUNT 1
//EOF SPI

//TIM
#define TIM2_CH1_PA0_AF2
#define TIM2_CH2_PA1_AF2
#define TIM2_CH3_PA10_AF5
#define TIM2_ETR_PA0_AF5
#define TIM2_ETR_PA4_AF5
#define TIM21_CH1_PA10_AF0
#define TIM21_CH2_PA9_AF5
#define TIM21_ETR_PA1_AF5
#define TIM21_ETR_PA7_AF5

#define TIM2_BUS 1
#define TIM21_BUS 2

#define TIM_MODULE_2 1
#define TIM_MODULE_21 2

#define TIM_MODULE_COUNT 2
//EOF TIM

//GPIO
#define __PC15_CN
#define __PC14_CN
#define __PB9_CN
#define __PA9_CN
#define __PA7_CN
#define __PA4_CN
#define __PA14_CN
#define __PA13_CN
#define __PA10_CN
#define __PA1_CN
#define __PA0_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN

#define PORT_SIZE (16)
#define PORT_COUNT (3)
//EOF GPIO

//IVT_TABLE
#define UART2_NVIC   44
#define LPUART1_NVIC  45
//EOF IVT_TABLE


#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
