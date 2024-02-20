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
 * @file  mcu_definitions.h
 * @brief MCU specific pin and module definitions.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

//ADC
#define HAL_LL_RA0_AN0_ANSELA_BIT 0
#define HAL_LL_RA0_AN0_ANSELA 0
#define HAL_LL_RA1_AN1_ANSELA_BIT 1
#define HAL_LL_RA1_AN1_ANSELA 1
#define HAL_LL_RA2_AN2_ANSELA_BIT 2
#define HAL_LL_RA2_AN2_ANSELA 2
#define HAL_LL_RA3_AN3_ANSELA_BIT 3
#define HAL_LL_RA3_AN3_ANSELA 3
#define HAL_LL_RA5_AN4_ANSELA_BIT 5
#define HAL_LL_RA5_AN4_ANSELA 4
#define HAL_LL_RB0_AN12_ANSELB_BIT 0
#define HAL_LL_RB0_AN12_ANSELB 12
#define HAL_LL_RB1_AN10_ANSELB_BIT 1
#define HAL_LL_RB1_AN10_ANSELB 10
#define HAL_LL_RB2_AN8_ANSELB_BIT 2
#define HAL_LL_RB2_AN8_ANSELB 8
#define HAL_LL_RB3_AN9_ANSELB_BIT 3
#define HAL_LL_RB3_AN9_ANSELB 9
#define HAL_LL_RB4_AN11_ANSELB_BIT 4
#define HAL_LL_RB4_AN11_ANSELB 11
#define HAL_LL_RB5_AN13_ANSELB_BIT 5
#define HAL_LL_RB5_AN13_ANSELB 13
#define HAL_LL_RC2_AN14_ANSELC_BIT 2
#define HAL_LL_RC2_AN14_ANSELC 14
#define HAL_LL_RC3_AN15_ANSELC_BIT 3
#define HAL_LL_RC3_AN15_ANSELC 15
#define HAL_LL_RC4_AN16_ANSELC_BIT 4
#define HAL_LL_RC4_AN16_ANSELC 16
#define HAL_LL_RC5_AN17_ANSELC_BIT 5
#define HAL_LL_RC5_AN17_ANSELC 17
#define HAL_LL_RC6_AN18_ANSELC_BIT 6
#define HAL_LL_RC6_AN18_ANSELC 18
#define HAL_LL_RC7_AN19_ANSELC_BIT 7
#define HAL_LL_RC7_AN19_ANSELC 19


#define HAL_LL_ADRESL_ADDRESS 0xFC3U
#define HAL_LL_VREFCON0_ADDRESS 0xF42U
#define HAL_LL_ANSELC_ADDRESS 0xF3AU
#define HAL_LL_ANSELB_ADDRESS 0xF39U
#define HAL_LL_ANSELA_ADDRESS 0xF38U
#define HAL_LL_ADCON2_ADDRESS 0xFC0U
#define HAL_LL_ADCON1_ADDRESS 0xFC1U
#define HAL_LL_ADCON0_ADDRESS 0xFC2U

#define HAL_LL_AN_COUNT 17
#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
//EOF ADC

//I2C
#define I2C1_SCL_RC3
#define I2C1_SDA_RC4
#define I2C2_SCL_RB1
#define I2C2_SDA_RB2


#define I2C_MODULE_1 1
#define I2C_MODULE_2 2

#define I2C_MODULE_COUNT 2

#define HAL_LL_I2C_PPS_ENABLED false
//EOF I2C

//UART
#define UART1_RX_RC7
#define UART1_TX_RC6
#define UART2_RX_RB7
#define UART2_TX_RB6


#define UART_MODULE_1 1
#define UART_MODULE_2 2

#define UART_MODULE_COUNT 2

#define HAL_LL_UART_PPS_ENABLED false
//EOF UART

//SPI
#define SPI1_MISO_RC4
#define SPI1_MOSI_RC5
#define SPI1_SCK_RC3
#define SPI2_MISO_RB2
#define SPI2_MOSI_RB3
#define SPI2_SCK_RB1


#define SPI_MODULE_1 1
#define SPI_MODULE_2 2

#define SPI_MODULE_COUNT 2

#define HAL_LL_SPI_PPS_ENABLED false
//EOF SPI

//PWM
#define PWM_CCP1_RC2
#define PWM_CCP2_RB3
#define PWM_CCP2_RC1
#define PWM_CCP3_RB5
#define PWM_CCP3_RC6
#define PWM_CCP4_RB0
#define PWM_CCP5_RA4

#define EPWM_CCP2_RC0_P2B
#define EPWM_CCP2_RC1_P2A
#define EPWM_CCP1_RC2_P1A
#define EPWM_CCP3_RC6_P3A
#define EPWM_CCP3_RC7_P3B
#define EPWM_CCP1_RB1_P1C
#define EPWM_CCP1_RB2_P1B
#define EPWM_CCP2_RB3_P2A
#define EPWM_CCP1_RB4_P1D
#define EPWM_CCP3_RB5_P3A
#define EPWM_CCP2_RB5_P2B

#define CCP_MODULE_1 1
#define CCP_MODULE_2 2
#define CCP_MODULE_3 3
#define CCP_MODULE_4 4
#define CCP_MODULE_5 5

#define CCP_MODULE_COUNT 5

#define TIM_MODULE_COUNT CCP_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED false
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
#define __RE3_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_E_CN
#define PORT_COUNT (5)
#define PORT_SIZE (8)
//EOF IO

// GPIO Register addresses and offsets
#define LATA_BASE_ADDRESS 0xF89U
#define LATB_BASE_ADDRESS 0xF8AU
#define LATC_BASE_ADDRESS 0xF8BU
#define LATE_BASE_ADDRESS 0x00U
#define PORTA_BASE_ADDRESS 0xF80U
#define PORTB_BASE_ADDRESS 0xF81U
#define PORTC_BASE_ADDRESS 0xF82U
#define PORTE_BASE_ADDRESS 0xF84U
#define TRISA_BASE_ADDRESS 0xF92U
#define TRISB_BASE_ADDRESS 0xF93U
#define TRISC_BASE_ADDRESS 0xF94U
#define TRISE_BASE_ADDRESS 0xF96U
// EOF GPIO Register addresses and offsets

// PMD Register addresses
#define HAL_LL_PIE1_ADDRESS 0xF9DU
#define HAL_LL_PIE2_ADDRESS 0xFA0U
#define HAL_LL_PIE3_ADDRESS 0xFA3U
#define HAL_LL_PIE4_ADDRESS 0xF7AU
#define HAL_LL_PIE5_ADDRESS 0xF7DU
#define HAL_LL_PIR1_ADDRESS 0xF9EU
#define HAL_LL_PIR2_ADDRESS 0xFA1U
#define HAL_LL_PIR3_ADDRESS 0xFA4U
#define HAL_LL_PIR4_ADDRESS 0xF7BU
#define HAL_LL_PIR5_ADDRESS 0xF7EU
#define HAL_LL_PMD0_ADDRESS 0xF3FU
#define HAL_LL_PMD1_ADDRESS 0xF3EU
#define HAL_LL_PMD2_ADDRESS 0xF3DU
// EOF PMD Register addresses

// I2C and SPI Register addresses
#define HAL_LL_SSP1ADD_ADDRESS 0xFC8U
#define HAL_LL_SSP1BUF_ADDRESS 0xFC9U
#define HAL_LL_SSP1CON1_ADDRESS 0xFC6U
#define HAL_LL_SSP1CON2_ADDRESS 0xFC5U
#define HAL_LL_SSP1STAT_ADDRESS 0xFC7U
#define HAL_LL_SSP2ADD_ADDRESS 0xF6EU
#define HAL_LL_SSP2BUF_ADDRESS 0xF6FU
#define HAL_LL_SSP2CON1_ADDRESS 0xF6CU
#define HAL_LL_SSP2CON2_ADDRESS 0xF6BU
#define HAL_LL_SSP2STAT_ADDRESS 0xF6DU
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_1 HAL_LL_SSP1BUF_ADDRESS
#define HAL_LL_SSPBUF_SPI_MASTER_MODULE_2 HAL_LL_SSP2BUF_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_1 HAL_LL_SSP1CON1_ADDRESS
#define HAL_LL_SSPCON1_SPI_MASTER_MODULE_2 HAL_LL_SSP2CON1_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_1 HAL_LL_SSP1STAT_ADDRESS
#define HAL_LL_SSPSTAT_SPI_MASTER_MODULE_2 HAL_LL_SSP2STAT_ADDRESS
// EOF I2C and SPI Register addresses

// PMD & PIR Register defines
#define HAL_LL_PIE_MODULE_UART1_ADDRESS HAL_LL_PIE1_ADDRESS
#define HAL_LL_PIE_MODULE_UART2_ADDRESS HAL_LL_PIE3_ADDRESS
#define HAL_LL_PIR_MODULE_I2C1_ADDRESS HAL_LL_PIR1_ADDRESS
#define HAL_LL_PIR_MODULE_I2C2_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_MODULE_UART1_ADDRESS HAL_LL_PIR1_ADDRESS
#define HAL_LL_PIR_MODULE_UART2_ADDRESS HAL_LL_PIR3_ADDRESS
#define HAL_LL_PIR_SSPIF_MODULE_1_BIT 3
#define HAL_LL_PIR_SSPIF_MODULE_2_BIT 7
#define HAL_LL_PMD_I2C1_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_I2C2_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_SPI1_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_SPI2_ADDRESS HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_UART1_ADDRESS HAL_LL_PMD0_ADDRESS
#define HAL_LL_PMD_UART2_ADDRESS HAL_LL_PMD0_ADDRESS
#define HAL_LL_SSP1_MODULE_BIT 6
#define HAL_LL_SSP2_MODULE_BIT 7
#define HAL_LL_UART1_MODULE_BIT 6
#define HAL_LL_UART1_RCIF_BIT 5
#define HAL_LL_UART1_TXIF_BIT 4
#define HAL_LL_UART2_MODULE_BIT 7
#define HAL_LL_UART2_RCIF_BIT 5
#define HAL_LL_UART2_TXIF_BIT 4
// EOF PMD & PIR Register defines

// TMR Register addresses
#define HAL_LL_PSTR3CON_ADDRESS 0xF5AU
#define HAL_LL_PSTR2CON_ADDRESS 0xF63U
#define HAL_LL_PSTR1CON_ADDRESS 0xFB9U
#define HAL_LL_CCP1CON_ADDRESS 0xFBDU
#define HAL_LL_CCP2CON_ADDRESS 0xF66U
#define HAL_LL_CCP3CON_ADDRESS 0xF5DU
#define HAL_LL_CCP4CON_ADDRESS 0xF57U
#define HAL_LL_CCP5CON_ADDRESS 0xF54U
#define HAL_LL_CCPTMRS0_ADDRESS 0xF49U
#define HAL_LL_CCPTMRS_CCP_MODULE_1 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_1_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_2 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_2_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_3 HAL_LL_CCPTMRS0_ADDRESS
#define HAL_LL_CCP_MODULE_3_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS1_ADDRESS 0xF48U
#define HAL_LL_CCPTMRS_CCP_MODULE_4 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_4_TIM2_ENABLE_BIT 0x00
#define HAL_LL_CCPTMRS_CCP_MODULE_5 HAL_LL_CCPTMRS1_ADDRESS
#define HAL_LL_CCP_MODULE_5_TIM2_ENABLE_BIT 0x00
#define HAL_LL_PMD_CCP_MODULE_1 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_1_ENABLE_BIT 0
#define HAL_LL_PMD_CCP_MODULE_2 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_2_ENABLE_BIT 1
#define HAL_LL_PMD_CCP_MODULE_3 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_3_ENABLE_BIT 2
#define HAL_LL_PMD_CCP_MODULE_4 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_4_ENABLE_BIT 3
#define HAL_LL_PMD_CCP_MODULE_5 HAL_LL_PMD1_ADDRESS
#define HAL_LL_PMD_CCP_MODULE_5_ENABLE_BIT 4
#define HAL_LL_PR2_ADDRESS 0xFBBU
#define HAL_LL_PR4_ADDRESS 0xF52U
#define HAL_LL_PR6_ADDRESS 0xF4BU
#define HAL_LL_T0CON_ADDRESS 0xFD5U
#define HAL_LL_T1CON_ADDRESS 0xFCDU
#define HAL_LL_T2CON_ADDRESS 0xFBAU
#define HAL_LL_T3CON_ADDRESS 0xFB1U
#define HAL_LL_T4CON_ADDRESS 0xF51U
#define HAL_LL_T5CON_ADDRESS 0xF4EU
#define HAL_LL_T6CON_ADDRESS 0xF4AU
#define HAL_LL_CCPR1L_ADDRESS 0xFBEU
#define HAL_LL_CCPR2L_ADDRESS 0xF67U
#define HAL_LL_CCPR3L_ADDRESS 0xF5EU
#define HAL_LL_CCPR4L_ADDRESS 0xF58U
#define HAL_LL_CCPR5L_ADDRESS 0xF55U
// EOF TMR Register addresses

// ADC Register addresses and bit defines
#define HAL_LL_ADC_PMD_ADDRESS HAL_LL_PMD2_ADDRESS
#define HAL_LL_ADCMD_BIT 0
// EOF ADC Register addresses and bit defines

// SLRCON Register addresses and bit defines
#define HAL_LL_SLRCON_ADDRESS 0xF60U
#define HAL_LL_SLRCON_PA0_BIT 0
#define HAL_LL_SLRCON_PA1_BIT 0
#define HAL_LL_SLRCON_PA2_BIT 0
#define HAL_LL_SLRCON_PA3_BIT 0
#define HAL_LL_SLRCON_PA4_BIT 0
#define HAL_LL_SLRCON_PA5_BIT 0
#define HAL_LL_SLRCON_PA6_BIT 0
#define HAL_LL_SLRCON_PA7_BIT 0
#define HAL_LL_SLRCON_PB0_BIT 1
#define HAL_LL_SLRCON_PB1_BIT 1
#define HAL_LL_SLRCON_PB2_BIT 1
#define HAL_LL_SLRCON_PB3_BIT 1
#define HAL_LL_SLRCON_PB4_BIT 1
#define HAL_LL_SLRCON_PB5_BIT 1
#define HAL_LL_SLRCON_PB6_BIT 1
#define HAL_LL_SLRCON_PB7_BIT 1
#define HAL_LL_SLRCON_PC0_BIT 2
#define HAL_LL_SLRCON_PC1_BIT 2
#define HAL_LL_SLRCON_PC2_BIT 2
#define HAL_LL_SLRCON_PC3_BIT 2
#define HAL_LL_SLRCON_PC4_BIT 2
#define HAL_LL_SLRCON_PC5_BIT 2
#define HAL_LL_SLRCON_PC6_BIT 2
#define HAL_LL_SLRCON_PC7_BIT 2
#define HAL_LL_SLRCONA_ADDRESS HAL_LL_SLRCON_ADDRESS
#define HAL_LL_SLRCONB_ADDRESS HAL_LL_SLRCON_ADDRESS
#define HAL_LL_SLRCONC_ADDRESS HAL_LL_SLRCON_ADDRESS
#define HAL_LL_SLRCON_BIT_COUNT 24

// EOF SLRCON Register addresses and bit defines

// UART Register addresses
#define HAL_LL_BAUDCON1_ADDRESS 0xFB8U
#define HAL_LL_BAUDCON2_ADDRESS 0xF70U
#define HAL_LL_RCREG1_ADDRESS 0xFAEU
#define HAL_LL_RCREG2_ADDRESS 0xF74U
#define HAL_LL_RCSTA1_ADDRESS 0xFABU
#define HAL_LL_RCSTA2_ADDRESS 0xF71U
#define HAL_LL_SPBRG1_ADDRESS 0xFAFU
#define HAL_LL_SPBRG2_ADDRESS 0xF75U
#define HAL_LL_SPBRGH1_ADDRESS 0xFB0U
#define HAL_LL_SPBRGH2_ADDRESS 0xF76U
#define HAL_LL_TXREG1_ADDRESS 0xFADU
#define HAL_LL_TXREG2_ADDRESS 0xF73U
#define HAL_LL_TXSTA1_ADDRESS 0xFACU
#define HAL_LL_TXSTA2_ADDRESS 0xF72U
// EOF UART Register addresses

// Unlock Register addresses
#define HAL_LL_EECON2_ADDRESS 0xFA7U
#define HAL_LL_OSCCON2_ADDRESS 0xFD2U
// EOF Unlock Register addresses

#define HAL_LL_ODCON_BIT_COUNT 0

// IRQ defines
#define HAL_LL_INTERRUPT_PRIORITY_LOW 0x0018
#define HAL_LL_INTERRUPT_PRIORITY_HIGH 0x0008
#define HAL_LL_INTERRUPT_PRIORITY HAL_LL_INTERRUPT_PRIORITY_HIGH
#define HAL_LL_IRQ_TX1IE_BIT 4
#define HAL_LL_IRQ_RC1IE_BIT 5
#define HAL_LL_IRQ_TX2IE_BIT 20
#define HAL_LL_IRQ_RC2IE_BIT 21
// EOF IRQ defines

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END
