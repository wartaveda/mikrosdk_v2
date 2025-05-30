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
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions for PIC32MZ1024ECG064
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

//DMA
#define DMA_NUM_OF_MODULES 1
#define DMA_NUM_OF_STREAMS 8
#define DMA_NUM_OF_STREAMS_FAMILY 8
#define DMA_NUM_OF_CHANNELS 255
#define DMA_NUM_OF_CHANNELS_FAMILY 255
//EOF DMA

//ADC
#define HAL_LL_RB0_AN0_ANSELB 0
#define HAL_LL_RB0_AN0_ANSELB_BIT 0
#define HAL_LL_RB1_AN1_ANSELB 1
#define HAL_LL_RB1_AN1_ANSELB_BIT 1
#define HAL_LL_RB10_AN5_ANSELB 5
#define HAL_LL_RB10_AN5_ANSELB_BIT 10
#define HAL_LL_RB11_AN6_ANSELB 6
#define HAL_LL_RB11_AN6_ANSELB_BIT 11
#define HAL_LL_RB12_AN7_ANSELB 7
#define HAL_LL_RB12_AN7_ANSELB_BIT 12
#define HAL_LL_RB13_AN8_ANSELB 8
#define HAL_LL_RB13_AN8_ANSELB_BIT 13
#define HAL_LL_RB14_AN9_ANSELB 9
#define HAL_LL_RB14_AN9_ANSELB_BIT 14
#define HAL_LL_RB15_AN10_ANSELB 10
#define HAL_LL_RB15_AN10_ANSELB_BIT 15
#define HAL_LL_RB2_AN2_ANSELB 2
#define HAL_LL_RB2_AN2_ANSELB_BIT 2
#define HAL_LL_RB3_AN3_ANSELB 3
#define HAL_LL_RB3_AN3_ANSELB_BIT 3
#define HAL_LL_RB4_AN4_ANSELB 4
#define HAL_LL_RB4_AN4_ANSELB_BIT 4
#define HAL_LL_RB5_AN45_ANSELB 45
#define HAL_LL_RB5_AN45_ANSELB_BIT 5
#define HAL_LL_RB6_AN46_ANSELB 46
#define HAL_LL_RB6_AN46_ANSELB_BIT 6
#define HAL_LL_RB7_AN47_ANSELB 47
#define HAL_LL_RB7_AN47_ANSELB_BIT 7
#define HAL_LL_RB8_AN48_ANSELB 48
#define HAL_LL_RB8_AN48_ANSELB_BIT 8
#define HAL_LL_RB9_AN49_ANSELB 49
#define HAL_LL_RB9_AN49_ANSELB_BIT 9
#define HAL_LL_RE4_AN18_ANSELE 18
#define HAL_LL_RE4_AN18_ANSELE_BIT 4
#define HAL_LL_RE5_AN17_ANSELE 17
#define HAL_LL_RE5_AN17_ANSELE_BIT 5
#define HAL_LL_RE6_AN16_ANSELE 16
#define HAL_LL_RE6_AN16_ANSELE_BIT 6
#define HAL_LL_RE7_AN15_ANSELE 15
#define HAL_LL_RE7_AN15_ANSELE_BIT 7
#define HAL_LL_RG6_AN14_ANSELG 14
#define HAL_LL_RG6_AN14_ANSELG_BIT 6
#define HAL_LL_RG7_AN13_ANSELG 13
#define HAL_LL_RG7_AN13_ANSELG_BIT 7
#define HAL_LL_RG8_AN12_ANSELG 12
#define HAL_LL_RG8_AN12_ANSELG_BIT 8
#define HAL_LL_RG9_AN11_ANSELG 11
#define HAL_LL_RG9_AN11_ANSELG_BIT 9

#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
#define HAL_LL_AN_COUNT 24

#define HAL_LL_DEVADC7_ADDRESS 0xBFC5401CUL
#define HAL_LL_DEVADC4_ADDRESS 0xBFC54010UL
#define HAL_LL_DEVADC3_ADDRESS 0xBFC5400CUL
#define HAL_LL_DEVADC2_ADDRESS 0xBFC54008UL
#define HAL_LL_DEVADC1_ADDRESS 0xBFC54004UL
#define HAL_LL_DEVADC0_ADDRESS 0xBFC54000UL
#define HAL_LL_ANSELG_ADDRESS 0xBF860600UL
#define HAL_LL_ANSELE_ADDRESS 0xBF860400UL
#define HAL_LL_ANSELB_ADDRESS 0xBF860100UL
#define HAL_LL_ADCTRGSNS_ADDRESS 0xBF84B0D0UL
#define HAL_LL_ADCTRGMODE_ADDRESS 0xBF84B00CUL
#define HAL_LL_ADCTRG3_ADDRESS 0xBF84B088UL
#define HAL_LL_ADCTRG2_ADDRESS 0xBF84B084UL
#define HAL_LL_ADCTRG1_ADDRESS 0xBF84B080UL
#define HAL_LL_ADCSYSCFG1_ADDRESS 0xBF84B1C4UL
#define HAL_LL_ADCSYSCFG0_ADDRESS 0xBF84B1C0UL
#define HAL_LL_ADCIMCON3_ADDRESS 0xBF84B018UL
#define HAL_LL_ADCIMCON2_ADDRESS 0xBF84B014UL
#define HAL_LL_ADCIMCON1_ADDRESS 0xBF84B010UL
#define HAL_LL_ADCGIRQEN2_ADDRESS 0xBF84B024UL
#define HAL_LL_ADCGIRQEN1_ADDRESS 0xBF84B020UL
#define HAL_LL_ADCFSTAT_ADDRESS 0xBF84B0B8UL
#define HAL_LL_ADCFLTR6_ADDRESS 0xBF84B07CUL
#define HAL_LL_ADCFLTR5_ADDRESS 0xBF84B078UL
#define HAL_LL_ADCFLTR4_ADDRESS 0xBF84B074UL
#define HAL_LL_ADCFLTR3_ADDRESS 0xBF84B070UL
#define HAL_LL_ADCFLTR2_ADDRESS 0xBF84B06CUL
#define HAL_LL_ADCFLTR1_ADDRESS 0xBF84B068UL
#define HAL_LL_ADCFIFO_ADDRESS 0xBF84B0BCUL
#define HAL_LL_ADCEISTAT2_ADDRESS 0xBF84B0FCUL
#define HAL_LL_ADCEISTAT1_ADDRESS 0xBF84B0F8UL
#define HAL_LL_ADCEIEN2_ADDRESS 0xBF84B0F4UL
#define HAL_LL_ADCEIEN1_ADDRESS 0xBF84B0F0UL
#define HAL_LL_ADCDSTAT2_ADDRESS 0xBF84B034UL
#define HAL_LL_ADCDSTAT1_ADDRESS 0xBF84B030UL
#define HAL_LL_ADCDATA9_ADDRESS 0xBF84B224UL
#define HAL_LL_ADCDATA8_ADDRESS 0xBF84B220UL
#define HAL_LL_ADCDATA7_ADDRESS 0xBF84B21CUL
#define HAL_LL_ADCDATA6_ADDRESS 0xBF84B218UL
#define HAL_LL_ADCDATA5_ADDRESS 0xBF84B214UL
#define HAL_LL_ADCDATA44_ADDRESS 0xBF84B2B0UL
#define HAL_LL_ADCDATA43_ADDRESS 0xBF84B2ACUL
#define HAL_LL_ADCDATA4_ADDRESS 0xBF84B210UL
#define HAL_LL_ADCDATA3_ADDRESS 0xBF84B20CUL
#define HAL_LL_ADCDATA2_ADDRESS 0xBF84B208UL
#define HAL_LL_ADCDATA18_ADDRESS 0xBF84B248UL
#define HAL_LL_ADCDATA17_ADDRESS 0xBF84B244UL
#define HAL_LL_ADCDATA16_ADDRESS 0xBF84B240UL
#define HAL_LL_ADCDATA15_ADDRESS 0xBF84B23CUL
#define HAL_LL_ADCDATA14_ADDRESS 0xBF84B238UL
#define HAL_LL_ADCDATA13_ADDRESS 0xBF84B234UL
#define HAL_LL_ADCDATA12_ADDRESS 0xBF84B230UL
#define HAL_LL_ADCDATA11_ADDRESS 0xBF84B22CUL
#define HAL_LL_ADCDATA10_ADDRESS 0xBF84B228UL
#define HAL_LL_ADCDATA1_ADDRESS 0xBF84B204UL
#define HAL_LL_ADCDATA0_ADDRESS 0xBF84B200UL
#define HAL_LL_ADCCSS2_ADDRESS 0xBF84B02CUL
#define HAL_LL_ADCCSS1_ADDRESS 0xBF84B028UL
#define HAL_LL_ADCCON3_ADDRESS 0xBF84B008UL
#define HAL_LL_ADCCON2_ADDRESS 0xBF84B004UL
#define HAL_LL_ADCCON1_ADDRESS 0xBF84B000UL
#define HAL_LL_ADCCMPEN6_ADDRESS 0xBF84B060UL
#define HAL_LL_ADCCMPEN5_ADDRESS 0xBF84B058UL
#define HAL_LL_ADCCMPEN4_ADDRESS 0xBF84B050UL
#define HAL_LL_ADCCMPEN3_ADDRESS 0xBF84B048UL
#define HAL_LL_ADCCMPEN2_ADDRESS 0xBF84B040UL
#define HAL_LL_ADCCMPEN1_ADDRESS 0xBF84B038UL
#define HAL_LL_ADCCMPCON6_ADDRESS 0xBF84B0B4UL
#define HAL_LL_ADCCMPCON5_ADDRESS 0xBF84B0B0UL
#define HAL_LL_ADCCMPCON4_ADDRESS 0xBF84B0ACUL
#define HAL_LL_ADCCMPCON3_ADDRESS 0xBF84B0A8UL
#define HAL_LL_ADCCMPCON2_ADDRESS 0xBF84B0A4UL
#define HAL_LL_ADCCMPCON1_ADDRESS 0xBF84B0A0UL
#define HAL_LL_ADCCMP6_ADDRESS 0xBF84B064UL
#define HAL_LL_ADCCMP5_ADDRESS 0xBF84B05CUL
#define HAL_LL_ADCCMP4_ADDRESS 0xBF84B054UL
#define HAL_LL_ADCCMP3_ADDRESS 0xBF84B04CUL
#define HAL_LL_ADCCMP2_ADDRESS 0xBF84B044UL
#define HAL_LL_ADCCMP1_ADDRESS 0xBF84B03CUL
#define HAL_LL_ADCBASE_ADDRESS 0xBF84B0C0UL
#define HAL_LL_ADCANCON_ADDRESS 0xBF84B100UL
#define HAL_LL_ADC7CFG_ADDRESS 0xBF84B19CUL
#define HAL_LL_ADC4TIME_ADDRESS 0xBF84B0E4UL
#define HAL_LL_ADC4CFG_ADDRESS 0xBF84B190UL
#define HAL_LL_ADC3TIME_ADDRESS 0xBF84B0E0UL
#define HAL_LL_ADC3CFG_ADDRESS 0xBF84B18CUL
#define HAL_LL_ADC2TIME_ADDRESS 0xBF84B0DCUL
#define HAL_LL_ADC2CFG_ADDRESS 0xBF84B188UL
#define HAL_LL_ADC1TIME_ADDRESS 0xBF84B0D8UL
#define HAL_LL_ADC1CFG_ADDRESS 0xBF84B184UL
#define HAL_LL_ADC0TIME_ADDRESS 0xBF84B0D4UL
#define HAL_LL_ADC0CFG_ADDRESS 0xBF84B180UL

#define HAL_LL_RB0_AN0_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB1_AN1_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB10_AN5_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB11_AN6_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB12_AN7_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB13_AN8_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB14_AN9_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB15_AN10_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB2_AN2_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB3_AN3_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB4_AN4_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB5_AN45_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB6_AN46_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB7_AN47_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB8_AN48_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RB9_AN49_ANSELB_ADDRESS HAL_LL_ANSELB_ADDRESS
#define HAL_LL_RE4_AN18_ANSELE_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE5_AN17_ANSELE_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE6_AN16_ANSELE_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RE7_AN15_ANSELE_ADDRESS HAL_LL_ANSELE_ADDRESS
#define HAL_LL_RG6_AN14_ANSELG_ADDRESS HAL_LL_ANSELG_ADDRESS
#define HAL_LL_RG7_AN13_ANSELG_ADDRESS HAL_LL_ANSELG_ADDRESS
#define HAL_LL_RG8_AN12_ANSELG_ADDRESS HAL_LL_ANSELG_ADDRESS
#define HAL_LL_RG9_AN11_ANSELG_ADDRESS HAL_LL_ANSELG_ADDRESS
//EOF ADC

//I2C
#define I2C1_SCL_RD10
#define I2C1_SDA_RD9
#define I2C3_SCL_RD3
#define I2C3_SDA_RD2
#define I2C4_SCL_RG8
#define I2C4_SDA_RG7
#define I2C5_SCL_RF5
#define I2C5_SDA_RF4

#define I2C_MODULE_1 1
#define I2C_MODULE_3 2
#define I2C_MODULE_4 3
#define I2C_MODULE_5 4

#define I2C_MODULE_COUNT 4

#define HAL_LL_I2C_PPS_ENABLED false
//EOF I2C

//UART
#define UART1_RX_RD2
#define UART1_RX_RG8
#define UART1_RX_RF4
#define UART1_RX_RD10
#define UART1_RX_RF1
#define UART1_RX_RB9
#define UART1_RX_RB10
#define UART1_RX_RC14
#define UART1_RX_RB5

#define UART2_RX_RD9
#define UART2_RX_RG6
#define UART2_RX_RB8
#define UART2_RX_RB15
#define UART2_RX_RD4
#define UART2_RX_RB0
#define UART2_RX_RE3
#define UART2_RX_RB7

#define UART3_RX_RD3
#define UART3_RX_RG7
#define UART3_RX_RF5
#define UART3_RX_RD11
#define UART3_RX_RF0
#define UART3_RX_RB1
#define UART3_RX_RE5
#define UART3_RX_RC13
#define UART3_RX_RB3

#define UART4_RX_RD1
#define UART4_RX_RG9
#define UART4_RX_RB14
#define UART4_RX_RD0
#define UART4_RX_RB6
#define UART4_RX_RD5
#define UART4_RX_RB2
#define UART4_RX_RF3

#define UART5_RX_RD2
#define UART5_RX_RG8
#define UART5_RX_RF4
#define UART5_RX_RD10
#define UART5_RX_RF1
#define UART5_RX_RB9
#define UART5_RX_RB10
#define UART5_RX_RC14
#define UART5_RX_RB5

#define UART6_RX_RD1
#define UART6_RX_RG9
#define UART6_RX_RB14
#define UART6_RX_RD0
#define UART6_RX_RB6
#define UART6_RX_RD5
#define UART6_RX_RB2
#define UART6_RX_RF3

//Output
#define UART1_TX_RD3
#define UART1_TX_RG7
#define UART1_TX_RF5
#define UART1_TX_RD11
#define UART1_TX_RF0
#define UART1_TX_RB1
#define UART1_TX_RE5
#define UART1_TX_RC13
#define UART1_TX_RB3

#define UART2_TX_RD1
#define UART2_TX_RG9
#define UART2_TX_RB14
#define UART2_TX_RD0
#define UART2_TX_RB6
#define UART2_TX_RD5
#define UART2_TX_RB2
#define UART2_TX_RF3

#define UART3_TX_RD2
#define UART3_TX_RG8
#define UART3_TX_RF4
#define UART3_TX_RD10
#define UART3_TX_RF1
#define UART3_TX_RB9
#define UART3_TX_RB10
#define UART3_TX_RC14
#define UART3_TX_RB5

#define UART4_TX_RD9
#define UART4_TX_RG6
#define UART4_TX_RB8
#define UART4_TX_RB15
#define UART4_TX_RD4
#define UART4_TX_RB0
#define UART4_TX_RE3
#define UART4_TX_RB7

#define UART5_TX_RD3
#define UART5_TX_RG7
#define UART5_TX_RF5
#define UART5_TX_RD11
#define UART5_TX_RF0
#define UART5_TX_RB1
#define UART5_TX_RE5
#define UART5_TX_RC13
#define UART5_TX_RB3

#define UART6_TX_RD9
#define UART6_TX_RG6
#define UART6_TX_RB8
#define UART6_TX_RB15
#define UART6_TX_RD4
#define UART6_TX_RB0
#define UART6_TX_RE3
#define UART6_TX_RB7

#define UART6_TX_RD1
#define UART6_TX_RG9
#define UART6_TX_RB14
#define UART6_TX_RD0
#define UART6_TX_RB6
#define UART6_TX_RD5
#define UART6_TX_RB2
#define UART6_TX_RF3

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4
#define UART_MODULE_5 5
#define UART_MODULE_6 6

#define UART_MODULE_COUNT 6

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

//SPI
#define SPI1_SCK_RD1
#define SPI2_SCK_RG6
#define SPI3_SCK_RB14
#define SPI4_SCK_RD10

#define SPI1_MISO_RD2
#define SPI1_MISO_RG8
#define SPI1_MISO_RF4
#define SPI1_MISO_RD10
#define SPI1_MISO_RF1
#define SPI1_MISO_RB9
#define SPI1_MISO_RB10
#define SPI1_MISO_RC14
#define SPI1_MISO_RB5

#define SPI2_MISO_RD3
#define SPI2_MISO_RG7
#define SPI2_MISO_RF5
#define SPI2_MISO_RD11
#define SPI2_MISO_RF0
#define SPI2_MISO_RB1
#define SPI2_MISO_RE5
#define SPI2_MISO_RC13
#define SPI2_MISO_RB3

#define SPI3_MISO_RD2
#define SPI3_MISO_RG8
#define SPI3_MISO_RF4
#define SPI3_MISO_RD10
#define SPI3_MISO_RF1
#define SPI3_MISO_RB9
#define SPI3_MISO_RB10
#define SPI3_MISO_RC14
#define SPI3_MISO_RB5

#define SPI4_MISO_RD3
#define SPI4_MISO_RG7
#define SPI4_MISO_RF5
#define SPI4_MISO_RD11
#define SPI4_MISO_RF0
#define SPI4_MISO_RB1
#define SPI4_MISO_RE5
#define SPI4_MISO_RC13
#define SPI4_MISO_RB3

//Output
#define SPI1_MOSI_RD2
#define SPI1_MOSI_RG8
#define SPI1_MOSI_RF4
#define SPI1_MOSI_RD10
#define SPI1_MOSI_RF1
#define SPI1_MOSI_RB9
#define SPI1_MOSI_RB10
#define SPI1_MOSI_RC14
#define SPI1_MOSI_RB5

#define SPI1_MOSI_RD3
#define SPI1_MOSI_RG7
#define SPI1_MOSI_RF5
#define SPI1_MOSI_RD11
#define SPI1_MOSI_RF0
#define SPI1_MOSI_RB1
#define SPI1_MOSI_RE5
#define SPI1_MOSI_RC13
#define SPI1_MOSI_RB3

#define SPI2_MOSI_RD3
#define SPI2_MOSI_RG7
#define SPI2_MOSI_RF5
#define SPI2_MOSI_RD11
#define SPI2_MOSI_RF0
#define SPI2_MOSI_RB1
#define SPI2_MOSI_RE5
#define SPI2_MOSI_RC13
#define SPI2_MOSI_RB3

#define SPI2_MOSI_RD2
#define SPI2_MOSI_RG8
#define SPI2_MOSI_RF4
#define SPI2_MOSI_RD10
#define SPI2_MOSI_RF1
#define SPI2_MOSI_RB9
#define SPI2_MOSI_RB10
#define SPI2_MOSI_RC14
#define SPI2_MOSI_RB5

#define SPI3_MOSI_RD3
#define SPI3_MOSI_RG7
#define SPI3_MOSI_RF5
#define SPI3_MOSI_RD11
#define SPI3_MOSI_RF0
#define SPI3_MOSI_RB1
#define SPI3_MOSI_RE5
#define SPI3_MOSI_RC13
#define SPI3_MOSI_RB3

#define SPI3_MOSI_RD2
#define SPI3_MOSI_RG8
#define SPI3_MOSI_RF4
#define SPI3_MOSI_RD10
#define SPI3_MOSI_RF1
#define SPI3_MOSI_RB9
#define SPI3_MOSI_RB10
#define SPI3_MOSI_RC14
#define SPI3_MOSI_RB5

#define SPI4_MOSI_RD3
#define SPI4_MOSI_RG7
#define SPI4_MOSI_RF5
#define SPI4_MOSI_RD11
#define SPI4_MOSI_RF0
#define SPI4_MOSI_RB1
#define SPI4_MOSI_RE5
#define SPI4_MOSI_RC13
#define SPI4_MOSI_RB3

#define SPI4_MOSI_RD1
#define SPI4_MOSI_RG9
#define SPI4_MOSI_RB14
#define SPI4_MOSI_RD0
#define SPI4_MOSI_RB6
#define SPI4_MOSI_RD5
#define SPI4_MOSI_RB2
#define SPI4_MOSI_RF3

#define SPI_MODULE_1 1
#define SPI_MODULE_2 2
#define SPI_MODULE_3 3
#define SPI_MODULE_4 4

#define SPI_MODULE_COUNT 4

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

//PWM
#define PWM1_OC_RD1
#define PWM1_OC_RG9
#define PWM1_OC_RB14
#define PWM1_OC_RD0
#define PWM1_OC_RB6
#define PWM1_OC_RD5
#define PWM1_OC_RB2
#define PWM1_OC_RF3

#define PWM2_OC_RD1
#define PWM2_OC_RG9
#define PWM2_OC_RB14
#define PWM2_OC_RD0
#define PWM2_OC_RB6
#define PWM2_OC_RD5
#define PWM2_OC_RB2
#define PWM2_OC_RF3

#define PWM3_OC_RD2
#define PWM3_OC_RG8
#define PWM3_OC_RF4
#define PWM3_OC_RD10
#define PWM3_OC_RF1
#define PWM3_OC_RB9
#define PWM3_OC_RB10
#define PWM3_OC_RC14
#define PWM3_OC_RB5

#define PWM4_OC_RD3
#define PWM4_OC_RG7
#define PWM4_OC_RF5
#define PWM4_OC_RD11
#define PWM4_OC_RF0
#define PWM4_OC_RB1
#define PWM4_OC_RE5
#define PWM4_OC_RC13
#define PWM4_OC_RB3

#define PWM5_OC_RD9
#define PWM5_OC_RG6
#define PWM5_OC_RB8
#define PWM5_OC_RB15
#define PWM5_OC_RD4
#define PWM5_OC_RB0
#define PWM5_OC_RE3
#define PWM5_OC_RB7

#define PWM6_OC_RD2
#define PWM6_OC_RG8
#define PWM6_OC_RF4
#define PWM6_OC_RD10
#define PWM6_OC_RF1
#define PWM6_OC_RB9
#define PWM6_OC_RB10
#define PWM6_OC_RC14
#define PWM6_OC_RB5

#define PWM7_OC_RD3
#define PWM7_OC_RG7
#define PWM7_OC_RF5
#define PWM7_OC_RD11
#define PWM7_OC_RF0
#define PWM7_OC_RB1
#define PWM7_OC_RE5
#define PWM7_OC_RC13
#define PWM7_OC_RB3

#define PWM8_OC_RD9
#define PWM8_OC_RG6
#define PWM8_OC_RB8
#define PWM8_OC_RB15
#define PWM8_OC_RD4
#define PWM8_OC_RB0
#define PWM8_OC_RE3
#define PWM8_OC_RB7

#define PWM9_OC_RD1
#define PWM9_OC_RG9
#define PWM9_OC_RB14
#define PWM9_OC_RD0
#define PWM9_OC_RB6
#define PWM9_OC_RD5
#define PWM9_OC_RB2
#define PWM9_OC_RF3

#define OCR_MODULE_1 1
#define OCR_MODULE_2 2
#define OCR_MODULE_3 3
#define OCR_MODULE_4 4
#define OCR_MODULE_5 5
#define OCR_MODULE_6 6
#define OCR_MODULE_7 7
#define OCR_MODULE_8 8
#define OCR_MODULE_9 9

#define OCR_MODULE_COUNT 9

#define TIM_MODULE_COUNT OCR_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED true
//EOF PWM

//IO
#define __RB0_CN
#define __RB1_CN
#define __RB10_CN
#define __RB11_CN
#define __RB12_CN
#define __RB13_CN
#define __RB14_CN
#define __RB15_CN
#define __RB2_CN
#define __RB3_CN
#define __RB4_CN
#define __RB5_CN
#define __RB6_CN
#define __RB7_CN
#define __RB8_CN
#define __RB9_CN
#define __RC12_CN
#define __RC13_CN
#define __RC14_CN
#define __RC15_CN
#define __RD0_CN
#define __RD1_CN
#define __RD10_CN
#define __RD11_CN
#define __RD2_CN
#define __RD3_CN
#define __RD4_CN
#define __RD5_CN
#define __RD9_CN
#define __RE0_CN
#define __RE1_CN
#define __RE2_CN
#define __RE3_CN
#define __RE4_CN
#define __RE5_CN
#define __RE6_CN
#define __RE7_CN
#define __RF0_CN
#define __RF1_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RG6_CN
#define __RG7_CN
#define __RG8_CN
#define __RG9_CN

#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define __PORT_G_CN
#define PORT_COUNT (6)
#define PORT_SIZE (16)
//EOF IO

// GPIO Register addresses and offsets
#define LATB_BASE_ADDRESS 0xBF860130UL
#define LATC_BASE_ADDRESS 0xBF860230UL
#define LATD_BASE_ADDRESS 0xBF860330UL
#define LATE_BASE_ADDRESS 0xBF860430UL
#define LATF_BASE_ADDRESS 0xBF860530UL
#define LATG_BASE_ADDRESS 0xBF860630UL
#define PORTB_BASE_ADDRESS 0xBF860120UL
#define PORTC_BASE_ADDRESS 0xBF860220UL
#define PORTD_BASE_ADDRESS 0xBF860320UL
#define PORTE_BASE_ADDRESS 0xBF860420UL
#define PORTF_BASE_ADDRESS 0xBF860520UL
#define PORTG_BASE_ADDRESS 0xBF860620UL
#define TRISB_BASE_ADDRESS 0xBF860110UL
#define TRISC_BASE_ADDRESS 0xBF860210UL
#define TRISD_BASE_ADDRESS 0xBF860310UL
#define TRISE_BASE_ADDRESS 0xBF860410UL
#define TRISF_BASE_ADDRESS 0xBF860510UL
#define TRISG_BASE_ADDRESS 0xBF860610UL
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_I2C1MD_ENABLE_BIT 16
#define HAL_LL_I2C3MD_ENABLE_BIT 17
#define HAL_LL_I2C4MD_ENABLE_BIT 18
#define HAL_LL_I2C5MD_ENABLE_BIT 19
#define HAL_LL_OC1MD_ENABLE_BIT 16
#define HAL_LL_OC2MD_ENABLE_BIT 17
#define HAL_LL_OC3MD_ENABLE_BIT 18
#define HAL_LL_OC4MD_ENABLE_BIT 19
#define HAL_LL_OC5MD_ENABLE_BIT 20
#define HAL_LL_OC6MD_ENABLE_BIT 21
#define HAL_LL_OC7MD_ENABLE_BIT 22
#define HAL_LL_OC8MD_ENABLE_BIT 23
#define HAL_LL_OC9MD_ENABLE_BIT 24
#define HAL_LL_PMD1_ADDRESS 0xBF800040UL
#define HAL_LL_PMD2_ADDRESS 0xBF800050UL
#define HAL_LL_PMD3_ADDRESS 0xBF800060UL
#define HAL_LL_PMD4_ADDRESS 0xBF800070UL
#define HAL_LL_PMD5_ADDRESS 0xBF800080UL
#define HAL_LL_PMD6_ADDRESS 0xBF800090UL
#define HAL_LL_PMD7_ADDRESS 0xBF8000A0UL
#define HAL_LL_SPI1MD_ENABLE_BIT 8
#define HAL_LL_SPI2MD_ENABLE_BIT 9
#define HAL_LL_SPI3MD_ENABLE_BIT 10
#define HAL_LL_SPI4MD_ENABLE_BIT 11
#define HAL_LL_U1MD_ENABLE_BIT 0
#define HAL_LL_U2MD_ENABLE_BIT 1
#define HAL_LL_U3MD_ENABLE_BIT 2
#define HAL_LL_U4MD_ENABLE_BIT 3
#define HAL_LL_U5MD_ENABLE_BIT 4
#define HAL_LL_U6MD_ENABLE_BIT 5
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_I2C1ADD_ADDRESS 0xBF820020UL
#define HAL_LL_I2C1BRG_ADDRESS 0xBF820040UL
#define HAL_LL_I2C1CON_ADDRESS 0xBF820000UL
#define HAL_LL_I2C1MSK_ADDRESS 0xBF820030UL
#define HAL_LL_I2C1RCV_ADDRESS 0xBF820060UL
#define HAL_LL_I2C1STAT_ADDRESS 0xBF820010UL
#define HAL_LL_I2C1TRN_ADDRESS 0xBF820050UL
#define HAL_LL_I2C3ADD_ADDRESS 0xBF820420UL
#define HAL_LL_I2C3BRG_ADDRESS 0xBF820440UL
#define HAL_LL_I2C3CON_ADDRESS 0xBF820400UL
#define HAL_LL_I2C3MSK_ADDRESS 0xBF820430UL
#define HAL_LL_I2C3RCV_ADDRESS 0xBF820460UL
#define HAL_LL_I2C3STAT_ADDRESS 0xBF820410UL
#define HAL_LL_I2C3TRN_ADDRESS 0xBF820450UL
#define HAL_LL_I2C4ADD_ADDRESS 0xBF820620UL
#define HAL_LL_I2C4BRG_ADDRESS 0xBF820640UL
#define HAL_LL_I2C4CON_ADDRESS 0xBF820600UL
#define HAL_LL_I2C4MSK_ADDRESS 0xBF820630UL
#define HAL_LL_I2C4RCV_ADDRESS 0xBF820660UL
#define HAL_LL_I2C4STAT_ADDRESS 0xBF820610UL
#define HAL_LL_I2C4TRN_ADDRESS 0xBF820650UL
#define HAL_LL_I2C5ADD_ADDRESS 0xBF820820UL
#define HAL_LL_I2C5BRG_ADDRESS 0xBF820840UL
#define HAL_LL_I2C5CON_ADDRESS 0xBF820800UL
#define HAL_LL_I2C5MSK_ADDRESS 0xBF820830UL
#define HAL_LL_I2C5RCV_ADDRESS 0xBF820860UL
#define HAL_LL_I2C5STAT_ADDRESS 0xBF820810UL
#define HAL_LL_I2C5TRN_ADDRESS 0xBF820850UL
#define HAL_LL_SPI1BRG_ADDRESS 0xBF821030UL
#define HAL_LL_SPI1BUF_ADDRESS 0xBF821020UL
#define HAL_LL_SPI1CON_ADDRESS 0xBF821000UL
#define HAL_LL_SPI1CON2_ADDRESS 0xBF821040UL
#define HAL_LL_SPI1STAT_ADDRESS 0xBF821010UL
#define HAL_LL_SPI2BRG_ADDRESS 0xBF821230UL
#define HAL_LL_SPI2BUF_ADDRESS 0xBF821220UL
#define HAL_LL_SPI2CON_ADDRESS 0xBF821200UL
#define HAL_LL_SPI2CON2_ADDRESS 0xBF821240UL
#define HAL_LL_SPI2STAT_ADDRESS 0xBF821210UL
#define HAL_LL_SPI3BRG_ADDRESS 0xBF821430UL
#define HAL_LL_SPI3BUF_ADDRESS 0xBF821420UL
#define HAL_LL_SPI3CON_ADDRESS 0xBF821400UL
#define HAL_LL_SPI3CON2_ADDRESS 0xBF821440UL
#define HAL_LL_SPI3STAT_ADDRESS 0xBF821410UL
#define HAL_LL_SPI4BRG_ADDRESS 0xBF821630UL
#define HAL_LL_SPI4BUF_ADDRESS 0xBF821620UL
#define HAL_LL_SPI4CON_ADDRESS 0xBF821600UL
#define HAL_LL_SPI4CON2_ADDRESS 0xBF821640UL
#define HAL_LL_SPI4STAT_ADDRESS 0xBF821610UL
// EOF I2C and SPI Register addresses

// TMR Register addresses
#define HAL_LL_CM1CON_ADDRESS 0xBF84C000UL
#define HAL_LL_CM2CON_ADDRESS 0xBF84C010UL
#define HAL_LL_CMSTAT_ADDRESS 0xBF84C060UL
#define HAL_LL_OC1CON_ADDRESS 0xBF844000UL
#define HAL_LL_OC1R_ADDRESS 0xBF844010UL
#define HAL_LL_OC1RS_ADDRESS 0xBF844020UL
#define HAL_LL_OC2CON_ADDRESS 0xBF844200UL
#define HAL_LL_OC2R_ADDRESS 0xBF844210UL
#define HAL_LL_OC2RS_ADDRESS 0xBF844220UL
#define HAL_LL_OC3CON_ADDRESS 0xBF844400UL
#define HAL_LL_OC3R_ADDRESS 0xBF844410UL
#define HAL_LL_OC3RS_ADDRESS 0xBF844420UL
#define HAL_LL_OC4CON_ADDRESS 0xBF844600UL
#define HAL_LL_OC4R_ADDRESS 0xBF844610UL
#define HAL_LL_OC4RS_ADDRESS 0xBF844620UL
#define HAL_LL_OC5CON_ADDRESS 0xBF844800UL
#define HAL_LL_OC5R_ADDRESS 0xBF844810UL
#define HAL_LL_OC5RS_ADDRESS 0xBF844820UL
#define HAL_LL_OC6CON_ADDRESS 0xBF844A00UL
#define HAL_LL_OC6R_ADDRESS 0xBF844A10UL
#define HAL_LL_OC6RS_ADDRESS 0xBF844A20UL
#define HAL_LL_OC7CON_ADDRESS 0xBF844C00UL
#define HAL_LL_OC7R_ADDRESS 0xBF844C10UL
#define HAL_LL_OC7RS_ADDRESS 0xBF844C20UL
#define HAL_LL_OC8CON_ADDRESS 0xBF844E00UL
#define HAL_LL_OC8R_ADDRESS 0xBF844E10UL
#define HAL_LL_OC8RS_ADDRESS 0xBF844E20UL
#define HAL_LL_OC9CON_ADDRESS 0xBF845000UL
#define HAL_LL_OC9R_ADDRESS 0xBF845010UL
#define HAL_LL_OC9RS_ADDRESS 0xBF845020UL
#define HAL_LL_PR1_ADDRESS 0xBF840020UL
#define HAL_LL_PR2_ADDRESS 0xBF840220UL
#define HAL_LL_PR3_ADDRESS 0xBF840420UL
#define HAL_LL_PR4_ADDRESS 0xBF840620UL
#define HAL_LL_PR5_ADDRESS 0xBF840820UL
#define HAL_LL_PR6_ADDRESS 0xBF840A20UL
#define HAL_LL_PR7_ADDRESS 0xBF840C20UL
#define HAL_LL_PR8_ADDRESS 0xBF840E20UL
#define HAL_LL_PR9_ADDRESS 0xBF841020UL
#define HAL_LL_T1CON_ADDRESS 0xBF840000UL
#define HAL_LL_T2CON_ADDRESS 0xBF840200UL
#define HAL_LL_T3CON_ADDRESS 0xBF840400UL
#define HAL_LL_T4CON_ADDRESS 0xBF840600UL
#define HAL_LL_T5CON_ADDRESS 0xBF840800UL
#define HAL_LL_T6CON_ADDRESS 0xBF840A00UL
#define HAL_LL_T7CON_ADDRESS 0xBF840C00UL
#define HAL_LL_T8CON_ADDRESS 0xBF840E00UL
#define HAL_LL_T9CON_ADDRESS 0xBF841000UL
#define HAL_LL_TMR1_ADDRESS 0xBF840010UL
#define HAL_LL_TMR2_ADDRESS 0xBF840210UL
#define HAL_LL_TMR3_ADDRESS 0xBF840410UL
#define HAL_LL_TMR4_ADDRESS 0xBF840610UL
#define HAL_LL_TMR5_ADDRESS 0xBF840810UL
#define HAL_LL_TMR6_ADDRESS 0xBF840A10UL
#define HAL_LL_TMR7_ADDRESS 0xBF840C10UL
#define HAL_LL_TMR8_ADDRESS 0xBF840E10UL
#define HAL_LL_TMR9_ADDRESS 0xBF841010UL
// EOF TMR Register addresses

// PBxDIV Register addresses
#define HAL_LL_PB1DIV_ADDRESS 0xBF801300UL
#define HAL_LL_PB2DIV_ADDRESS 0xBF801310UL
#define HAL_LL_PB3DIV_ADDRESS 0xBF801320UL
#define HAL_LL_PB4DIV_ADDRESS 0xBF801330UL
#define HAL_LL_PB5DIV_ADDRESS 0xBF801340UL
#define HAL_LL_PB7DIV_ADDRESS 0xBF801360UL
#define HAL_LL_PB8DIV_ADDRESS 0xBF801370UL
// EOF PBxDIV Register addresses

// UART Register addresses
#define HAL_LL_U1BRG_ADDRESS 0xBF822040UL
#define HAL_LL_U1MODE_ADDRESS 0xBF822000UL
#define HAL_LL_U1RXREG_ADDRESS 0xBF822030UL
#define HAL_LL_U1STA_ADDRESS 0xBF822010UL
#define HAL_LL_U1TXREG_ADDRESS 0xBF822020UL
#define HAL_LL_U2BRG_ADDRESS 0xBF822240UL
#define HAL_LL_U2MODE_ADDRESS 0xBF822200UL
#define HAL_LL_U2RXREG_ADDRESS 0xBF822230UL
#define HAL_LL_U2STA_ADDRESS 0xBF822210UL
#define HAL_LL_U2TXREG_ADDRESS 0xBF822220UL
#define HAL_LL_U3BRG_ADDRESS 0xBF822440UL
#define HAL_LL_U3MODE_ADDRESS 0xBF822400UL
#define HAL_LL_U3RXREG_ADDRESS 0xBF822430UL
#define HAL_LL_U3STA_ADDRESS 0xBF822410UL
#define HAL_LL_U3TXREG_ADDRESS 0xBF822420UL
#define HAL_LL_U4BRG_ADDRESS 0xBF822640UL
#define HAL_LL_U4MODE_ADDRESS 0xBF822600UL
#define HAL_LL_U4RXREG_ADDRESS 0xBF822630UL
#define HAL_LL_U4STA_ADDRESS 0xBF822610UL
#define HAL_LL_U4TXREG_ADDRESS 0xBF822620UL
#define HAL_LL_U5BRG_ADDRESS 0xBF822840UL
#define HAL_LL_U5MODE_ADDRESS 0xBF822800UL
#define HAL_LL_U5RXREG_ADDRESS 0xBF822830UL
#define HAL_LL_U5STA_ADDRESS 0xBF822810UL
#define HAL_LL_U5TXREG_ADDRESS 0xBF822820UL
#define HAL_LL_U6BRG_ADDRESS 0xBF822A40UL
#define HAL_LL_U6MODE_ADDRESS 0xBF822A00UL
#define HAL_LL_U6RXREG_ADDRESS 0xBF822A30UL
#define HAL_LL_U6STA_ADDRESS 0xBF822A10UL
#define HAL_LL_U6TXREG_ADDRESS 0xBF822A20UL
// EOF UART Register addresses

// IVT Register addresses
#define HAL_LL_UART1_FAULT 112
#define HAL_LL_UART1_RX 113
#define HAL_LL_UART1_TX 114
#define HAL_LL_UART2_FAULT 145
#define HAL_LL_UART2_RX 146
#define HAL_LL_UART2_TX 147
#define HAL_LL_UART3_FAULT 157
#define HAL_LL_UART3_RX 158
#define HAL_LL_UART3_TX 159
#define HAL_LL_UART4_FAULT 170
#define HAL_LL_UART4_RX 171
#define HAL_LL_UART4_TX 172
#define HAL_LL_UART5_FAULT 179
#define HAL_LL_UART5_RX 180
#define HAL_LL_UART5_TX 181
#define HAL_LL_UART6_FAULT 188
#define HAL_LL_UART6_RX 189
#define HAL_LL_UART6_TX 190
#define HAL_LL_IEC0_ADDRESS 0xBF8100C0UL
#define HAL_LL_IEC1_ADDRESS 0xBF8100D0UL
#define HAL_LL_IEC2_ADDRESS 0xBF8100E0UL
#define HAL_LL_IEC3_ADDRESS 0xBF8100F0UL
#define HAL_LL_IEC4_ADDRESS 0xBF810100UL
#define HAL_LL_IEC5_ADDRESS 0xBF810110UL
#define HAL_LL_IEC6_ADDRESS 0xBF810120UL
#define HAL_LL_IFS0_ADDRESS 0xBF810040UL
#define HAL_LL_IFS1_ADDRESS 0xBF810050UL
#define HAL_LL_IFS2_ADDRESS 0xBF810060UL
#define HAL_LL_IFS3_ADDRESS 0xBF810070UL
#define HAL_LL_IFS4_ADDRESS 0xBF810080UL
#define HAL_LL_IFS5_ADDRESS 0xBF810090UL
#define HAL_LL_IFS6_ADDRESS 0xBF8100A0UL
#define HAL_LL_INTCON_ADDRESS 0xBF810000UL
#define HAL_LL_INTSTAT_ADDRESS 0xBF810020UL
#define HAL_LL_IPC0_ADDRESS 0xBF810140UL
#define HAL_LL_IPC1_ADDRESS 0xBF810150UL
#define HAL_LL_IPC10_ADDRESS 0xBF8101E0UL
#define HAL_LL_IPC11_ADDRESS 0xBF8101F0UL
#define HAL_LL_IPC12_ADDRESS 0xBF810200UL
#define HAL_LL_IPC13_ADDRESS 0xBF810210UL
#define HAL_LL_IPC14_ADDRESS 0xBF810220UL
#define HAL_LL_IPC15_ADDRESS 0xBF810230UL
#define HAL_LL_IPC16_ADDRESS 0xBF810240UL
#define HAL_LL_IPC17_ADDRESS 0xBF810250UL
#define HAL_LL_IPC18_ADDRESS 0xBF810260UL
#define HAL_LL_IPC19_ADDRESS 0xBF810270UL
#define HAL_LL_IPC2_ADDRESS 0xBF810160UL
#define HAL_LL_IPC25_ADDRESS 0xBF8102D0UL
#define HAL_LL_IPC26_ADDRESS 0xBF8102E0UL
#define HAL_LL_IPC27_ADDRESS 0xBF8102F0UL
#define HAL_LL_IPC28_ADDRESS 0xBF810300UL
#define HAL_LL_IPC29_ADDRESS 0xBF810310UL
#define HAL_LL_IPC3_ADDRESS 0xBF810170UL
#define HAL_LL_IPC30_ADDRESS 0xBF810320UL
#define HAL_LL_IPC31_ADDRESS 0xBF810330UL
#define HAL_LL_IPC32_ADDRESS 0xBF810340UL
#define HAL_LL_IPC33_ADDRESS 0xBF810350UL
#define HAL_LL_IPC34_ADDRESS 0xBF810360UL
#define HAL_LL_IPC35_ADDRESS 0xBF810370UL
#define HAL_LL_IPC36_ADDRESS 0xBF810380UL
#define HAL_LL_IPC37_ADDRESS 0xBF810390UL
#define HAL_LL_IPC38_ADDRESS 0xBF8103A0UL
#define HAL_LL_IPC39_ADDRESS 0xBF8103B0UL
#define HAL_LL_IPC4_ADDRESS 0xBF810180UL
#define HAL_LL_IPC40_ADDRESS 0xBF8103C0UL
#define HAL_LL_IPC41_ADDRESS 0xBF8103D0UL
#define HAL_LL_IPC42_ADDRESS 0xBF8103E0UL
#define HAL_LL_IPC43_ADDRESS 0xBF8103F0UL
#define HAL_LL_IPC44_ADDRESS 0xBF810400UL
#define HAL_LL_IPC45_ADDRESS 0xBF810410UL
#define HAL_LL_IPC46_ADDRESS 0xBF810420UL
#define HAL_LL_IPC47_ADDRESS 0xBF810430UL
#define HAL_LL_IPC48_ADDRESS 0xBF810440UL
#define HAL_LL_IPC49_ADDRESS 0xBF810450UL
#define HAL_LL_IPC5_ADDRESS 0xBF810190UL
#define HAL_LL_IPC50_ADDRESS 0xBF810460UL
#define HAL_LL_IPC51_ADDRESS 0xBF810470UL
#define HAL_LL_IPC52_ADDRESS 0xBF810480UL
#define HAL_LL_IPC53_ADDRESS 0xBF810490UL
#define HAL_LL_IPC6_ADDRESS 0xBF8101A0UL
#define HAL_LL_IPC7_ADDRESS 0xBF8101B0UL
#define HAL_LL_IPC8_ADDRESS 0xBF8101C0UL
#define HAL_LL_IPC9_ADDRESS 0xBF8101D0UL
#define HAL_LL_IPTMR_ADDRESS 0xBF810030UL
#define HAL_LL_PRISS_ADDRESS 0xBF810010UL
// EOF IVT Register addresses

// PPS Register addresses
#define HAL_LL_RPB0R_ADDRESS 0xBF801540UL
#define HAL_LL_RPB10R_ADDRESS 0xBF801568UL
#define HAL_LL_RPB14R_ADDRESS 0xBF801578UL
#define HAL_LL_RPB15R_ADDRESS 0xBF80157CUL
#define HAL_LL_RPB1R_ADDRESS 0xBF801544UL
#define HAL_LL_RPB2R_ADDRESS 0xBF801548UL
#define HAL_LL_RPB3R_ADDRESS 0xBF80154CUL
#define HAL_LL_RPB5R_ADDRESS 0xBF801554UL
#define HAL_LL_RPB6R_ADDRESS 0xBF801558UL
#define HAL_LL_RPB7R_ADDRESS 0xBF80155CUL
#define HAL_LL_RPB8R_ADDRESS 0xBF801560UL
#define HAL_LL_RPB9R_ADDRESS 0xBF801564UL
#define HAL_LL_RPC13R_ADDRESS 0xBF8015B4UL
#define HAL_LL_RPC14R_ADDRESS 0xBF8015B8UL
#define HAL_LL_RPD0R_ADDRESS 0xBF8015C0UL
#define HAL_LL_RPD10R_ADDRESS 0xBF8015E8UL
#define HAL_LL_RPD11R_ADDRESS 0xBF8015ECUL
#define HAL_LL_RPD1R_ADDRESS 0xBF8015C4UL
#define HAL_LL_RPD2R_ADDRESS 0xBF8015C8UL
#define HAL_LL_RPD3R_ADDRESS 0xBF8015CCUL
#define HAL_LL_RPD4R_ADDRESS 0xBF8015D0UL
#define HAL_LL_RPD5R_ADDRESS 0xBF8015D4UL
#define HAL_LL_RPD9R_ADDRESS 0xBF8015E4UL
#define HAL_LL_RPE3R_ADDRESS 0xBF80160CUL
#define HAL_LL_RPE5R_ADDRESS 0xBF801614UL
#define HAL_LL_RPF0R_ADDRESS 0xBF801640UL
#define HAL_LL_RPF1R_ADDRESS 0xBF801644UL
#define HAL_LL_RPF3R_ADDRESS 0xBF80164CUL
#define HAL_LL_RPF4R_ADDRESS 0xBF801650UL
#define HAL_LL_RPF5R_ADDRESS 0xBF801654UL
#define HAL_LL_RPG6R_ADDRESS 0xBF801698UL
#define HAL_LL_RPG7R_ADDRESS 0xBF80169CUL
#define HAL_LL_RPG8R_ADDRESS 0xBF8016A0UL
#define HAL_LL_RPG9R_ADDRESS 0xBF8016A4UL
#define HAL_LL_SDI1R_ADDRESS 0xBF80149CUL
#define HAL_LL_SDI2R_ADDRESS 0xBF8014A8UL
#define HAL_LL_SDI3R_ADDRESS 0xBF8014B4UL
#define HAL_LL_SDI4R_ADDRESS 0xBF8014C0UL
#define HAL_LL_U1RXR_ADDRESS 0xBF801468UL
#define HAL_LL_U2RXR_ADDRESS 0xBF801470UL
#define HAL_LL_U3RXR_ADDRESS 0xBF801478UL
#define HAL_LL_U4RXR_ADDRESS 0xBF801480UL
#define HAL_LL_U5RXR_ADDRESS 0xBF801488UL
#define HAL_LL_U6RXR_ADDRESS 0xBF801490UL
// EOF PPS Register addresses

// Unlock Register addresses
#define HAL_LL_OSCCON_ADDRESS 0xBF801200UL
// EOF Unlock Register addresses

// UART Interrupt necessities
// Single vector mode in mikroSDK
#define HAL_LL_IVT_UART_1_SHIFT_RX 10
#define HAL_LL_IVT_UART_1_SHIFT_TX 18
#define HAL_LL_IVT_UART_1_RX HAL_LL_UART1_RX
#define HAL_LL_IVT_UART_1_TX HAL_LL_UART1_TX
#define HAL_LL_IVT_UART_1_ADDRESS_RX HAL_LL_IPC28_ADDRESS
#define HAL_LL_IVT_UART_1_ADDRESS_TX HAL_LL_IPC28_ADDRESS
#define HAL_LL_UART_1_IFS_RX_ADDRESS HAL_LL_IFS3_ADDRESS
#define HAL_LL_UART_1_IEC_RX_ADDRESS HAL_LL_IEC3_ADDRESS
#define HAL_LL_UART_1_IFS_TX_ADDRESS HAL_LL_IFS3_ADDRESS
#define HAL_LL_UART_1_IEC_TX_ADDRESS HAL_LL_IEC3_ADDRESS
#define HAL_LL_UART_1_TX_FLAG 18
#define HAL_LL_UART_1_RX_FLAG 17

#define HAL_LL_IVT_UART_2_SHIFT_RX 18
#define HAL_LL_IVT_UART_2_SHIFT_TX 26
#define HAL_LL_IVT_UART_2_RX HAL_LL_UART2_RX
#define HAL_LL_IVT_UART_2_TX HAL_LL_UART2_TX
#define HAL_LL_IVT_UART_2_ADDRESS_RX HAL_LL_IPC36_ADDRESS
#define HAL_LL_IVT_UART_2_ADDRESS_TX HAL_LL_IPC36_ADDRESS
#define HAL_LL_UART_2_IFS_RX_ADDRESS HAL_LL_IFS4_ADDRESS
#define HAL_LL_UART_2_IEC_RX_ADDRESS HAL_LL_IEC4_ADDRESS
#define HAL_LL_UART_2_IFS_TX_ADDRESS HAL_LL_IFS4_ADDRESS
#define HAL_LL_UART_2_IEC_TX_ADDRESS HAL_LL_IEC4_ADDRESS
#define HAL_LL_UART_2_TX_FLAG 19
#define HAL_LL_UART_2_RX_FLAG 18

#define HAL_LL_IVT_UART_3_SHIFT_RX 18
#define HAL_LL_IVT_UART_3_SHIFT_TX 26
#define HAL_LL_IVT_UART_3_RX HAL_LL_UART3_RX
#define HAL_LL_IVT_UART_3_TX HAL_LL_UART3_TX
#define HAL_LL_IVT_UART_3_ADDRESS_RX HAL_LL_IPC39_ADDRESS
#define HAL_LL_IVT_UART_3_ADDRESS_TX HAL_LL_IPC39_ADDRESS
#define HAL_LL_UART_3_IFS_RX_ADDRESS HAL_LL_IFS4_ADDRESS
#define HAL_LL_UART_3_IEC_RX_ADDRESS HAL_LL_IEC4_ADDRESS
#define HAL_LL_UART_3_IFS_TX_ADDRESS HAL_LL_IFS4_ADDRESS
#define HAL_LL_UART_3_IEC_TX_ADDRESS HAL_LL_IEC4_ADDRESS
#define HAL_LL_UART_3_TX_FLAG 31
#define HAL_LL_UART_3_RX_FLAG 30

#define HAL_LL_IVT_UART_4_SHIFT_RX 26
#define HAL_LL_IVT_UART_4_SHIFT_TX 2
#define HAL_LL_IVT_UART_4_RX HAL_LL_UART4_RX
#define HAL_LL_IVT_UART_4_TX HAL_LL_UART4_TX
#define HAL_LL_IVT_UART_4_ADDRESS_RX HAL_LL_IPC42_ADDRESS
#define HAL_LL_IVT_UART_4_ADDRESS_TX HAL_LL_IPC43_ADDRESS
#define HAL_LL_UART_4_IFS_RX_ADDRESS HAL_LL_IFS5_ADDRESS
#define HAL_LL_UART_4_IEC_RX_ADDRESS HAL_LL_IEC5_ADDRESS
#define HAL_LL_UART_4_IFS_TX_ADDRESS HAL_LL_IFS5_ADDRESS
#define HAL_LL_UART_4_IEC_TX_ADDRESS HAL_LL_IEC5_ADDRESS
#define HAL_LL_UART_4_TX_FLAG 12
#define HAL_LL_UART_4_RX_FLAG 11

#define HAL_LL_IVT_UART_5_SHIFT_RX 2
#define HAL_LL_IVT_UART_5_SHIFT_TX 10
#define HAL_LL_IVT_UART_5_RX HAL_LL_UART5_RX
#define HAL_LL_IVT_UART_5_TX HAL_LL_UART5_TX
#define HAL_LL_IVT_UART_5_ADDRESS_RX HAL_LL_IPC45_ADDRESS
#define HAL_LL_IVT_UART_5_ADDRESS_TX HAL_LL_IPC45_ADDRESS
#define HAL_LL_UART_5_IFS_RX_ADDRESS HAL_LL_IFS5_ADDRESS
#define HAL_LL_UART_5_IEC_RX_ADDRESS HAL_LL_IEC5_ADDRESS
#define HAL_LL_UART_5_IFS_TX_ADDRESS HAL_LL_IFS5_ADDRESS
#define HAL_LL_UART_5_IEC_TX_ADDRESS HAL_LL_IEC5_ADDRESS
#define HAL_LL_UART_5_TX_FLAG 21
#define HAL_LL_UART_5_RX_FLAG 20

#define HAL_LL_IVT_UART_6_SHIFT_RX 10
#define HAL_LL_IVT_UART_6_SHIFT_TX 18
#define HAL_LL_IVT_UART_6_RX HAL_LL_UART6_RX
#define HAL_LL_IVT_UART_6_TX HAL_LL_UART6_TX
#define HAL_LL_IVT_UART_6_ADDRESS_RX HAL_LL_IPC47_ADDRESS
#define HAL_LL_IVT_UART_6_ADDRESS_TX HAL_LL_IPC47_ADDRESS
#define HAL_LL_UART_6_IFS_RX_ADDRESS HAL_LL_IFS5_ADDRESS
#define HAL_LL_UART_6_IEC_RX_ADDRESS HAL_LL_IEC5_ADDRESS
#define HAL_LL_UART_6_IFS_TX_ADDRESS HAL_LL_IFS5_ADDRESS
#define HAL_LL_UART_6_IEC_TX_ADDRESS HAL_LL_IEC5_ADDRESS
#define HAL_LL_UART_6_TX_FLAG 30
#define HAL_LL_UART_6_RX_FLAG 29
// EOF UART Interrupt necessities

// Slew rate registers
#define HAL_LL_SRCON0B_ADDRESS 0xBF8601C0UL
#define HAL_LL_SRCON1B_ADDRESS 0xBF8601D0UL
#define HAL_LL_SRCON0E_ADDRESS 0xBF8604C0UL
#define HAL_LL_SRCON1E_ADDRESS 0xBF8604D0UL
#define HAL_LL_SRCON0F_ADDRESS 0xBF8605C0UL
#define HAL_LL_SRCON1F_ADDRESS 0xBF8605D0UL
#define HAL_LL_SRCON0G_ADDRESS 0xBF8606C0UL
#define HAL_LL_SRCON1G_ADDRESS 0xBF8606D0UL
// EOF Slew rate registers

#endif // _MCU_DEFINITIONS_H_
