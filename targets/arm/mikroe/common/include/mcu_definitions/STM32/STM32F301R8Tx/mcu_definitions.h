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
#define ADC1_PA0_CH1
#define ADC1_PA1_CH2
#define ADC1_PA2_CH3
#define ADC1_PA3_CH4
#define ADC1_PA4_CH5
#define ADC1_PA6_CH10
#define ADC1_PA7_CH15
#define ADC1_PB0_CH11
#define ADC1_PB1_CH12
#define ADC1_PB13_CH13
#define ADC1_PC0_CH6
#define ADC1_PC1_CH7
#define ADC1_PC2_CH8
#define ADC1_PC3_CH9

#define ADC_MODULE_1 1

#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_PA15_AF4
#define I2C1_SCL_PB6_AF4
#define I2C1_SCL_PB8_AF4
#define I2C1_SDA_PA14_AF4
#define I2C1_SDA_PB7_AF4
#define I2C1_SDA_PB9_AF4
#define I2C2_SCL_PA9_AF4
#define I2C2_SCL_PF1_AF4
#define I2C2_SDA_PA10_AF4
#define I2C2_SDA_PF0_AF4
#define I2C3_SCL_PA8_AF3
#define I2C3_SDA_PB5_AF8
#define I2C3_SDA_PC9_AF3

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2
#define I2C_MODULE_3 3

#define I2C_MODULE_COUNT 3
//EOF I2C

//UART

//EOF UART

//USART
#define UART1_RX_PA10_AF7
#define UART1_RX_PB7_AF7
#define UART1_RX_PC5_AF7
#define UART1_TX_PA9_AF7
#define UART1_TX_PB6_AF7
#define UART1_TX_PC4_AF7
#define UART2_RX_PA15_AF7
#define UART2_RX_PA3_AF7
#define UART2_RX_PB4_AF7
#define UART2_TX_PA14_AF7
#define UART2_TX_PA2_AF7
#define UART2_TX_PB3_AF7
#define UART3_RX_PB11_AF7
#define UART3_RX_PB8_AF7
#define UART3_RX_PC11_AF7
#define UART3_TX_PB10_AF7
#define UART3_TX_PB9_AF7
#define UART3_TX_PC10_AF7

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3

#define UART_MODULE_COUNT 3
//EOF USART

//SPI
#define SPI2_MISO_PA10_AF5
#define SPI2_MISO_PB14_AF5
#define SPI2_MOSI_PA11_AF5
#define SPI2_MOSI_PB15_AF5
#define SPI2_SCK_PB13_AF5
#define SPI2_SCK_PF1_AF5
#define SPI3_MISO_PB4_AF6
#define SPI3_MISO_PC11_AF6
#define SPI3_MOSI_PB5_AF6
#define SPI3_MOSI_PC12_AF6
#define SPI3_SCK_PB3_AF6
#define SPI3_SCK_PC10_AF6

#define SPI_MODULE_2 1
#define SPI_MODULE_3 2

#define SPI_MODULE_COUNT 2
//EOF SPI

//TIM
#define TIM1_BKIN_PA14_AF6
#define TIM1_BKIN_PA15_AF9
#define TIM1_BKIN_PA6_AF6
#define TIM1_BKIN_PB12_AF6
#define TIM1_BKIN_PB8_AF12
#define TIM1_BKIN2_PA11_AF12
#define TIM1_BKIN2_PC3_AF6
#define TIM1_CH1_PA8_AF6
#define TIM1_CH1_PC0_AF2
#define TIM1_CH1N_PA11_AF6
#define TIM1_CH1N_PA7_AF6
#define TIM1_CH1N_PB13_AF6
#define TIM1_CH1N_PC13_AF4
#define TIM1_CH2_PA9_AF6
#define TIM1_CH2_PC1_AF2
#define TIM1_CH2N_PA12_AF6
#define TIM1_CH2N_PB0_AF6
#define TIM1_CH2N_PB14_AF6
#define TIM1_CH3_PA10_AF6
#define TIM1_CH3_PC2_AF2
#define TIM1_CH3N_PB1_AF6
#define TIM1_CH3N_PB15_AF4
#define TIM1_CH3N_PF0_AF6
#define TIM1_CH4_PA11_AF11
#define TIM1_CH4_PC3_AF2
#define TIM1_ETR_PA12_AF11
#define TIM1_ETR_PC4_AF2
#define TIM15_BKIN_PA9_AF9
#define TIM15_BKIN_PC5_AF2
#define TIM15_CH1_PA2_AF9
#define TIM15_CH1_PB14_AF1
#define TIM15_CH1N_PA1_AF9
#define TIM15_CH1N_PB15_AF2
#define TIM15_CH2_PA3_AF9
#define TIM15_CH2_PB15_AF1
#define TIM16_BKIN_PB5_AF1
#define TIM16_CH1_PA12_AF1
#define TIM16_CH1_PA6_AF1
#define TIM16_CH1_PB4_AF1
#define TIM16_CH1_PB8_AF1
#define TIM16_CH1N_PA13_AF1
#define TIM16_CH1N_PB6_AF1
#define TIM17_BKIN_PA10_AF1
#define TIM17_BKIN_PB4_AF10
#define TIM17_CH1_PA7_AF1
#define TIM17_CH1_PB5_AF10
#define TIM17_CH1_PB9_AF1
#define TIM17_CH1N_PB7_AF1
#define TIM2_CH1_PA0_AF1
#define TIM2_CH1_PA15_AF1
#define TIM2_CH1_PA5_AF1
#define TIM2_CH2_PA1_AF1
#define TIM2_CH2_PB3_AF1
#define TIM2_CH3_PA2_AF1
#define TIM2_CH3_PA9_AF10
#define TIM2_CH3_PB10_AF1
#define TIM2_CH4_PA10_AF10
#define TIM2_CH4_PA3_AF1
#define TIM2_CH4_PB11_AF1
#define TIM2_ETR_PA0_AF1
#define TIM2_ETR_PA15_AF1
#define TIM2_ETR_PA5_AF1

#define TIM1_BUS 2
#define TIM15_BUS 2
#define TIM16_BUS 2
#define TIM17_BUS 2
#define TIM2_BUS 1

#define TIM_MODULE_1 1
#define TIM_MODULE_15 3
#define TIM_MODULE_16 4
#define TIM_MODULE_17 5
#define TIM_MODULE_2 2

#define TIM_MODULE_COUNT 5
//EOF TIM

//GPIO
#define __PF1_CN
#define __PF0_CN
#define __PD2_CN
#define __PC9_CN
#define __PC8_CN
#define __PC7_CN
#define __PC6_CN
#define __PC5_CN
#define __PC4_CN
#define __PC3_CN
#define __PC2_CN
#define __PC15_CN
#define __PC14_CN
#define __PC13_CN
#define __PC12_CN
#define __PC11_CN
#define __PC10_CN
#define __PC1_CN
#define __PC0_CN
#define __PB9_CN
#define __PB8_CN
#define __PB7_CN
#define __PB6_CN
#define __PB5_CN
#define __PB4_CN
#define __PB3_CN
#define __PB2_CN
#define __PB15_CN
#define __PB14_CN
#define __PB13_CN
#define __PB12_CN
#define __PB11_CN
#define __PB10_CN
#define __PB1_CN
#define __PB0_CN
#define __PA9_CN
#define __PA8_CN
#define __PA7_CN
#define __PA6_CN
#define __PA5_CN
#define __PA4_CN
#define __PA3_CN
#define __PA2_CN
#define __PA15_CN
#define __PA14_CN
#define __PA13_CN
#define __PA12_CN
#define __PA11_CN
#define __PA10_CN
#define __PA1_CN
#define __PA0_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_F_CN

#define PORT_SIZE (16)
#define PORT_COUNT (5)
//EOF GPIO

//IVT_TABLE
#define UART1_NVIC  53
#define UART2_NVIC  54
#define UART3_NVIC  55
//EOF IVT_TABLE


#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
