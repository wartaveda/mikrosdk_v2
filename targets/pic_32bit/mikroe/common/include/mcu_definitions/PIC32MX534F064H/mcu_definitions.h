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
 * @brief MCU specific pin and module definitions for PIC32MX534F064H.
 */

#ifndef _MCU_DEFINITIONS_H_
#define _MCU_DEFINITIONS_H_

#include "mcu_reg_addresses.h"
#include "can_definitions.h"

//DMA
#define DMA_NUM_OF_MODULES 1
#define DMA_NUM_OF_STREAMS 4
#define DMA_NUM_OF_STREAMS_FAMILY 4
#define DMA_NUM_OF_CHANNELS 255
#define DMA_NUM_OF_CHANNELS_FAMILY 255
//EOF DMA

//ADC
#define HAL_LL_RB0_AN0 0
#define HAL_LL_RB1_AN1 1
#define HAL_LL_RB10_AN10 10
#define HAL_LL_RB11_AN11 11
#define HAL_LL_RB12_AN12 12
#define HAL_LL_RB13_AN13 13
#define HAL_LL_RB14_AN14 14
#define HAL_LL_RB15_AN15 15
#define HAL_LL_RB2_AN2 2
#define HAL_LL_RB3_AN3 3
#define HAL_LL_RB4_AN4 4
#define HAL_LL_RB5_AN5 5
#define HAL_LL_RB6_AN6 6
#define HAL_LL_RB7_AN7 7
#define HAL_LL_RB8_AN8 8
#define HAL_LL_RB9_AN9 9

#define ADC_MODULE 1
#define ADC_MODULE_COUNT 1
#define HAL_LL_AN_COUNT 16

#define HAL_LL_ADC1BUFF_ADDRESS 0xBF809160UL
#define HAL_LL_ADC1BUFE_ADDRESS 0xBF809150UL
#define HAL_LL_ADC1BUFD_ADDRESS 0xBF809140UL
#define HAL_LL_ADC1BUFC_ADDRESS 0xBF809130UL
#define HAL_LL_ADC1BUFB_ADDRESS 0xBF809120UL
#define HAL_LL_ADC1BUFA_ADDRESS 0xBF809110UL
#define HAL_LL_ADC1BUF9_ADDRESS 0xBF809100UL
#define HAL_LL_ADC1BUF8_ADDRESS 0xBF8090F0UL
#define HAL_LL_ADC1BUF7_ADDRESS 0xBF8090E0UL
#define HAL_LL_ADC1BUF6_ADDRESS 0xBF8090D0UL
#define HAL_LL_ADC1BUF5_ADDRESS 0xBF8090C0UL
#define HAL_LL_ADC1BUF4_ADDRESS 0xBF8090B0UL
#define HAL_LL_ADC1BUF3_ADDRESS 0xBF8090A0UL
#define HAL_LL_ADC1BUF2_ADDRESS 0xBF809090UL
#define HAL_LL_ADC1BUF1_ADDRESS 0xBF809080UL
#define HAL_LL_ADC1BUF0_ADDRESS 0xBF809070UL
#define HAL_LL_AD1PCFG_ADDRESS 0xBF809060UL
#define HAL_LL_AD1CSSL_ADDRESS 0xBF809050UL
#define HAL_LL_AD1CON3_ADDRESS 0xBF809020UL
#define HAL_LL_AD1CON2_ADDRESS 0xBF809010UL
#define HAL_LL_AD1CON1_ADDRESS 0xBF809000UL
#define HAL_LL_AD1CHS_ADDRESS 0xBF809040UL

#define HAL_LL_RB0_AN0_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB1_AN1_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB10_AN10_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB11_AN11_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB12_AN12_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB13_AN13_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB14_AN14_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB15_AN15_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB2_AN2_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB3_AN3_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB4_AN4_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB5_AN5_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB6_AN6_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB7_AN7_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB8_AN8_ADDRESS HAL_LL_AD1PCFG_ADDRESS
#define HAL_LL_RB9_AN9_ADDRESS HAL_LL_AD1PCFG_ADDRESS
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
#define UART1_TX_RD3
#define UART2_RX_RF4
#define UART2_TX_RF5
#define UART3_RX_RG7
#define UART3_TX_RG8
#define UART4_RX_RD9
#define UART4_TX_RD1
#define UART5_RX_RB8
#define UART5_TX_RB14
#define UART6_RX_RG9
#define UART6_TX_RG6

#define UART_MODULE_1 1
#define UART_MODULE_2 2
#define UART_MODULE_3 3
#define UART_MODULE_4 4
#define UART_MODULE_5 5
#define UART_MODULE_6 6

#define UART_MODULE_COUNT 6

#define HAL_LL_UART_PPS_ENABLED false
//EOF UART

//SPI
#define SPI2_MISO_RG7
#define SPI2_MOSI_RG8
#define SPI2_SCK_RG6
#define SPI3_MISO_RD2
#define SPI3_MOSI_RD3
#define SPI3_SCK_RD1
#define SPI4_MISO_RF4
#define SPI4_MOSI_RF5
#define SPI4_SCK_RB14

#define SPI_MODULE_2 1
#define SPI_MODULE_3 2
#define SPI_MODULE_4 3

#define SPI_MODULE_COUNT 3

#define HAL_LL_SPI_PPS_ENABLED false
//EOF SPI

//PWM
#define PWM1_OC_RD0
#define PWM2_OC_RD1
#define PWM3_OC_RD2
#define PWM4_OC_RD3
#define PWM5_OC_RD4

#define OCR_MODULE_1 1
#define OCR_MODULE_2 2
#define OCR_MODULE_3 3
#define OCR_MODULE_4 4
#define OCR_MODULE_5 5

#define OCR_MODULE_COUNT 5

#define TIM_MODULE_COUNT OCR_MODULE_COUNT

#define HAL_LL_TIM_PPS_ENABLED false
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
#define __RD6_CN
#define __RD7_CN
#define __RD8_CN
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
#define __RG2_CN
#define __RG3_CN
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
#define PORT_COUNT (7)
#define PORT_SIZE (16)
//EOF IO

// GPIO Register addresses and offsets
#define LATB_BASE_ADDRESS 0xBF886060UL
#define LATC_BASE_ADDRESS 0xBF8860A0UL
#define LATD_BASE_ADDRESS 0xBF8860E0UL
#define LATE_BASE_ADDRESS 0xBF886120UL
#define LATF_BASE_ADDRESS 0xBF886160UL
#define LATG_BASE_ADDRESS 0xBF8861A0UL
#define PORTB_BASE_ADDRESS 0xBF886050UL
#define PORTC_BASE_ADDRESS 0xBF886090UL
#define PORTD_BASE_ADDRESS 0xBF8860D0UL
#define PORTE_BASE_ADDRESS 0xBF886110UL
#define PORTF_BASE_ADDRESS 0xBF886150UL
#define PORTG_BASE_ADDRESS 0xBF886190UL
#define TRISB_BASE_ADDRESS 0xBF886040UL
#define TRISC_BASE_ADDRESS 0xBF886080UL
#define TRISD_BASE_ADDRESS 0xBF8860C0UL
#define TRISE_BASE_ADDRESS 0xBF886100UL
#define TRISF_BASE_ADDRESS 0xBF886140UL
#define TRISG_BASE_ADDRESS 0xBF886180UL
// EOF GPIO Register addresses and offsets

// I2C and SPI Register addresses
#define HAL_LL_I2C1ADD_ADDRESS 0xBF805320UL
#define HAL_LL_I2C1BRG_ADDRESS 0xBF805340UL
#define HAL_LL_I2C1CON_ADDRESS 0xBF805300UL
#define HAL_LL_I2C1MSK_ADDRESS 0xBF805330UL
#define HAL_LL_I2C1RCV_ADDRESS 0xBF805360UL
#define HAL_LL_I2C1STAT_ADDRESS 0xBF805310UL
#define HAL_LL_I2C1TRN_ADDRESS 0xBF805350UL
#define HAL_LL_I2C3ADD_ADDRESS 0xBF805020UL
#define HAL_LL_I2C3BRG_ADDRESS 0xBF805040UL
#define HAL_LL_I2C3CON_ADDRESS 0xBF805000UL
#define HAL_LL_I2C3MSK_ADDRESS 0xBF805030UL
#define HAL_LL_I2C3RCV_ADDRESS 0xBF805060UL
#define HAL_LL_I2C3STAT_ADDRESS 0xBF805010UL
#define HAL_LL_I2C3TRN_ADDRESS 0xBF805050UL
#define HAL_LL_I2C4ADD_ADDRESS 0xBF805120UL
#define HAL_LL_I2C4BRG_ADDRESS 0xBF805140UL
#define HAL_LL_I2C4CON_ADDRESS 0xBF805100UL
#define HAL_LL_I2C4MSK_ADDRESS 0xBF805130UL
#define HAL_LL_I2C4RCV_ADDRESS 0xBF805160UL
#define HAL_LL_I2C4STAT_ADDRESS 0xBF805110UL
#define HAL_LL_I2C4TRN_ADDRESS 0xBF805150UL
#define HAL_LL_I2C5ADD_ADDRESS 0xBF805220UL
#define HAL_LL_I2C5BRG_ADDRESS 0xBF805240UL
#define HAL_LL_I2C5CON_ADDRESS 0xBF805200UL
#define HAL_LL_I2C5MSK_ADDRESS 0xBF805230UL
#define HAL_LL_I2C5RCV_ADDRESS 0xBF805260UL
#define HAL_LL_I2C5STAT_ADDRESS 0xBF805210UL
#define HAL_LL_I2C5TRN_ADDRESS 0xBF805250UL
#define HAL_LL_SPI2BRG_ADDRESS 0xBF805A30UL
#define HAL_LL_SPI2BUF_ADDRESS 0xBF805A20UL
#define HAL_LL_SPI2CON_ADDRESS 0xBF805A00UL
#define HAL_LL_SPI2STAT_ADDRESS 0xBF805A10UL
#define HAL_LL_SPI3BRG_ADDRESS 0xBF805830UL
#define HAL_LL_SPI3BUF_ADDRESS 0xBF805820UL
#define HAL_LL_SPI3CON_ADDRESS 0xBF805800UL
#define HAL_LL_SPI3STAT_ADDRESS 0xBF805810UL
#define HAL_LL_SPI4BRG_ADDRESS 0xBF805C30UL
#define HAL_LL_SPI4BUF_ADDRESS 0xBF805C20UL
#define HAL_LL_SPI4CON_ADDRESS 0xBF805C00UL
#define HAL_LL_SPI4STAT_ADDRESS 0xBF805C10UL
// EOF I2C and SPI Register addresses

// TMR Register addresses
#define HAL_LL_CM1CON_ADDRESS 0xBF80A000UL
#define HAL_LL_CM2CON_ADDRESS 0xBF80A010UL
#define HAL_LL_CMSTAT_ADDRESS 0xBF80A060UL
#define HAL_LL_OC1CON_ADDRESS 0xBF803000UL
#define HAL_LL_OC1R_ADDRESS 0xBF803010UL
#define HAL_LL_OC1RS_ADDRESS 0xBF803020UL
#define HAL_LL_OC2CON_ADDRESS 0xBF803200UL
#define HAL_LL_OC2R_ADDRESS 0xBF803210UL
#define HAL_LL_OC2RS_ADDRESS 0xBF803220UL
#define HAL_LL_OC3CON_ADDRESS 0xBF803400UL
#define HAL_LL_OC3R_ADDRESS 0xBF803410UL
#define HAL_LL_OC3RS_ADDRESS 0xBF803420UL
#define HAL_LL_OC4CON_ADDRESS 0xBF803600UL
#define HAL_LL_OC4R_ADDRESS 0xBF803610UL
#define HAL_LL_OC4RS_ADDRESS 0xBF803620UL
#define HAL_LL_OC5CON_ADDRESS 0xBF803800UL
#define HAL_LL_OC5R_ADDRESS 0xBF803810UL
#define HAL_LL_OC5RS_ADDRESS 0xBF803820UL
#define HAL_LL_PR1_ADDRESS 0xBF800620UL
#define HAL_LL_PR2_ADDRESS 0xBF800820UL
#define HAL_LL_PR3_ADDRESS 0xBF800A20UL
#define HAL_LL_PR4_ADDRESS 0xBF800C20UL
#define HAL_LL_PR5_ADDRESS 0xBF800E20UL
#define HAL_LL_T1CON_ADDRESS 0xBF800600UL
#define HAL_LL_T2CON_ADDRESS 0xBF800800UL
#define HAL_LL_T3CON_ADDRESS 0xBF800A00UL
#define HAL_LL_T4CON_ADDRESS 0xBF800C00UL
#define HAL_LL_T5CON_ADDRESS 0xBF800E00UL
#define HAL_LL_TMR1_ADDRESS 0xBF800610UL
#define HAL_LL_TMR2_ADDRESS 0xBF800810UL
#define HAL_LL_TMR3_ADDRESS 0xBF800A10UL
#define HAL_LL_TMR4_ADDRESS 0xBF800C10UL
#define HAL_LL_TMR5_ADDRESS 0xBF800E10UL
// EOF TMR Register addresses

// UART Register addresses
#define HAL_LL_U1BRG_ADDRESS 0xBF806040UL
#define HAL_LL_U1MODE_ADDRESS 0xBF806000UL
#define HAL_LL_U1RXREG_ADDRESS 0xBF806030UL
#define HAL_LL_U1STA_ADDRESS 0xBF806010UL
#define HAL_LL_U1TXREG_ADDRESS 0xBF806020UL
#define HAL_LL_U2BRG_ADDRESS 0xBF806840UL
#define HAL_LL_U2MODE_ADDRESS 0xBF806800UL
#define HAL_LL_U2RXREG_ADDRESS 0xBF806830UL
#define HAL_LL_U2STA_ADDRESS 0xBF806810UL
#define HAL_LL_U2TXREG_ADDRESS 0xBF806820UL
#define HAL_LL_U3BRG_ADDRESS 0xBF806440UL
#define HAL_LL_U3MODE_ADDRESS 0xBF806400UL
#define HAL_LL_U3RXREG_ADDRESS 0xBF806430UL
#define HAL_LL_U3STA_ADDRESS 0xBF806410UL
#define HAL_LL_U3TXREG_ADDRESS 0xBF806420UL
#define HAL_LL_U4BRG_ADDRESS 0xBF806240UL
#define HAL_LL_U4MODE_ADDRESS 0xBF806200UL
#define HAL_LL_U4RXREG_ADDRESS 0xBF806230UL
#define HAL_LL_U4STA_ADDRESS 0xBF806210UL
#define HAL_LL_U4TXREG_ADDRESS 0xBF806220UL
#define HAL_LL_U5BRG_ADDRESS 0xBF806A40UL
#define HAL_LL_U5MODE_ADDRESS 0xBF806A00UL
#define HAL_LL_U5RXREG_ADDRESS 0xBF806A30UL
#define HAL_LL_U5STA_ADDRESS 0xBF806A10UL
#define HAL_LL_U5TXREG_ADDRESS 0xBF806A20UL
#define HAL_LL_U6BRG_ADDRESS 0xBF806640UL
#define HAL_LL_U6MODE_ADDRESS 0xBF806600UL
#define HAL_LL_U6RXREG_ADDRESS 0xBF806630UL
#define HAL_LL_U6STA_ADDRESS 0xBF806610UL
#define HAL_LL_U6TXREG_ADDRESS 0xBF806620UL
// EOF UART Register addresses

// IVT Register addresses
#define HAL_LL_UART_1 24
#define HAL_LL_UART_1A 24
#define HAL_LL_UART_1B 49
#define HAL_LL_UART_2 32
#define HAL_LL_UART_2A 31
#define HAL_LL_UART_2B 50
#define HAL_LL_UART_3 31
#define HAL_LL_UART_3A 32
#define HAL_LL_UART_3B 51
#define HAL_LL_UART_4 49
#define HAL_LL_UART_5 51
#define HAL_LL_UART_6 50
#define HAL_LL_UART1_ERR 26
#define HAL_LL_UART1_RX 27
#define HAL_LL_UART1_TX 28
#define HAL_LL_UART1A_ERR 26
#define HAL_LL_UART1A_RX 27
#define HAL_LL_UART1A_TX 28
#define HAL_LL_UART1B_ERR 67
#define HAL_LL_UART1B_RX 68
#define HAL_LL_UART1B_TX 69
#define HAL_LL_UART2_ERR 40
#define HAL_LL_UART2_RX 41
#define HAL_LL_UART2_TX 42
#define HAL_LL_UART2A_ERR 37
#define HAL_LL_UART2A_RX 38
#define HAL_LL_UART2A_TX 39
#define HAL_LL_UART2B_ERR 70
#define HAL_LL_UART2B_RX 71
#define HAL_LL_UART2B_TX 72
#define HAL_LL_UART3_ERR 37
#define HAL_LL_UART3_RX 38
#define HAL_LL_UART3_TX 39
#define HAL_LL_UART3A_ERR 40
#define HAL_LL_UART3A_RX 41
#define HAL_LL_UART3A_TX 42
#define HAL_LL_UART3B_ERR 73
#define HAL_LL_UART3B_RX 74
#define HAL_LL_UART3B_TX 75
#define HAL_LL_UART4_ERR 67
#define HAL_LL_UART4_RX 68
#define HAL_LL_UART4_TX 69
#define HAL_LL_UART5_ERR 73
#define HAL_LL_UART5_RX 74
#define HAL_LL_UART5_TX 75
#define HAL_LL_UART6_ERR 70
#define HAL_LL_UART6_RX 71
#define HAL_LL_UART6_TX 72
#define HAL_LL_IEC0_ADDRESS 0xBF881060UL
#define HAL_LL_IEC1_ADDRESS 0xBF881070UL
#define HAL_LL_IEC2_ADDRESS 0xBF881080UL
#define HAL_LL_IFS0_ADDRESS 0xBF881030UL
#define HAL_LL_IFS1_ADDRESS 0xBF881040UL
#define HAL_LL_IFS2_ADDRESS 0xBF881050UL
#define HAL_LL_INTSTAT_ADDRESS 0xBF881010UL
#define HAL_LL_IPC0_ADDRESS 0xBF881090UL
#define HAL_LL_IPC1_ADDRESS 0xBF8810A0UL
#define HAL_LL_IPC10_ADDRESS 0xBF881130UL
#define HAL_LL_IPC11_ADDRESS 0xBF881140UL
#define HAL_LL_IPC12_ADDRESS 0xBF881150UL
#define HAL_LL_IPC2_ADDRESS 0xBF8810B0UL
#define HAL_LL_IPC3_ADDRESS 0xBF8810C0UL
#define HAL_LL_IPC4_ADDRESS 0xBF8810D0UL
#define HAL_LL_IPC5_ADDRESS 0xBF8810E0UL
#define HAL_LL_IPC6_ADDRESS 0xBF8810F0UL
#define HAL_LL_IPC7_ADDRESS 0xBF881100UL
#define HAL_LL_IPC8_ADDRESS 0xBF881110UL
#define HAL_LL_IPC9_ADDRESS 0xBF881120UL
#define HAL_LL_IPTMR_ADDRESS 0xBF881020UL
// EOF IVT Register addresses

// Unlock Register addresses
#define HAL_LL_OSCCON_ADDRESS 0xBF80F000UL
// EOF Unlock Register addresses

// UART Interrupt necessities
#define HAL_LL_IVT_UART_1_SHIFT 2
#define HAL_LL_IVT_UART_1 HAL_LL_UART_1
#define HAL_LL_IVT_UART_1_ADDRESS HAL_LL_IPC6_ADDRESS
#define HAL_LL_UART_1_IFS_RX_ADDRESS HAL_LL_IFS0_ADDRESS
#define HAL_LL_UART_1_IEC_RX_ADDRESS HAL_LL_IEC0_ADDRESS
#define HAL_LL_UART_1_IFS_TX_ADDRESS HAL_LL_IFS0_ADDRESS
#define HAL_LL_UART_1_IEC_TX_ADDRESS HAL_LL_IEC0_ADDRESS
#define HAL_LL_UART_1_TX_FLAG 28
#define HAL_LL_UART_1_RX_FLAG 27

#define HAL_LL_IVT_UART_2_SHIFT 2
#define HAL_LL_IVT_UART_2 HAL_LL_UART_2
#define HAL_LL_IVT_UART_2_ADDRESS HAL_LL_IPC8_ADDRESS
#define HAL_LL_UART_2_IFS_RX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_2_IEC_RX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_2_IFS_TX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_2_IEC_TX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_2_TX_FLAG 10
#define HAL_LL_UART_2_RX_FLAG 9

#define HAL_LL_IVT_UART_3_SHIFT 26
#define HAL_LL_IVT_UART_3 HAL_LL_UART_3
#define HAL_LL_IVT_UART_3_ADDRESS HAL_LL_IPC7_ADDRESS
#define HAL_LL_UART_3_IFS_RX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_3_IEC_RX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_3_IFS_TX_ADDRESS HAL_LL_IFS1_ADDRESS
#define HAL_LL_UART_3_IEC_TX_ADDRESS HAL_LL_IEC1_ADDRESS
#define HAL_LL_UART_3_TX_FLAG 7
#define HAL_LL_UART_3_RX_FLAG 6

#define HAL_LL_IVT_UART_4_SHIFT 10
#define HAL_LL_IVT_UART_4 HAL_LL_UART_4
#define HAL_LL_IVT_UART_4_ADDRESS HAL_LL_IPC12_ADDRESS
#define HAL_LL_UART_4_IFS_RX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_4_IEC_RX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_4_IFS_TX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_4_IEC_TX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_4_TX_FLAG 5
#define HAL_LL_UART_4_RX_FLAG 4

#define HAL_LL_IVT_UART_5_SHIFT 26
#define HAL_LL_IVT_UART_5 HAL_LL_UART_5
#define HAL_LL_IVT_UART_5_ADDRESS HAL_LL_IPC12_ADDRESS
#define HAL_LL_UART_5_IFS_RX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_5_IEC_RX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_5_IFS_TX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_5_IEC_TX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_5_TX_FLAG 11
#define HAL_LL_UART_5_RX_FLAG 10

#define HAL_LL_IVT_UART_6_SHIFT 18
#define HAL_LL_IVT_UART_6 HAL_LL_UART_6
#define HAL_LL_IVT_UART_6_ADDRESS HAL_LL_IPC12_ADDRESS
#define HAL_LL_UART_6_IFS_RX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_6_IEC_RX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_6_IFS_TX_ADDRESS HAL_LL_IFS2_ADDRESS
#define HAL_LL_UART_6_IEC_TX_ADDRESS HAL_LL_IEC2_ADDRESS
#define HAL_LL_UART_6_TX_FLAG 8
#define HAL_LL_UART_6_RX_FLAG 7
// EOF UART Interrupt necessities

#endif // _MCU_DEFINITIONS_H_
