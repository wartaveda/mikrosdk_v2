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
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

//DMA
#define DMA_NUM_OF_MODULES 2
#define DMA_NUM_OF_STREAMS 1
#define DMA_NUM_OF_STREAMS_FAMILY 1
#define DMA_NUM_OF_CHANNELS 82
#define DMA_NUM_OF_CHANNELS_FAMILY 82

#define DMA_MODULE_1 0
#define DMA_MODULE_2 1
#define DMA_STREAM 0
//EOF DMA

//ADC
#define HAL_LL_RA0_ANA0_ANSELA_BIT 0
#define HAL_LL_RA0_ANA0_ANSELA 0
#define HAL_LL_RA1_ANA1_ANSELA_BIT 1
#define HAL_LL_RA1_ANA1_ANSELA 1
#define HAL_LL_RA2_ANA2_ANSELA_BIT 2
#define HAL_LL_RA2_ANA2_ANSELA 2
#define HAL_LL_RA3_ANA3_ANSELA_BIT 3
#define HAL_LL_RA3_ANA3_ANSELA 3
#define HAL_LL_RA4_ANA4_ANSELA_BIT 4
#define HAL_LL_RA4_ANA4_ANSELA 4
#define HAL_LL_RA5_ANA5_ANSELA_BIT 5
#define HAL_LL_RA5_ANA5_ANSELA 5
#define HAL_LL_RA6_ANA6_ANSELA_BIT 6
#define HAL_LL_RA6_ANA6_ANSELA 6
#define HAL_LL_RA7_ANA7_ANSELA_BIT 7
#define HAL_LL_RA7_ANA7_ANSELA 7
#define HAL_LL_RB0_ANB0_ANSELB_BIT 0
#define HAL_LL_RB0_ANB0_ANSELB 8
#define HAL_LL_RB1_ANB1_ANSELB_BIT 1
#define HAL_LL_RB1_ANB1_ANSELB 9
#define HAL_LL_RB2_ANB2_ANSELB_BIT 2
#define HAL_LL_RB2_ANB2_ANSELB 10
#define HAL_LL_RB3_ANB3_ANSELB_BIT 3
#define HAL_LL_RB3_ANB3_ANSELB 11
#define HAL_LL_RB4_ANB4_ANSELB_BIT 4
#define HAL_LL_RB4_ANB4_ANSELB 12
#define HAL_LL_RB5_ANB5_ANSELB_BIT 5
#define HAL_LL_RB5_ANB5_ANSELB 13
#define HAL_LL_RB6_ANB6_ANSELB_BIT 6
#define HAL_LL_RB6_ANB6_ANSELB 14
#define HAL_LL_RB7_ANB7_ANSELB_BIT 7
#define HAL_LL_RB7_ANB7_ANSELB 15
#define HAL_LL_RC0_ANC0_ANSELC_BIT 0
#define HAL_LL_RC0_ANC0_ANSELC 16
#define HAL_LL_RC1_ANC1_ANSELC_BIT 1
#define HAL_LL_RC1_ANC1_ANSELC 17
#define HAL_LL_RC2_ANC2_ANSELC_BIT 2
#define HAL_LL_RC2_ANC2_ANSELC 18
#define HAL_LL_RC3_ANC3_ANSELC_BIT 3
#define HAL_LL_RC3_ANC3_ANSELC 19
#define HAL_LL_RC4_ANC4_ANSELC_BIT 4
#define HAL_LL_RC4_ANC4_ANSELC 20
#define HAL_LL_RC5_ANC5_ANSELC_BIT 5
#define HAL_LL_RC5_ANC5_ANSELC 21
#define HAL_LL_RC6_ANC6_ANSELC_BIT 6
#define HAL_LL_RC6_ANC6_ANSELC 22
#define HAL_LL_RC7_ANC7_ANSELC_BIT 7
#define HAL_LL_RC7_ANC7_ANSELC 23
#define HAL_LL_RD0_AND0_ANSELD_BIT 0
#define HAL_LL_RD0_AND0_ANSELD 24
#define HAL_LL_RD1_AND1_ANSELD_BIT 1
#define HAL_LL_RD1_AND1_ANSELD 25
#define HAL_LL_RD2_AND2_ANSELD_BIT 2
#define HAL_LL_RD2_AND2_ANSELD 26
#define HAL_LL_RD3_AND3_ANSELD_BIT 3
#define HAL_LL_RD3_AND3_ANSELD 27
#define HAL_LL_RD4_AND4_ANSELD_BIT 4
#define HAL_LL_RD4_AND4_ANSELD 28
#define HAL_LL_RD5_AND5_ANSELD_BIT 5
#define HAL_LL_RD5_AND5_ANSELD 29
#define HAL_LL_RD6_AND6_ANSELD_BIT 6
#define HAL_LL_RD6_AND6_ANSELD 30
#define HAL_LL_RD7_AND7_ANSELD_BIT 7
#define HAL_LL_RD7_AND7_ANSELD 31
#define HAL_LL_RE0_ANE0_ANSELE_BIT 0
#define HAL_LL_RE0_ANE0_ANSELE 0
#define HAL_LL_RE1_ANE1_ANSELE_BIT 1
#define HAL_LL_RE1_ANE1_ANSELE 1
#define HAL_LL_RE2_ANE2_ANSELE_BIT 2
#define HAL_LL_RE2_ANE2_ANSELE 2
#define HAL_LL_RF0_ANF0_ANSELF_BIT 0
#define HAL_LL_RF0_ANF0_ANSELF 0
#define HAL_LL_RF1_ANF1_ANSELF_BIT 1
#define HAL_LL_RF1_ANF1_ANSELF 1
#define HAL_LL_RF2_ANF2_ANSELF_BIT 2
#define HAL_LL_RF2_ANF2_ANSELF 2
#define HAL_LL_RF3_ANF3_ANSELF_BIT 3
#define HAL_LL_RF3_ANF3_ANSELF 3
#define HAL_LL_RF4_ANF4_ANSELF_BIT 4
#define HAL_LL_RF4_ANF4_ANSELF 4
#define HAL_LL_RF5_ANF5_ANSELF_BIT 5
#define HAL_LL_RF5_ANF5_ANSELF 5
#define HAL_LL_RF6_ANF6_ANSELF_BIT 6
#define HAL_LL_RF6_ANF6_ANSELF 6
#define HAL_LL_RF7_ANF7_ANSELF_BIT 7
#define HAL_LL_RF7_ANF7_ANSELF 7


#define HAL_LL_ADRESL_ADDRESS 0x3EEFU
#define HAL_LL_FVRCON_ADDRESS 0x3EC1U
#define HAL_LL_ANSELF_ADDRESS 0x3A90U
#define HAL_LL_ANSELE_ADDRESS 0x3A80U
#define HAL_LL_ANSELD_ADDRESS 0x3A70U
#define HAL_LL_ANSELC_ADDRESS 0x3A60U
#define HAL_LL_ANSELB_ADDRESS 0x3A50U
#define HAL_LL_ANSELA_ADDRESS 0x3A40U
#define HAL_LL_ADREF_ADDRESS 0x3EFDU
#define HAL_LL_ADPCH_ADDRESS 0x3EF1U
#define HAL_LL_ADCON3_ADDRESS 0x3EFBU
#define HAL_LL_ADCON2_ADDRESS 0x3EFAU
#define HAL_LL_ADCON1_ADDRESS 0x3EF9U
#define HAL_LL_ADCON0_ADDRESS 0x3EF8U

#define HAL_LL_AN_COUNT 43
#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_RB0
#define I2C1_SCL_RB1
#define I2C1_SCL_RB2
#define I2C1_SCL_RB3
#define I2C1_SCL_RB4
#define I2C1_SCL_RB5
#define I2C1_SCL_RB6
#define I2C1_SCL_RB7
#define I2C1_SCL_RC0
#define I2C1_SCL_RC1
#define I2C1_SCL_RC2
#define I2C1_SCL_RC3
#define I2C1_SCL_RC4
#define I2C1_SCL_RC5
#define I2C1_SCL_RC6
#define I2C1_SCL_RC7
#define I2C1_SDA_RB0
#define I2C1_SDA_RB1
#define I2C1_SDA_RB2
#define I2C1_SDA_RB3
#define I2C1_SDA_RB4
#define I2C1_SDA_RB5
#define I2C1_SDA_RB6
#define I2C1_SDA_RB7
#define I2C1_SDA_RC0
#define I2C1_SDA_RC1
#define I2C1_SDA_RC2
#define I2C1_SDA_RC3
#define I2C1_SDA_RC4
#define I2C1_SDA_RC5
#define I2C1_SDA_RC6
#define I2C1_SDA_RC7
#define I2C2_SCL_RB0
#define I2C2_SCL_RB1
#define I2C2_SCL_RB2
#define I2C2_SCL_RB3
#define I2C2_SCL_RB4
#define I2C2_SCL_RB5
#define I2C2_SCL_RB6
#define I2C2_SCL_RB7
#define I2C2_SCL_RD0
#define I2C2_SCL_RD1
#define I2C2_SCL_RD2
#define I2C2_SCL_RD3
#define I2C2_SCL_RD4
#define I2C2_SCL_RD5
#define I2C2_SCL_RD6
#define I2C2_SCL_RD7
#define I2C2_SDA_RB0
#define I2C2_SDA_RB1
#define I2C2_SDA_RB2
#define I2C2_SDA_RB3
#define I2C2_SDA_RB4
#define I2C2_SDA_RB5
#define I2C2_SDA_RB6
#define I2C2_SDA_RB7
#define I2C2_SDA_RD0
#define I2C2_SDA_RD1
#define I2C2_SDA_RD2
#define I2C2_SDA_RD3
#define I2C2_SDA_RD4
#define I2C2_SDA_RD5
#define I2C2_SDA_RD6
#define I2C2_SDA_RD7

#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2

#define HAL_LL_I2C_PPS_ENABLED true
//EOF I2C

//UART
#define UART1_RX_RC0
#define UART1_RX_RC1
#define UART1_RX_RC2
#define UART1_RX_RC3
#define UART1_RX_RC4
#define UART1_RX_RC5
#define UART1_RX_RC6
#define UART1_RX_RC7
#define UART1_RX_RF0
#define UART1_RX_RF1
#define UART1_RX_RF2
#define UART1_RX_RF3
#define UART1_RX_RF4
#define UART1_RX_RF5
#define UART1_RX_RF6
#define UART1_RX_RF7
#define UART1_TX_RC0
#define UART1_TX_RC1
#define UART1_TX_RC2
#define UART1_TX_RC3
#define UART1_TX_RC4
#define UART1_TX_RC5
#define UART1_TX_RC6
#define UART1_TX_RC7
#define UART1_TX_RF0
#define UART1_TX_RF1
#define UART1_TX_RF2
#define UART1_TX_RF3
#define UART1_TX_RF4
#define UART1_TX_RF5
#define UART1_TX_RF6
#define UART1_TX_RF7
#define UART2_RX_RB0
#define UART2_RX_RB1
#define UART2_RX_RB2
#define UART2_RX_RB3
#define UART2_RX_RB4
#define UART2_RX_RB5
#define UART2_RX_RB6
#define UART2_RX_RB7
#define UART2_RX_RD0
#define UART2_RX_RD1
#define UART2_RX_RD2
#define UART2_RX_RD3
#define UART2_RX_RD4
#define UART2_RX_RD5
#define UART2_RX_RD6
#define UART2_RX_RD7
#define UART2_TX_RB0
#define UART2_TX_RB1
#define UART2_TX_RB2
#define UART2_TX_RB3
#define UART2_TX_RB4
#define UART2_TX_RB5
#define UART2_TX_RB6
#define UART2_TX_RB7
#define UART2_TX_RD0
#define UART2_TX_RD1
#define UART2_TX_RD2
#define UART2_TX_RD3
#define UART2_TX_RD4
#define UART2_TX_RD5
#define UART2_TX_RD6
#define UART2_TX_RD7

#define UART_MODULE_1 1
#define UART_MODULE_2 2

#define UART_MODULE_COUNT 2

#define HAL_LL_UART_PPS_ENABLED true
//EOF UART

//SPI
#define SPI_MISO_RB0
#define SPI_MISO_RB1
#define SPI_MISO_RB2
#define SPI_MISO_RB3
#define SPI_MISO_RB4
#define SPI_MISO_RB5
#define SPI_MISO_RB6
#define SPI_MISO_RB7
#define SPI_MISO_RC0
#define SPI_MISO_RC1
#define SPI_MISO_RC2
#define SPI_MISO_RC3
#define SPI_MISO_RC4
#define SPI_MISO_RC5
#define SPI_MISO_RC6
#define SPI_MISO_RC7
#define SPI_MOSI_RB0
#define SPI_MOSI_RB1
#define SPI_MOSI_RB2
#define SPI_MOSI_RB3
#define SPI_MOSI_RB4
#define SPI_MOSI_RB5
#define SPI_MOSI_RB6
#define SPI_MOSI_RB7
#define SPI_MOSI_RC0
#define SPI_MOSI_RC1
#define SPI_MOSI_RC2
#define SPI_MOSI_RC3
#define SPI_MOSI_RC4
#define SPI_MOSI_RC5
#define SPI_MOSI_RC6
#define SPI_MOSI_RC7
#define SPI_SCK_RB0
#define SPI_SCK_RB1
#define SPI_SCK_RB2
#define SPI_SCK_RB3
#define SPI_SCK_RB4
#define SPI_SCK_RB5
#define SPI_SCK_RB6
#define SPI_SCK_RB7
#define SPI_SCK_RC0
#define SPI_SCK_RC1
#define SPI_SCK_RC2
#define SPI_SCK_RC3
#define SPI_SCK_RC4
#define SPI_SCK_RC5
#define SPI_SCK_RC6
#define SPI_SCK_RC7

#define SPI_MODULE 1

#define SPI_MODULE_COUNT 1

#define HAL_LL_SPI_PPS_ENABLED true
//EOF SPI

//PWM
#define PWM_CCP1_RC0
#define PWM_CCP1_RC1
#define PWM_CCP1_RC2
#define PWM_CCP1_RC3
#define PWM_CCP1_RC4
#define PWM_CCP1_RC5
#define PWM_CCP1_RC6
#define PWM_CCP1_RC7
#define PWM_CCP1_RF0
#define PWM_CCP1_RF1
#define PWM_CCP1_RF2
#define PWM_CCP1_RF3
#define PWM_CCP1_RF4
#define PWM_CCP1_RF5
#define PWM_CCP1_RF6
#define PWM_CCP1_RF7
#define PWM_CCP2_RC0
#define PWM_CCP2_RC1
#define PWM_CCP2_RC2
#define PWM_CCP2_RC3
#define PWM_CCP2_RC4
#define PWM_CCP2_RC5
#define PWM_CCP2_RC6
#define PWM_CCP2_RC7
#define PWM_CCP2_RF0
#define PWM_CCP2_RF1
#define PWM_CCP2_RF2
#define PWM_CCP2_RF3
#define PWM_CCP2_RF4
#define PWM_CCP2_RF5
#define PWM_CCP2_RF6
#define PWM_CCP2_RF7
#define PWM_CCP3_RB0
#define PWM_CCP3_RB1
#define PWM_CCP3_RB2
#define PWM_CCP3_RB3
#define PWM_CCP3_RB4
#define PWM_CCP3_RB5
#define PWM_CCP3_RB6
#define PWM_CCP3_RB7
#define PWM_CCP3_RD0
#define PWM_CCP3_RD1
#define PWM_CCP3_RD2
#define PWM_CCP3_RD3
#define PWM_CCP3_RD4
#define PWM_CCP3_RD5
#define PWM_CCP3_RD6
#define PWM_CCP3_RD7
#define PWM_CCP4_RB0
#define PWM_CCP4_RB1
#define PWM_CCP4_RB2
#define PWM_CCP4_RB3
#define PWM_CCP4_RB4
#define PWM_CCP4_RB5
#define PWM_CCP4_RB6
#define PWM_CCP4_RB7
#define PWM_CCP4_RD0
#define PWM_CCP4_RD1
#define PWM_CCP4_RD2
#define PWM_CCP4_RD3
#define PWM_CCP4_RD4
#define PWM_CCP4_RD5
#define PWM_CCP4_RD6
#define PWM_CCP4_RD7

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3
#define CCP_MODULE_4 4

#define CCP_MODULE_COUNT 4

#define TIM_MODULE_COUNT CCP_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED true
//EOF PWM

//IO
#define __RA0_CN
#define __RA1_CN
#define __RA2_CN
#define __RA3_CN
#define __RA4_CN
#define __RA5_CN
#define __RA6_CN
#define __RA7_CN
#define __RB0_CN
#define __RB1_CN
#define __RB2_CN
#define __RB3_CN
#define __RB4_CN
#define __RB5_CN
#define __RB6_CN
#define __RB7_CN
#define __RC0_CN
#define __RC1_CN
#define __RC2_CN
#define __RC3_CN
#define __RC4_CN
#define __RC5_CN
#define __RC6_CN
#define __RC7_CN
#define __RD0_CN
#define __RD1_CN
#define __RD2_CN
#define __RD3_CN
#define __RD4_CN
#define __RD5_CN
#define __RD6_CN
#define __RD7_CN
#define __RE0_CN
#define __RE1_CN
#define __RE2_CN
#define __RE3_CN
#define __RF0_CN
#define __RF1_CN
#define __RF2_CN
#define __RF3_CN
#define __RF4_CN
#define __RF5_CN
#define __RF6_CN
#define __RF7_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN
#define PORT_COUNT (6)
#define PORT_SIZE (8)
//EOF IO

// GPIO Register addresses and offsets
#define LATA_BASE_ADDRESS 0x3FBAU
#define LATB_BASE_ADDRESS 0x3FBBU
#define LATC_BASE_ADDRESS 0x3FBCU
#define LATD_BASE_ADDRESS 0x3FBDU
#define LATE_BASE_ADDRESS 0x3FBEU
#define LATF_BASE_ADDRESS 0x3FBFU
#define PORTA_BASE_ADDRESS 0x3FCAU
#define PORTB_BASE_ADDRESS 0x3FCBU
#define PORTC_BASE_ADDRESS 0x3FCCU
#define PORTD_BASE_ADDRESS 0x3FCDU
#define PORTE_BASE_ADDRESS 0x3FCEU
#define PORTF_BASE_ADDRESS 0x3FCFU
#define TRISA_BASE_ADDRESS 0x3FC2U
#define TRISB_BASE_ADDRESS 0x3FC3U
#define TRISC_BASE_ADDRESS 0x3FC4U
#define TRISD_BASE_ADDRESS 0x3FC5U
#define TRISE_BASE_ADDRESS 0x3FC6U
#define TRISF_BASE_ADDRESS 0x3FC7U
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_PIE0_ADDRESS 0x3990U
#define HAL_LL_PIE1_ADDRESS 0x3991U
#define HAL_LL_PIE10_ADDRESS 0x399AU
#define HAL_LL_PIE2_ADDRESS 0x3992U
#define HAL_LL_PIE3_ADDRESS 0x3993U
#define HAL_LL_PIE4_ADDRESS 0x3994U
#define HAL_LL_PIE5_ADDRESS 0x3995U
#define HAL_LL_PIE6_ADDRESS 0x3996U
#define HAL_LL_PIE7_ADDRESS 0x3997U
#define HAL_LL_PIE8_ADDRESS 0x3998U
#define HAL_LL_PIE9_ADDRESS 0x3999U
#define HAL_LL_PIR0_ADDRESS 0x39A0U
#define HAL_LL_PIR1_ADDRESS 0x39A1U
#define HAL_LL_PIR10_ADDRESS 0x39AAU
#define HAL_LL_PIR2_ADDRESS 0x39A2U
#define HAL_LL_PIR3_ADDRESS 0x39A3U
#define HAL_LL_PIR4_ADDRESS 0x39A4U
#define HAL_LL_PIR5_ADDRESS 0x39A5U
#define HAL_LL_PIR6_ADDRESS 0x39A6U
#define HAL_LL_PIR7_ADDRESS 0x39A7U
#define HAL_LL_PIR8_ADDRESS 0x39A8U
#define HAL_LL_PIR9_ADDRESS 0x39A9U
#define HAL_LL_PMD0_ADDRESS 0x39C0U
#define HAL_LL_PMD1_ADDRESS 0x39C1U
#define HAL_LL_PMD2_ADDRESS 0x39C2U
#define HAL_LL_PMD3_ADDRESS 0x39C3U
#define HAL_LL_PMD4_ADDRESS 0x39C4U
#define HAL_LL_PMD5_ADDRESS 0x39C5U
#define HAL_LL_PMD6_ADDRESS 0x39C6U
#define HAL_LL_PMD7_ADDRESS 0x39C7U
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_I2C1ERR_ADDRESS 0x3D76U
#define HAL_LL_I2C2ERR_ADDRESS 0x3D60U
#define HAL_LL_I2C1ADB0_ADDRESS 0x3D6DU
#define HAL_LL_I2C1ADB1_ADDRESS 0x3D6EU
#define HAL_LL_I2C1CLK_ADDRESS 0x3D7BU
#define HAL_LL_I2C1CNT_ADDRESS 0x3D6CU
#define HAL_LL_I2C1CON0_ADDRESS 0x3D73U
#define HAL_LL_I2C1CON1_ADDRESS 0x3D74U
#define HAL_LL_I2C1CON2_ADDRESS 0x3D75U
#define HAL_LL_I2C1PIE_ADDRESS 0x3D7AU
#define HAL_LL_I2C1PIR_ADDRESS 0x3D79U
#define HAL_LL_I2C1RXB_ADDRESS 0x3D6AU
#define HAL_LL_I2C1STAT0_ADDRESS 0x3D77U
#define HAL_LL_I2C1STAT1_ADDRESS 0x3D78U
#define HAL_LL_I2C1TXB_ADDRESS 0x3D6BU
#define HAL_LL_I2C2ADB0_ADDRESS 0x3D57U
#define HAL_LL_I2C2ADB1_ADDRESS 0x3D58U
#define HAL_LL_I2C2CLK_ADDRESS 0x3D65U
#define HAL_LL_I2C2CNT_ADDRESS 0x3D56U
#define HAL_LL_I2C2CON0_ADDRESS 0x3D5DU
#define HAL_LL_I2C2CON1_ADDRESS 0x3D5EU
#define HAL_LL_I2C2CON2_ADDRESS 0x3D5FU
#define HAL_LL_I2C2PIE_ADDRESS 0x3D64U
#define HAL_LL_I2C2PIR_ADDRESS 0x3D63U
#define HAL_LL_I2C2RXB_ADDRESS 0x3D54U
#define HAL_LL_I2C2STAT0_ADDRESS 0x3D61U
#define HAL_LL_I2C2STAT1_ADDRESS 0x3D62U
#define HAL_LL_I2C2TXB_ADDRESS 0x3D55U
#define HAL_LL_OSCEN_ADDRESS 0x39DDU
#define HAL_LL_OSCSTAT_ADDRESS 0x39DCU
#define HAL_LL_SPI1BAUD_ADDRESS 0x3D19U
#define HAL_LL_SPI1CLK_ADDRESS 0x3D1CU
#define HAL_LL_SPI1CON0_ADDRESS 0x3D14U
#define HAL_LL_SPI1CON1_ADDRESS 0x3D15U
#define HAL_LL_SPI1CON2_ADDRESS 0x3D16U
#define HAL_LL_SPI1INTE_ADDRESS 0x3D1BU
#define HAL_LL_SPI1INTF_ADDRESS 0x3D1AU
#define HAL_LL_SPI1RXB_ADDRESS 0x3D10U
#define HAL_LL_SPI1STATUS_ADDRESS 0x3D17U
#define HAL_LL_SPI1TCNTH_ADDRESS 0x3D13U
#define HAL_LL_SPI1TCNTL_ADDRESS 0x3D12U
#define HAL_LL_SPI1TWIDTH_ADDRESS 0x3D18U
#define HAL_LL_SPI1TXB_ADDRESS 0x3D11U
// EOF I2C and SPI Register addresses

// PMD & PIR Register defines
#define HAL_LL_PIE_MODULE_UART1_ADDRESS HAL_LL_PIE3_ADDRESS
#define HAL_LL_PIE_MODULE_UART2_ADDRESS HAL_LL_PIE6_ADDRESS
#define HAL_LL_PIR_MODULE_UART1_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART2_ADDRESS HAL_LL_PIR6_ADDRESS
#define HAL_LL_PMD_I2C1_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_SPI1_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART1_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_PMD_UART2_ADDRESS HAL_LL_PMD5_ADDRESS
#define HAL_LL_SSP1_MODULE_BIT 2
#define HAL_LL_UART1_MODULE_BIT 4
#define HAL_LL_UART1_URXIF_BIT 3
#define HAL_LL_UART1_UTXIF_BIT 4
#define HAL_LL_UART2_MODULE_BIT 5
#define HAL_LL_UART2_URXIF_BIT 2
#define HAL_LL_UART2_UTXIF_BIT 3
// EOF PMD & PIR Register defines

// TMR Register addresses
#define HAL_LL_CCP1CON_ADDRESS 0x3F7EU
#define HAL_LL_CCP2CON_ADDRESS 0x3F7AU
#define HAL_LL_CCP3CON_ADDRESS 0x3F76U
#define HAL_LL_CCP4CON_ADDRESS 0x3F72U
#define HAL_LL_CCPTMRS0_ADDRESS 0x3F5EU
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCPTMRS_CCP_MODULE_3 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCPTMRS_CCP_MODULE_4 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCPTMRS1_ADDRESS 0x3F5FU
#define HAL_LL_PMD_CCP_MODULE_1 HAL_LL_PMD3_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_1_ENABLE_BIT 0
#define HAL_LL_PMD_CCP_MODULE_2 HAL_LL_PMD3_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_2_ENABLE_BIT 1
#define HAL_LL_PMD_CCP_MODULE_3 HAL_LL_PMD3_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_3_ENABLE_BIT 2
#define HAL_LL_PMD_CCP_MODULE_4 HAL_LL_PMD3_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_4_ENABLE_BIT 3
#define HAL_LL_T0CON0_ADDRESS 0x3FB8U
#define HAL_LL_T0CON1_ADDRESS 0x3FB9U
#define HAL_LL_T1CON_ADDRESS 0x3FB2U
#define HAL_LL_T2CLKCON_ADDRESS 0x3FAEU
#define HAL_LL_T2CON_ADDRESS 0x3FACU
#define HAL_LL_PR2_ADDRESS 0x3FABU
#define HAL_LL_T3CON_ADDRESS 0x3FA6U
#define HAL_LL_T4CLKCON_ADDRESS 0x3FA2U
#define HAL_LL_T4CON_ADDRESS 0x3FA0U
#define HAL_LL_PR4_ADDRESS 0x3F9FU
#define HAL_LL_T5CON_ADDRESS 0x3F9AU
#define HAL_LL_T6CLKCON_ADDRESS 0x3F96U
#define HAL_LL_T6CON_ADDRESS 0x3F94U
#define HAL_LL_PR6_ADDRESS 0x3F93U
#define HAL_LL_CCPR1L_ADDRESS 0x3F7CU
#define HAL_LL_CCPR2L_ADDRESS 0x3F78U
#define HAL_LL_CCPR3L_ADDRESS 0x3F74U
#define HAL_LL_CCPR4L_ADDRESS 0x3F70U
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x01
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x04
#define HAL_LL_CCP_MODULE_3_TIM2_ENABLE_BIT 0x10
#define HAL_LL_CCP_MODULE_4_TIM2_ENABLE_BIT 0x40
// EOF TMR Register addresses

// ADC Register addresses and bit defines
#define HAL_LL_ADC_PMD_ADDRESS HAL_LL_PMD2_ADDRESS
#define HAL_LL_ADCMD_BIT 5
// EOF ADC Register addresses and bit defines

// SLRCON Register addresses and bit defines
#define HAL_LL_SLRCON_PA0_BIT 0
#define HAL_LL_SLRCON_PA1_BIT 1
#define HAL_LL_SLRCON_PA2_BIT 2
#define HAL_LL_SLRCON_PA3_BIT 3
#define HAL_LL_SLRCON_PA4_BIT 4
#define HAL_LL_SLRCON_PA5_BIT 5
#define HAL_LL_SLRCON_PA6_BIT 6
#define HAL_LL_SLRCON_PA7_BIT 7
#define HAL_LL_SLRCON_PB0_BIT 0
#define HAL_LL_SLRCON_PB1_BIT 1
#define HAL_LL_SLRCON_PB2_BIT 2
#define HAL_LL_SLRCON_PB3_BIT 3
#define HAL_LL_SLRCON_PB4_BIT 4
#define HAL_LL_SLRCON_PB5_BIT 5
#define HAL_LL_SLRCON_PB6_BIT 6
#define HAL_LL_SLRCON_PB7_BIT 7
#define HAL_LL_SLRCON_PC0_BIT 0
#define HAL_LL_SLRCON_PC1_BIT 1
#define HAL_LL_SLRCON_PC2_BIT 2
#define HAL_LL_SLRCON_PC3_BIT 3
#define HAL_LL_SLRCON_PC4_BIT 4
#define HAL_LL_SLRCON_PC5_BIT 5
#define HAL_LL_SLRCON_PC6_BIT 6
#define HAL_LL_SLRCON_PC7_BIT 7
#define HAL_LL_SLRCON_PD0_BIT 0
#define HAL_LL_SLRCON_PD1_BIT 1
#define HAL_LL_SLRCON_PD2_BIT 2
#define HAL_LL_SLRCON_PD3_BIT 3
#define HAL_LL_SLRCON_PD4_BIT 4
#define HAL_LL_SLRCON_PD5_BIT 5
#define HAL_LL_SLRCON_PD6_BIT 6
#define HAL_LL_SLRCON_PD7_BIT 7
#define HAL_LL_SLRCON_PE0_BIT 0
#define HAL_LL_SLRCON_PE1_BIT 1
#define HAL_LL_SLRCON_PE2_BIT 2
#define HAL_LL_SLRCON_PF0_BIT 0
#define HAL_LL_SLRCON_PF1_BIT 1
#define HAL_LL_SLRCON_PF2_BIT 2
#define HAL_LL_SLRCON_PF3_BIT 3
#define HAL_LL_SLRCON_PF4_BIT 4
#define HAL_LL_SLRCON_PF5_BIT 5
#define HAL_LL_SLRCON_PF6_BIT 6
#define HAL_LL_SLRCON_PF7_BIT 7
#define HAL_LL_SLRCONA_ADDRESS 0x3A43U
#define HAL_LL_SLRCONB_ADDRESS 0x3A53U
#define HAL_LL_SLRCONC_ADDRESS 0x3A63U
#define HAL_LL_SLRCOND_ADDRESS 0x3A73U
#define HAL_LL_SLRCONE_ADDRESS 0x3A83U
#define HAL_LL_SLRCONF_ADDRESS 0x3A93U
#define HAL_LL_SLRCON_BIT_COUNT 43

// EOF SLRCON Register addresses and bit defines

// ODCON Register addresses and bit defines
#define HAL_LL_ODCON_ALPHABETIC
#define HAL_LL_ODCONA_ADDRESS 0x3A42U
#define HAL_LL_ODCONA_ODCA0_BIT 0
#define HAL_LL_ODCONA_ODCA1_BIT 1
#define HAL_LL_ODCONA_ODCA2_BIT 2
#define HAL_LL_ODCONA_ODCA3_BIT 3
#define HAL_LL_ODCONA_ODCA4_BIT 4
#define HAL_LL_ODCONA_ODCA5_BIT 5
#define HAL_LL_ODCONA_ODCA6_BIT 6
#define HAL_LL_ODCONA_ODCA7_BIT 7
#define HAL_LL_ODCONB_ADDRESS 0x3A52U
#define HAL_LL_ODCONB_ODCB0_BIT 0
#define HAL_LL_ODCONB_ODCB1_BIT 1
#define HAL_LL_ODCONB_ODCB2_BIT 2
#define HAL_LL_ODCONB_ODCB3_BIT 3
#define HAL_LL_ODCONB_ODCB4_BIT 4
#define HAL_LL_ODCONB_ODCB5_BIT 5
#define HAL_LL_ODCONB_ODCB6_BIT 6
#define HAL_LL_ODCONB_ODCB7_BIT 7
#define HAL_LL_ODCONC_ADDRESS 0x3A62U
#define HAL_LL_ODCONC_ODCC0_BIT 0
#define HAL_LL_ODCONC_ODCC1_BIT 1
#define HAL_LL_ODCONC_ODCC2_BIT 2
#define HAL_LL_ODCONC_ODCC3_BIT 3
#define HAL_LL_ODCONC_ODCC4_BIT 4
#define HAL_LL_ODCONC_ODCC5_BIT 5
#define HAL_LL_ODCONC_ODCC6_BIT 6
#define HAL_LL_ODCONC_ODCC7_BIT 7
#define HAL_LL_ODCOND_ADDRESS 0x3A72U
#define HAL_LL_ODCOND_ODCD0_BIT 0
#define HAL_LL_ODCOND_ODCD1_BIT 1
#define HAL_LL_ODCOND_ODCD2_BIT 2
#define HAL_LL_ODCOND_ODCD3_BIT 3
#define HAL_LL_ODCOND_ODCD4_BIT 4
#define HAL_LL_ODCOND_ODCD5_BIT 5
#define HAL_LL_ODCOND_ODCD6_BIT 6
#define HAL_LL_ODCOND_ODCD7_BIT 7
#define HAL_LL_ODCONE_ADDRESS 0x3A82U
#define HAL_LL_ODCONE_ODCE0_BIT 0
#define HAL_LL_ODCONE_ODCE1_BIT 1
#define HAL_LL_ODCONE_ODCE2_BIT 2
#define HAL_LL_ODCONF_ADDRESS 0x3A92U
#define HAL_LL_ODCONF_ODCF0_BIT 0
#define HAL_LL_ODCONF_ODCF1_BIT 1
#define HAL_LL_ODCONF_ODCF2_BIT 2
#define HAL_LL_ODCONF_ODCF3_BIT 3
#define HAL_LL_ODCONF_ODCF4_BIT 4
#define HAL_LL_ODCONF_ODCF5_BIT 5
#define HAL_LL_ODCONF_ODCF6_BIT 6
#define HAL_LL_ODCONF_ODCF7_BIT 7
#define HAL_LL_ODCON_BIT_COUNT 43

// EOF ODCON Register addresses and bit defines

// UART Register addresses
#define HAL_LL_U1BRGH_ADDRESS 0x3DF6U
#define HAL_LL_U1BRGL_ADDRESS 0x3DF5U
#define HAL_LL_U1CON0_ADDRESS 0x3DF2U
#define HAL_LL_U1CON1_ADDRESS 0x3DF3U
#define HAL_LL_U1CON2_ADDRESS 0x3DF4U
#define HAL_LL_U1ERRIE_ADDRESS 0x3DFAU
#define HAL_LL_U1ERRIR_ADDRESS 0x3DF9U
#define HAL_LL_U1FIFO_ADDRESS 0x3DF7U
#define HAL_LL_U1RXB_ADDRESS 0x3DE8U
#define HAL_LL_U1TXB_ADDRESS 0x3DEAU
#define HAL_LL_U2BRGH_ADDRESS 0x3DDEU
#define HAL_LL_U2BRGL_ADDRESS 0x3DDDU
#define HAL_LL_U2CON0_ADDRESS 0x3DDAU
#define HAL_LL_U2CON1_ADDRESS 0x3DDBU
#define HAL_LL_U2CON2_ADDRESS 0x3DDCU
#define HAL_LL_U2ERRIE_ADDRESS 0x3DE2U
#define HAL_LL_U2ERRIR_ADDRESS 0x3DE1U
#define HAL_LL_U2FIFO_ADDRESS 0x3DDFU
#define HAL_LL_U2RXB_ADDRESS 0x3DD0U
#define HAL_LL_U2TXB_ADDRESS 0x3DD2U
// EOF UART Register addresses

// PPS Register addresses
#define HAL_LL_RA0PPS_ADDRESS 0x3A00U
#define HAL_LL_RA1PPS_ADDRESS 0x3A01U
#define HAL_LL_RA2PPS_ADDRESS 0x3A02U
#define HAL_LL_RA3PPS_ADDRESS 0x3A03U
#define HAL_LL_RA4PPS_ADDRESS 0x3A04U
#define HAL_LL_RA5PPS_ADDRESS 0x3A05U
#define HAL_LL_RA6PPS_ADDRESS 0x3A06U
#define HAL_LL_RA7PPS_ADDRESS 0x3A07U
#define HAL_LL_RB0PPS_ADDRESS 0x3A08U
#define HAL_LL_RB1PPS_ADDRESS 0x3A09U
#define HAL_LL_RB2PPS_ADDRESS 0x3A0AU
#define HAL_LL_RB3PPS_ADDRESS 0x3A0BU
#define HAL_LL_RB4PPS_ADDRESS 0x3A0CU
#define HAL_LL_RB5PPS_ADDRESS 0x3A0DU
#define HAL_LL_RB6PPS_ADDRESS 0x3A0EU
#define HAL_LL_RB7PPS_ADDRESS 0x3A0FU
#define HAL_LL_RC0PPS_ADDRESS 0x3A10U
#define HAL_LL_RC1PPS_ADDRESS 0x3A11U
#define HAL_LL_RC2PPS_ADDRESS 0x3A12U
#define HAL_LL_RC3PPS_ADDRESS 0x3A13U
#define HAL_LL_RC4PPS_ADDRESS 0x3A14U
#define HAL_LL_RC5PPS_ADDRESS 0x3A15U
#define HAL_LL_RC6PPS_ADDRESS 0x3A16U
#define HAL_LL_RC7PPS_ADDRESS 0x3A17U
#define HAL_LL_RD0PPS_ADDRESS 0x3A18U
#define HAL_LL_RD1PPS_ADDRESS 0x3A19U
#define HAL_LL_RD2PPS_ADDRESS 0x3A1AU
#define HAL_LL_RD3PPS_ADDRESS 0x3A1BU
#define HAL_LL_RD4PPS_ADDRESS 0x3A1CU
#define HAL_LL_RD5PPS_ADDRESS 0x3A1DU
#define HAL_LL_RD6PPS_ADDRESS 0x3A1EU
#define HAL_LL_RD7PPS_ADDRESS 0x3A1FU
#define HAL_LL_RE0PPS_ADDRESS 0x3A20U
#define HAL_LL_RE1PPS_ADDRESS 0x3A21U
#define HAL_LL_RE2PPS_ADDRESS 0x3A22U
#define HAL_LL_RF0PPS_ADDRESS 0x3A28U
#define HAL_LL_RF1PPS_ADDRESS 0x3A29U
#define HAL_LL_RF2PPS_ADDRESS 0x3A2AU
#define HAL_LL_RF3PPS_ADDRESS 0x3A2BU
#define HAL_LL_RF4PPS_ADDRESS 0x3A2CU
#define HAL_LL_RF5PPS_ADDRESS 0x3A2DU
#define HAL_LL_RF6PPS_ADDRESS 0x3A2EU
#define HAL_LL_RF7PPS_ADDRESS 0x3A2FU
#define HAL_LL_INT0PPS_ADDRESS 0x3AC0U
#define HAL_LL_INT1PPS_ADDRESS 0x3AC1U
#define HAL_LL_INT2PPS_ADDRESS 0x3AC2U
#define HAL_LL_T0CKIPPS_ADDRESS 0x3AC3U
#define HAL_LL_T1CKIPPS_ADDRESS 0x3AC4U
#define HAL_LL_T1GPPS_ADDRESS 0x3AC5U
#define HAL_LL_T3CKIPPS_ADDRESS 0x3AC6U
#define HAL_LL_T3GPPS_ADDRESS 0x3AC7U
#define HAL_LL_T5CKIPPS_ADDRESS 0x3AC8U
#define HAL_LL_T5GPPS_ADDRESS 0x3AC9U
#define HAL_LL_T2INPPS_ADDRESS 0x3ACAU
#define HAL_LL_T4INPPS_ADDRESS 0x3ACBU
#define HAL_LL_T6INPPS_ADDRESS 0x3ACCU
#define HAL_LL_CCP1PPS_ADDRESS 0x3ACDU
#define HAL_LL_CCP2PPS_ADDRESS 0x3ACEU
#define HAL_LL_CCP3PPS_ADDRESS 0x3ACFU
#define HAL_LL_CCP4PPS_ADDRESS 0x3AD0U
#define HAL_LL_SMT1WINPPS_ADDRESS 0x3AD1U
#define HAL_LL_SMT1SIGPPS_ADDRESS 0x3AD2U
#define HAL_LL_CWG1INPPS_ADDRESS 0x3AD3U
#define HAL_LL_CWG2INPPS_ADDRESS 0x3AD4U
#define HAL_LL_CWG3INPPS_ADDRESS 0x3AD5U
#define HAL_LL_MD1CARLPPS_ADDRESS 0x3AD6U
#define HAL_LL_MD1CARHPPS_ADDRESS 0x3AD7U
#define HAL_LL_MD1SRCPPS_ADDRESS 0x3AD8U
#define HAL_LL_CLCIN0PPS_ADDRESS 0x3AD9U
#define HAL_LL_CLCIN1PPS_ADDRESS 0x3ADAU
#define HAL_LL_CLCIN2PPS_ADDRESS 0x3ADBU
#define HAL_LL_CLCIN3PPS_ADDRESS 0x3ADCU
#define HAL_LL_ADACTPPS_ADDRESS 0x3ADDU
#define HAL_LL_SPI1SCKPPS_ADDRESS 0x3ADEU
#define HAL_LL_SPI1SDIPPS_ADDRESS 0x3ADFU
#define HAL_LL_SPI1SSPPS_ADDRESS 0x3AE0U
#define HAL_LL_I2C1SCLPPS_ADDRESS 0x3AE1U
#define HAL_LL_I2C1SDAPPS_ADDRESS 0x3AE2U
#define HAL_LL_I2C2SCLPPS_ADDRESS 0x3AE3U
#define HAL_LL_I2C2SDAPPS_ADDRESS 0x3AE4U
#define HAL_LL_U1RXPPS_ADDRESS 0x3AE5U
#define HAL_LL_U1CTSPPS_ADDRESS 0x3AE6U
#define HAL_LL_U2RXPPS_ADDRESS 0x3AE8U
#define HAL_LL_U2CTSPPS_ADDRESS 0x3AE9U
// EOF PPS Register addresses

// Unlock Register addresses
#define HAL_LL_OSCCON2_ADDRESS 0x39DAU
#define HAL_LL_PPSLOCK_ADDRESS 0x3ABFU
// EOF Unlock Register addresses

// IRQ defines
#define HAL_LL_INTERRUPT_PRIORITY_LOW 0x0018
#define HAL_LL_INTERRUPT_PRIORITY_HIGH 0x0008
#define HAL_LL_INTERRUPT_PRIORITY HAL_LL_INTERRUPT_PRIORITY_HIGH
#define HAL_LL_IRQ_U1RXIE_BIT 27
#define HAL_LL_IRQ_U1TXIE_BIT 28
#define HAL_LL_IRQ_U2RXIE_BIT 50
#define HAL_LL_IRQ_U2TXIE_BIT 51
// EOF IRQ defines

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
