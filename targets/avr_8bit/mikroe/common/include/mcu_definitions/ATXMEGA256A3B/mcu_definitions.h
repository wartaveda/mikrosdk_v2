/****************************************************************************
**
** Copyright (C) 2022 MikroElektronika d.o.o.
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

// ADC
#define ADC0_PA0_CH0
#define ADC0_PA1_CH1
#define ADC0_PA2_CH2
#define ADC0_PA3_CH3
#define ADC0_PA4_CH4
#define ADC0_PA5_CH5
#define ADC0_PA6_CH6
#define ADC0_PA7_CH7
#define ADC1_PB0_CH0
#define ADC1_PB1_CH1
#define ADC1_PB2_CH2
#define ADC1_PB3_CH3
#define ADC1_PB4_CH4
#define ADC1_PB5_CH5
#define ADC1_PB6_CH6
#define ADC1_PB7_CH7

#define ADC_MODULE_0 (1)
#define ADC_MODULE_1 (2)

#define HAL_LL_AN_COUNT (16)
#define ADC_MODULE_COUNT (2)

// ADC Register addresses and offsets
#define HAL_LL_ADC0_CTRLA_REG_ADDRESS (0x200)
#define HAL_LL_ADC0_BASE_ADDRESS (HAL_LL_ADC0_CTRLA_REG_ADDRESS)
#define HAL_LL_ADC0_CTRLB_REG_ADDRESS (0x201)
#define HAL_LL_ADC0_REFCTRL_REG_ADDRESS (0x202)
#define HAL_LL_ADC0_EVCTRL_REG_ADDRESS (0x203)
#define HAL_LL_ADC0_PRESCALER_REG_ADDRESS (0x204)
#define HAL_LL_ADC0_INTFLAGS_REG_ADDRESS (0x206)
#define HAL_LL_ADC0_TEMP_REG_ADDRESS (0x207)
#define HAL_LL_ADC0_CH0RESL_REG_ADDRESS (0x210)
#define HAL_LL_ADC0_CH0RESH_REG_ADDRESS (0x211)
#define HAL_LL_ADC0_CH0RES_REG_ADDRESS (0x210)
#define HAL_LL_ADC0_CH1RESL_REG_ADDRESS (0x212)
#define HAL_LL_ADC0_CH1RESH_REG_ADDRESS (0x213)
#define HAL_LL_ADC0_CH1RES_REG_ADDRESS (0x212)
#define HAL_LL_ADC0_CH2RESL_REG_ADDRESS (0x214)
#define HAL_LL_ADC0_CH2RESH_REG_ADDRESS (0x215)
#define HAL_LL_ADC0_CH2RES_REG_ADDRESS (0x214)
#define HAL_LL_ADC0_CH3RESL_REG_ADDRESS (0x216)
#define HAL_LL_ADC0_CH3RESH_REG_ADDRESS (0x217)
#define HAL_LL_ADC0_CH3RES_REG_ADDRESS (0x216)
#define HAL_LL_ADC0_CH0CTRL_REG_ADDRESS (0x220)
#define HAL_LL_ADC0_CH0MUXCTRL_REG_ADDRESS (0x221)
#define HAL_LL_ADC0_CH0INTCTRL_REG_ADDRESS (0x222)
#define HAL_LL_ADC0_CH0INTFLAGS_REG_ADDRESS (0x223)
#define HAL_LL_ADC0_CH1CTRL_REG_ADDRESS (0x228)
#define HAL_LL_ADC0_CH1MUXCTRL_REG_ADDRESS (0x229)
#define HAL_LL_ADC0_CH1INTCTRL_REG_ADDRESS (0x22A)
#define HAL_LL_ADC0_CH1INTFLAGS_REG_ADDRESS (0x22B)
#define HAL_LL_ADC0_CH2CTRL_REG_ADDRESS (0x230)
#define HAL_LL_ADC0_CH2MUXCTRL_REG_ADDRESS (0x231)
#define HAL_LL_ADC0_CH2INTCTRL_REG_ADDRESS (0x232)
#define HAL_LL_ADC0_CH2INTFLAGS_REG_ADDRESS (0x233)
#define HAL_LL_ADC0_CH3CTRL_REG_ADDRESS (0x238)
#define HAL_LL_ADC0_CH3MUXCTRL_REG_ADDRESS (0x239)
#define HAL_LL_ADC0_CH3INTCTRL_REG_ADDRESS (0x23A)
#define HAL_LL_ADC0_CH3INTFLAGS_REG_ADDRESS (0x23B)
#define HAL_LL_ADC1_CTRLA_REG_ADDRESS (0x240)
#define HAL_LL_ADC1_BASE_ADDRESS (HAL_LL_ADC1_CTRLA_REG_ADDRESS)
#define HAL_LL_ADC1_CTRLB_REG_ADDRESS (0x241)
#define HAL_LL_ADC1_REFCTRL_REG_ADDRESS (0x242)
#define HAL_LL_ADC1_EVCTRL_REG_ADDRESS (0x243)
#define HAL_LL_ADC1_PRESCALER_REG_ADDRESS (0x244)
#define HAL_LL_ADC1_INTFLAGS_REG_ADDRESS (0x246)
#define HAL_LL_ADC1_TEMP_REG_ADDRESS (0x247)
#define HAL_LL_ADC1_CH0RESL_REG_ADDRESS (0x250)
#define HAL_LL_ADC1_CH0RESH_REG_ADDRESS (0x251)
#define HAL_LL_ADC1_CH0RES_REG_ADDRESS (0x250)
#define HAL_LL_ADC1_CH1RESL_REG_ADDRESS (0x252)
#define HAL_LL_ADC1_CH1RESH_REG_ADDRESS (0x253)
#define HAL_LL_ADC1_CH1RES_REG_ADDRESS (0x252)
#define HAL_LL_ADC1_CH2RESL_REG_ADDRESS (0x254)
#define HAL_LL_ADC1_CH2RESH_REG_ADDRESS (0x255)
#define HAL_LL_ADC1_CH2RES_REG_ADDRESS (0x254)
#define HAL_LL_ADC1_CH3RESL_REG_ADDRESS (0x256)
#define HAL_LL_ADC1_CH3RESH_REG_ADDRESS (0x257)
#define HAL_LL_ADC1_CH3RES_REG_ADDRESS (0x256)
#define HAL_LL_ADC1_CH0CTRL_REG_ADDRESS (0x260)
#define HAL_LL_ADC1_CH0MUXCTRL_REG_ADDRESS (0x261)
#define HAL_LL_ADC1_CH0INTCTRL_REG_ADDRESS (0x262)
#define HAL_LL_ADC1_CH0INTFLAGS_REG_ADDRESS (0x263)
#define HAL_LL_ADC1_CH1CTRL_REG_ADDRESS (0x268)
#define HAL_LL_ADC1_CH1MUXCTRL_REG_ADDRESS (0x269)
#define HAL_LL_ADC1_CH1INTCTRL_REG_ADDRESS (0x26A)
#define HAL_LL_ADC1_CH1INTFLAGS_REG_ADDRESS (0x26B)
#define HAL_LL_ADC1_CH2CTRL_REG_ADDRESS (0x270)
#define HAL_LL_ADC1_CH2MUXCTRL_REG_ADDRESS (0x271)
#define HAL_LL_ADC1_CH2INTCTRL_REG_ADDRESS (0x272)
#define HAL_LL_ADC1_CH2INTFLAGS_REG_ADDRESS (0x273)
#define HAL_LL_ADC1_CH3CTRL_REG_ADDRESS (0x278)
#define HAL_LL_ADC1_CH3MUXCTRL_REG_ADDRESS (0x279)
#define HAL_LL_ADC1_CH3INTCTRL_REG_ADDRESS (0x27A)
#define HAL_LL_ADC1_CH3INTFLAGS_REG_ADDRESS (0x27B)
// EOF ADC Register addresses and offsets
// EOF ADC

// I2C
#define TWIC_SCL_PC1
#define TWIC_SDA_PC0
#define TWIE_SCL_PE1
#define TWIE_SDA_PE0

#define TWI_MODULE_C (1)
#define I2C_MODULE_0 (TWI_MODULE_C)
#define TWI_MODULE_E (2)
#define I2C_MODULE_1 (TWI_MODULE_E)
#define TWI_MODULE_COUNT (2)
#define I2C_MODULE_COUNT (TWI_MODULE_COUNT)

// I2C Register addresses and offsets
#define HAL_LL_TWIC_CTRL_REG_ADDRESS (0x480)
#define HAL_LL_I2C0_BASE_ADDRESS (HAL_LL_TWIC_CTRL_REG_ADDRESS)
#define HAL_LL_TWIC_MASTERCTRLA_REG_ADDRESS (0x481)
#define HAL_LL_TWIC_MASTERCTRLB_REG_ADDRESS (0x482)
#define HAL_LL_TWIC_MASTERCTRLC_REG_ADDRESS (0x483)
#define HAL_LL_TWIC_MASTERSTATUS_REG_ADDRESS (0x484)
#define HAL_LL_TWIC_MASTERBAUD_REG_ADDRESS (0x485)
#define HAL_LL_TWIC_MASTERADDR_REG_ADDRESS (0x486)
#define HAL_LL_TWIC_MASTERDATA_REG_ADDRESS (0x487)
#define HAL_LL_TWIC_SLAVECTRLA_REG_ADDRESS (0x488)
#define HAL_LL_TWIC_SLAVECTRLB_REG_ADDRESS (0x489)
#define HAL_LL_TWIC_SLAVESTATUS_REG_ADDRESS (0x48A)
#define HAL_LL_TWIC_SLAVEADDR_REG_ADDRESS (0x48B)
#define HAL_LL_TWIC_SLAVEDATA_REG_ADDRESS (0x48C)
#define HAL_LL_TWIC_SLAVEADDRMASK_REG_ADDRESS (0x48D)
#define HAL_LL_TWIE_CTRL_REG_ADDRESS (0x4A0)
#define HAL_LL_I2C2_BASE_ADDRESS (HAL_LL_TWIE_CTRL_REG_ADDRESS)
#define HAL_LL_TWIE_MASTERCTRLA_REG_ADDRESS (0x4A1)
#define HAL_LL_TWIE_MASTERCTRLB_REG_ADDRESS (0x4A2)
#define HAL_LL_TWIE_MASTERCTRLC_REG_ADDRESS (0x4A3)
#define HAL_LL_TWIE_MASTERSTATUS_REG_ADDRESS (0x4A4)
#define HAL_LL_TWIE_MASTERBAUD_REG_ADDRESS (0x4A5)
#define HAL_LL_TWIE_MASTERADDR_REG_ADDRESS (0x4A6)
#define HAL_LL_TWIE_MASTERDATA_REG_ADDRESS (0x4A7)
#define HAL_LL_TWIE_SLAVECTRLA_REG_ADDRESS (0x4A8)
#define HAL_LL_TWIE_SLAVECTRLB_REG_ADDRESS (0x4A9)
#define HAL_LL_TWIE_SLAVESTATUS_REG_ADDRESS (0x4AA)
#define HAL_LL_TWIE_SLAVEADDR_REG_ADDRESS (0x4AB)
#define HAL_LL_TWIE_SLAVEDATA_REG_ADDRESS (0x4AC)
#define HAL_LL_TWIE_SLAVEADDRMASK_REG_ADDRESS (0x4AD)
// EOF I2C Register addresses and offsets
// EOF I2C

// U(S)ART
#define USARTC0_RXD_PC2
#define USARTC0_TXD_PC3
#define USARTC1_RXD_PC6
#define USARTC1_TXD_PC7
#define USARTD0_RXD_PD2
#define USARTD0_TXD_PD3
#define USARTD1_RXD_PD6
#define USARTD1_TXD_PD7
#define USARTE0_RXD_PE2
#define USARTE0_TXD_PE3
#define USARTF0_RXD_PF2
#define USARTF0_TXD_PF3

#define UART_MODULE_C0 (1)
#define UART_MODULE_0 (UART_MODULE_C0)
#define UART_MODULE_C1 (2)
#define UART_MODULE_1 (UART_MODULE_C1)
#define UART_MODULE_D0 (3)
#define UART_MODULE_2 (UART_MODULE_D0)
#define UART_MODULE_D1 (4)
#define UART_MODULE_3 (UART_MODULE_D1)
#define UART_MODULE_E0 (5)
#define UART_MODULE_4 (UART_MODULE_E0)
#define UART_MODULE_F0 (6)
#define UART_MODULE_5 (UART_MODULE_F0)
#define UART_MODULE_COUNT (6)

// U(S)ART Register addresses and offsets
#define HAL_LL_USARTC0_DATA_REG_ADDRESS (0x8A0)
#define HAL_LL_USARTC0_STATUS_REG_ADDRESS (0x8A1)
#define HAL_LL_USARTC0_CTRLA_REG_ADDRESS (0x8A3)
#define HAL_LL_USARTC0_CTRLB_REG_ADDRESS (0x8A4)
#define HAL_LL_USARTC0_CTRLC_REG_ADDRESS (0x8A5)
#define HAL_LL_USARTC0_BAUDCTRLA_REG_ADDRESS (0x8A6)
#define HAL_LL_USARTC0_BAUDCTRLB_REG_ADDRESS (0x8A7)
#define HAL_LL_USARTC1_DATA_REG_ADDRESS (0x8B0)
#define HAL_LL_USARTC1_STATUS_REG_ADDRESS (0x8B1)
#define HAL_LL_USARTC1_CTRLA_REG_ADDRESS (0x8B3)
#define HAL_LL_USARTC1_CTRLB_REG_ADDRESS (0x8B4)
#define HAL_LL_USARTC1_CTRLC_REG_ADDRESS (0x8B5)
#define HAL_LL_USARTC1_BAUDCTRLA_REG_ADDRESS (0x8B6)
#define HAL_LL_USARTC1_BAUDCTRLB_REG_ADDRESS (0x8B7)
#define HAL_LL_USARTD0_DATA_REG_ADDRESS (0x9A0)
#define HAL_LL_USARTD0_STATUS_REG_ADDRESS (0x9A1)
#define HAL_LL_USARTD0_CTRLA_REG_ADDRESS (0x9A3)
#define HAL_LL_USARTD0_CTRLB_REG_ADDRESS (0x9A4)
#define HAL_LL_USARTD0_CTRLC_REG_ADDRESS (0x9A5)
#define HAL_LL_USARTD0_BAUDCTRLA_REG_ADDRESS (0x9A6)
#define HAL_LL_USARTD0_BAUDCTRLB_REG_ADDRESS (0x9A7)
#define HAL_LL_USARTD1_DATA_REG_ADDRESS (0x9B0)
#define HAL_LL_USARTD1_STATUS_REG_ADDRESS (0x9B1)
#define HAL_LL_USARTD1_CTRLA_REG_ADDRESS (0x9B3)
#define HAL_LL_USARTD1_CTRLB_REG_ADDRESS (0x9B4)
#define HAL_LL_USARTD1_CTRLC_REG_ADDRESS (0x9B5)
#define HAL_LL_USARTD1_BAUDCTRLA_REG_ADDRESS (0x9B6)
#define HAL_LL_USARTD1_BAUDCTRLB_REG_ADDRESS (0x9B7)
#define HAL_LL_USARTE0_DATA_REG_ADDRESS (0xAA0)
#define HAL_LL_USARTE0_STATUS_REG_ADDRESS (0xAA1)
#define HAL_LL_USARTE0_CTRLA_REG_ADDRESS (0xAA3)
#define HAL_LL_USARTE0_CTRLB_REG_ADDRESS (0xAA4)
#define HAL_LL_USARTE0_CTRLC_REG_ADDRESS (0xAA5)
#define HAL_LL_USARTE0_BAUDCTRLA_REG_ADDRESS (0xAA6)
#define HAL_LL_USARTE0_BAUDCTRLB_REG_ADDRESS (0xAA7)
#define HAL_LL_USARTF0_DATA_REG_ADDRESS (0xBA0)
#define HAL_LL_USARTF0_STATUS_REG_ADDRESS (0xBA1)
#define HAL_LL_USARTF0_CTRLA_REG_ADDRESS (0xBA3)
#define HAL_LL_USARTF0_CTRLB_REG_ADDRESS (0xBA4)
#define HAL_LL_USARTF0_CTRLC_REG_ADDRESS (0xBA5)
#define HAL_LL_USARTF0_BAUDCTRLA_REG_ADDRESS (0xBA6)
#define HAL_LL_USARTF0_BAUDCTRLB_REG_ADDRESS (0xBA7)
// EOF U(S)ART Register addresses and offsets
// EOF U(S)ART

// SPI
#define SPI0_SS_PC4
#define SPI0_MOSI_PC5
#define SPI0_MISO_PC6
#define SPI0_SCK_PC7
#define SPI1_SS_PD4
#define SPI1_MOSI_PD5
#define SPI1_MISO_PD6
#define SPI1_SCK_PD7
#define SPI2_SS_PE4
#define SPI2_MOSI_PE5
#define SPI2_MISO_PE6
#define SPI2_SCK_PE7

#define SPI_MODULE_0 (1)
#define SPI_MODULE_1 (2)
#define SPI_MODULE_2 (3)
#define SPI_MODULE_COUNT (3)

// SPI Register addresses and offsets
#define HAL_LL_SPI0_CTRL_REG_ADDRESS (0x08C0)
#define HAL_LL_SPI0_INTCTRL_REG_ADDRESS (0x08C1)
#define HAL_LL_SPI0_STATUS_REG_ADDRESS (0x08C2)
#define HAL_LL_SPI0_DATA_REG_ADDRESS (0x08C3)

#define HAL_LL_SPI1_CTRL_REG_ADDRESS (0x09C0)
#define HAL_LL_SPI1_INTCTRL_REG_ADDRESS (0x09C1)
#define HAL_LL_SPI1_STATUS_REG_ADDRESS (0x09C2)
#define HAL_LL_SPI1_DATA_REG_ADDRESS (0x09C3)

#define HAL_LL_SPI2_CTRL_REG_ADDRESS (0x0AC0)
#define HAL_LL_SPI2_INTCTRL_REG_ADDRESS (0x0AC1)
#define HAL_LL_SPI2_STATUS_REG_ADDRESS (0x0AC2)
#define HAL_LL_SPI2_DATA_REG_ADDRESS (0x0AC3)
// EOF SPI Register addresses and offsets
// EOF SPI

// TIM
// TCC0 (Timer/Counter0 on PORTC)
#define TIM0_PC0_CH_A
#define TIM0_PC1_CH_B
#define TIM0_PC2_CH_C
#define TIM0_PC3_CH_D
// TCD0 (Timer/Counter0 on PORTD)
#define TIM1_PD0_CH_A
#define TIM1_PD1_CH_B
#define TIM1_PD2_CH_C
#define TIM1_PD3_CH_D
// TCE0 (Timer/Counter0 on PORTE)
#define TIM2_PE0_CH_A
#define TIM2_PE1_CH_B
#define TIM2_PE2_CH_C
#define TIM2_PE3_CH_D
// TCF0 (Timer/Counter0 on PORTF)
#define TIM3_PF0_CH_A
#define TIM3_PF1_CH_B
#define TIM3_PF2_CH_C
#define TIM3_PF3_CH_D
// TCC1 (Timer/Counter1 on PORTC)
#define TIM4_PC4_CH_A
#define TIM4_PC5_CH_B
// TCD1 (Timer/Counter1 on PORTD)
#define TIM5_PD4_CH_A
#define TIM5_PD5_CH_B
// TCE1 (Timer/Counter1 on PORTE)
#define TIM6_PE4_CH_A
#define TIM6_PE5_CH_B

#define TIM_MODULE_0 (1)
#define TIM_MODULE_1 (2)
#define TIM_MODULE_2 (3)
#define TIM_MODULE_3 (4)
#define TIM_MODULE_4 (5)
#define TIM_MODULE_5 (6)
#define TIM_MODULE_6 (7)

#define TIM_MODULE_COUNT (7)

// TIM Register addresses and offsets
#define HAL_LL_TIM0_CTRLA_REG_ADDRESS (0x0800)
#define HAL_LL_TIM0_CTRLB_REG_ADDRESS (0x0801)
#define HAL_LL_TIM0_CTRLC_REG_ADDRESS (0x0802)
#define HAL_LL_TIM0_CTRLD_REG_ADDRESS (0x0803)
#define HAL_LL_TIM0_CTRLE_REG_ADDRESS (0x0804)
#define HAL_LL_TIM0_INTCTRLA_REG_ADDRESS (0x0806)
#define HAL_LL_TIM0_INTCTRLB_REG_ADDRESS (0x0807)
#define HAL_LL_TIM0_CTRLFCLR_REG_ADDRESS (0x0808)
#define HAL_LL_TIM0_CTRLFSET_REG_ADDRESS (0x0809)
#define HAL_LL_TIM0_CTRLGCLR_REG_ADDRESS (0x080A)
#define HAL_LL_TIM0_CTRLGSET_REG_ADDRESS (0x080B)
#define HAL_LL_TIM0_INTFLAGS_REG_ADDRESS (0x080C)
#define HAL_LL_TIM0_TEMP_REG_ADDRESS (0x080F)
#define HAL_LL_TIM0_CNTL_REG_ADDRESS (0x0820)
#define HAL_LL_TIM0_CNTH_REG_ADDRESS (0x0821)
#define HAL_LL_TIM0_PERL_REG_ADDRESS (0x0826)
#define HAL_LL_TIM0_PERH_REG_ADDRESS (0x0827)
#define HAL_LL_TIM0_CCAL_REG_ADDRESS (0x0828)
#define HAL_LL_TIM0_CCAH_REG_ADDRESS (0x0829)
#define HAL_LL_TIM0_CCBL_REG_ADDRESS (0x082A)
#define HAL_LL_TIM0_CCBH_REG_ADDRESS (0x082B)
#define HAL_LL_TIM0_CCCL_REG_ADDRESS (0x082C)
#define HAL_LL_TIM0_CCCH_REG_ADDRESS (0x082D)
#define HAL_LL_TIM0_CCDL_REG_ADDRESS (0x082E)
#define HAL_LL_TIM0_CCDH_REG_ADDRESS (0x082F)
#define HAL_LL_TIM0_PERBUFL_REG_ADDRESS (0x0836)
#define HAL_LL_TIM0_PERBUFH_REG_ADDRESS (0x0837)
#define HAL_LL_TIM0_CCABUF_REG_ADDRESS (0x0838)
#define HAL_LL_TIM0_CCABUFL_REG_ADDRESS (0x0838)
#define HAL_LL_TIM0_CCABUFH_REG_ADDRESS (0x0839)
#define HAL_LL_TIM0_CCBBUF_REG_ADDRESS (0x083A)
#define HAL_LL_TIM0_CCBBUFL_REG_ADDRESS (0x083A)
#define HAL_LL_TIM0_CCBBUFH_REG_ADDRESS (0x083B)
#define HAL_LL_TIM0_CCCBUF_REG_ADDRESS (0x083C)
#define HAL_LL_TIM0_CCCBUFL_REG_ADDRESS (0x083C)
#define HAL_LL_TIM0_CCCBUFH_REG_ADDRESS (0x083D)
#define HAL_LL_TIM0_CCDBUF_REG_ADDRESS (0x083E)
#define HAL_LL_TIM0_CCDBUFL_REG_ADDRESS (0x083E)
#define HAL_LL_TIM0_CCDBUFH_REG_ADDRESS (0x083F)
#define HAL_LL_TIM1_CTRLA_REG_ADDRESS (0x0900)
#define HAL_LL_TIM1_CTRLB_REG_ADDRESS (0x0901)
#define HAL_LL_TIM1_CTRLC_REG_ADDRESS (0x0902)
#define HAL_LL_TIM1_CTRLD_REG_ADDRESS (0x0903)
#define HAL_LL_TIM1_CTRLE_REG_ADDRESS (0x0904)
#define HAL_LL_TIM1_INTCTRLA_REG_ADDRESS (0x0906)
#define HAL_LL_TIM1_INTCTRLB_REG_ADDRESS (0x0907)
#define HAL_LL_TIM1_CTRLFCLR_REG_ADDRESS (0x0908)
#define HAL_LL_TIM1_CTRLFSET_REG_ADDRESS (0x0909)
#define HAL_LL_TIM1_CTRLGCLR_REG_ADDRESS (0x090A)
#define HAL_LL_TIM1_CTRLGSET_REG_ADDRESS (0x090B)
#define HAL_LL_TIM1_INTFLAGS_REG_ADDRESS (0x090C)
#define HAL_LL_TIM1_TEMP_REG_ADDRESS (0x090F)
#define HAL_LL_TIM1_CNTL_REG_ADDRESS (0x0920)
#define HAL_LL_TIM1_CNTH_REG_ADDRESS (0x0921)
#define HAL_LL_TIM1_PERL_REG_ADDRESS (0x0926)
#define HAL_LL_TIM1_PERH_REG_ADDRESS (0x0927)
#define HAL_LL_TIM1_CCAL_REG_ADDRESS (0x0928)
#define HAL_LL_TIM1_CCAH_REG_ADDRESS (0x0929)
#define HAL_LL_TIM1_CCBL_REG_ADDRESS (0x092A)
#define HAL_LL_TIM1_CCBH_REG_ADDRESS (0x092B)
#define HAL_LL_TIM1_CCCL_REG_ADDRESS (0x092C)
#define HAL_LL_TIM1_CCCH_REG_ADDRESS (0x092D)
#define HAL_LL_TIM1_CCDL_REG_ADDRESS (0x092E)
#define HAL_LL_TIM1_CCDH_REG_ADDRESS (0x092F)
#define HAL_LL_TIM1_PERBUFL_REG_ADDRESS (0x0936)
#define HAL_LL_TIM1_PERBUFH_REG_ADDRESS (0x0937)
#define HAL_LL_TIM1_CCABUF_REG_ADDRESS (0x0938)
#define HAL_LL_TIM1_CCABUFL_REG_ADDRESS (0x0938)
#define HAL_LL_TIM1_CCABUFH_REG_ADDRESS (0x0939)
#define HAL_LL_TIM1_CCBBUF_REG_ADDRESS (0x093A)
#define HAL_LL_TIM1_CCBBUFL_REG_ADDRESS (0x093A)
#define HAL_LL_TIM1_CCBBUFH_REG_ADDRESS (0x093B)
#define HAL_LL_TIM1_CCCBUF_REG_ADDRESS (0x093C)
#define HAL_LL_TIM1_CCCBUFL_REG_ADDRESS (0x093C)
#define HAL_LL_TIM1_CCCBUFH_REG_ADDRESS (0x093D)
#define HAL_LL_TIM1_CCDBUF_REG_ADDRESS (0x093E)
#define HAL_LL_TIM1_CCDBUFL_REG_ADDRESS (0x093E)
#define HAL_LL_TIM1_CCDBUFH_REG_ADDRESS (0x093F)
#define HAL_LL_TIM2_CTRLA_REG_ADDRESS (0x0A00)
#define HAL_LL_TIM2_CTRLB_REG_ADDRESS (0x0A01)
#define HAL_LL_TIM2_CTRLC_REG_ADDRESS (0x0A02)
#define HAL_LL_TIM2_CTRLD_REG_ADDRESS (0x0A03)
#define HAL_LL_TIM2_CTRLE_REG_ADDRESS (0x0A04)
#define HAL_LL_TIM2_INTCTRLA_REG_ADDRESS (0x0A06)
#define HAL_LL_TIM2_INTCTRLB_REG_ADDRESS (0x0A07)
#define HAL_LL_TIM2_CTRLFCLR_REG_ADDRESS (0x0A08)
#define HAL_LL_TIM2_CTRLFSET_REG_ADDRESS (0x0A09)
#define HAL_LL_TIM2_CTRLGCLR_REG_ADDRESS (0x0A0A)
#define HAL_LL_TIM2_CTRLGSET_REG_ADDRESS (0x0A0B)
#define HAL_LL_TIM2_INTFLAGS_REG_ADDRESS (0x0A0C)
#define HAL_LL_TIM2_TEMP_REG_ADDRESS (0x0A0F)
#define HAL_LL_TIM2_CNTL_REG_ADDRESS (0x0A20)
#define HAL_LL_TIM2_CNTH_REG_ADDRESS (0x0A21)
#define HAL_LL_TIM2_PERL_REG_ADDRESS (0x0A26)
#define HAL_LL_TIM2_PERH_REG_ADDRESS (0x0A27)
#define HAL_LL_TIM2_CCAL_REG_ADDRESS (0x0A28)
#define HAL_LL_TIM2_CCAH_REG_ADDRESS (0x0A29)
#define HAL_LL_TIM2_CCBL_REG_ADDRESS (0x0A2A)
#define HAL_LL_TIM2_CCBH_REG_ADDRESS (0x0A2B)
#define HAL_LL_TIM2_CCCL_REG_ADDRESS (0x0A2C)
#define HAL_LL_TIM2_CCCH_REG_ADDRESS (0x0A2D)
#define HAL_LL_TIM2_CCDL_REG_ADDRESS (0x0A2E)
#define HAL_LL_TIM2_CCDH_REG_ADDRESS (0x0A2F)
#define HAL_LL_TIM2_PERBUFL_REG_ADDRESS (0x0A36)
#define HAL_LL_TIM2_PERBUFH_REG_ADDRESS (0x0A37)
#define HAL_LL_TIM2_CCABUF_REG_ADDRESS (0x0A38)
#define HAL_LL_TIM2_CCABUFL_REG_ADDRESS (0x0A38)
#define HAL_LL_TIM2_CCABUFH_REG_ADDRESS (0x0A39)
#define HAL_LL_TIM2_CCBBUF_REG_ADDRESS (0x0A3A)
#define HAL_LL_TIM2_CCBBUFL_REG_ADDRESS (0x0A3A)
#define HAL_LL_TIM2_CCBBUFH_REG_ADDRESS (0x0A3B)
#define HAL_LL_TIM2_CCCBUF_REG_ADDRESS (0x0A3C)
#define HAL_LL_TIM2_CCCBUFL_REG_ADDRESS (0x0A3C)
#define HAL_LL_TIM2_CCCBUFH_REG_ADDRESS (0x0A3D)
#define HAL_LL_TIM2_CCDBUF_REG_ADDRESS (0x0A3E)
#define HAL_LL_TIM2_CCDBUFL_REG_ADDRESS (0x0A3E)
#define HAL_LL_TIM2_CCDBUFH_REG_ADDRESS (0x0A3F)
#define HAL_LL_TIM3_CTRLA_REG_ADDRESS (0x0B00)
#define HAL_LL_TIM3_CTRLB_REG_ADDRESS (0x0B01)
#define HAL_LL_TIM3_CTRLC_REG_ADDRESS (0x0B02)
#define HAL_LL_TIM3_CTRLD_REG_ADDRESS (0x0B03)
#define HAL_LL_TIM3_CTRLE_REG_ADDRESS (0x0B04)
#define HAL_LL_TIM3_INTCTRLA_REG_ADDRESS (0x0B06)
#define HAL_LL_TIM3_INTCTRLB_REG_ADDRESS (0x0B07)
#define HAL_LL_TIM3_CTRLFCLR_REG_ADDRESS (0x0B08)
#define HAL_LL_TIM3_CTRLFSET_REG_ADDRESS (0x0B09)
#define HAL_LL_TIM3_CTRLGCLR_REG_ADDRESS (0x0B0A)
#define HAL_LL_TIM3_CTRLGSET_REG_ADDRESS (0x0B0B)
#define HAL_LL_TIM3_INTFLAGS_REG_ADDRESS (0x0B0C)
#define HAL_LL_TIM3_TEMP_REG_ADDRESS (0x0B0F)
#define HAL_LL_TIM3_CNTL_REG_ADDRESS (0x0B20)
#define HAL_LL_TIM3_CNTH_REG_ADDRESS (0x0B21)
#define HAL_LL_TIM3_PERL_REG_ADDRESS (0x0B26)
#define HAL_LL_TIM3_PERH_REG_ADDRESS (0x0B27)
#define HAL_LL_TIM3_CCAL_REG_ADDRESS (0x0B28)
#define HAL_LL_TIM3_CCAH_REG_ADDRESS (0x0B29)
#define HAL_LL_TIM3_CCBL_REG_ADDRESS (0x0B2A)
#define HAL_LL_TIM3_CCBH_REG_ADDRESS (0x0B2B)
#define HAL_LL_TIM3_CCCL_REG_ADDRESS (0x0B2C)
#define HAL_LL_TIM3_CCCH_REG_ADDRESS (0x0B2D)
#define HAL_LL_TIM3_CCDL_REG_ADDRESS (0x0B2E)
#define HAL_LL_TIM3_CCDH_REG_ADDRESS (0x0B2F)
#define HAL_LL_TIM3_PERBUFL_REG_ADDRESS (0x0B36)
#define HAL_LL_TIM3_PERBUFH_REG_ADDRESS (0x0B37)
#define HAL_LL_TIM3_CCABUF_REG_ADDRESS (0x0B38)
#define HAL_LL_TIM3_CCABUFL_REG_ADDRESS (0x0B38)
#define HAL_LL_TIM3_CCABUFH_REG_ADDRESS (0x0B39)
#define HAL_LL_TIM3_CCBBUF_REG_ADDRESS (0x0B3A)
#define HAL_LL_TIM3_CCBBUFL_REG_ADDRESS (0x0B3A)
#define HAL_LL_TIM3_CCBBUFH_REG_ADDRESS (0x0B3B)
#define HAL_LL_TIM3_CCCBUF_REG_ADDRESS (0x0B3C)
#define HAL_LL_TIM3_CCCBUFL_REG_ADDRESS (0x0B3C)
#define HAL_LL_TIM3_CCCBUFH_REG_ADDRESS (0x0B3D)
#define HAL_LL_TIM3_CCDBUF_REG_ADDRESS (0x0B3E)
#define HAL_LL_TIM3_CCDBUFL_REG_ADDRESS (0x0B3E)
#define HAL_LL_TIM3_CCDBUFH_REG_ADDRESS (0x0B3F)
#define HAL_LL_TIM4_CTRLA_REG_ADDRESS (0x0840)
#define HAL_LL_TIM4_CTRLB_REG_ADDRESS (0x0841)
#define HAL_LL_TIM4_CTRLC_REG_ADDRESS (0x0842)
#define HAL_LL_TIM4_CTRLD_REG_ADDRESS (0x0843)
#define HAL_LL_TIM4_CTRLE_REG_ADDRESS (0x0844)
#define HAL_LL_TIM4_INTCTRLA_REG_ADDRESS (0x0846)
#define HAL_LL_TIM4_INTCTRLB_REG_ADDRESS (0x0847)
#define HAL_LL_TIM4_CTRLFCLR_REG_ADDRESS (0x0848)
#define HAL_LL_TIM4_CTRLFSET_REG_ADDRESS (0x0849)
#define HAL_LL_TIM4_CTRLGCLR_REG_ADDRESS (0x084A)
#define HAL_LL_TIM4_CTRLGSET_REG_ADDRESS (0x084B)
#define HAL_LL_TIM4_INTFLAGS_REG_ADDRESS (0x084C)
#define HAL_LL_TIM4_TEMP_REG_ADDRESS (0x084F)
#define HAL_LL_TIM4_CNTL_REG_ADDRESS (0x0840)
#define HAL_LL_TIM4_CNTH_REG_ADDRESS (0x0841)
#define HAL_LL_TIM4_PERL_REG_ADDRESS (0x0846)
#define HAL_LL_TIM4_PERH_REG_ADDRESS (0x0847)
#define HAL_LL_TIM4_CCAL_REG_ADDRESS (0x0848)
#define HAL_LL_TIM4_CCAH_REG_ADDRESS (0x0849)
#define HAL_LL_TIM4_CCBL_REG_ADDRESS (0x084A)
#define HAL_LL_TIM4_CCBH_REG_ADDRESS (0x084B)
#define HAL_LL_TIM4_PERBUFL_REG_ADDRESS (0x0866)
#define HAL_LL_TIM4_PERBUFH_REG_ADDRESS (0x0867)
#define HAL_LL_TIM4_CCABUF_REG_ADDRESS (0x0868)
#define HAL_LL_TIM4_CCABUFL_REG_ADDRESS (0x0868)
#define HAL_LL_TIM4_CCABUFH_REG_ADDRESS (0x0869)
#define HAL_LL_TIM4_CCBBUF_REG_ADDRESS (0x086A)
#define HAL_LL_TIM4_CCBBUFL_REG_ADDRESS (0x086A)
#define HAL_LL_TIM4_CCBBUFH_REG_ADDRESS (0x086B)
#define HAL_LL_TIM5_CTRLA_REG_ADDRESS (0x0940)
#define HAL_LL_TIM5_CTRLB_REG_ADDRESS (0x0941)
#define HAL_LL_TIM5_CTRLC_REG_ADDRESS (0x0942)
#define HAL_LL_TIM5_CTRLD_REG_ADDRESS (0x0943)
#define HAL_LL_TIM5_CTRLE_REG_ADDRESS (0x0944)
#define HAL_LL_TIM5_INTCTRLA_REG_ADDRESS (0x0946)
#define HAL_LL_TIM5_INTCTRLB_REG_ADDRESS (0x0947)
#define HAL_LL_TIM5_CTRLFCLR_REG_ADDRESS (0x0948)
#define HAL_LL_TIM5_CTRLFSET_REG_ADDRESS (0x0949)
#define HAL_LL_TIM5_CTRLGCLR_REG_ADDRESS (0x094A)
#define HAL_LL_TIM5_CTRLGSET_REG_ADDRESS (0x094B)
#define HAL_LL_TIM5_INTFLAGS_REG_ADDRESS (0x094C)
#define HAL_LL_TIM5_TEMP_REG_ADDRESS (0x094F)
#define HAL_LL_TIM5_CNTL_REG_ADDRESS (0x0960)
#define HAL_LL_TIM5_CNTH_REG_ADDRESS (0x0961)
#define HAL_LL_TIM5_PERL_REG_ADDRESS (0x0966)
#define HAL_LL_TIM5_PERH_REG_ADDRESS (0x0967)
#define HAL_LL_TIM5_CCAL_REG_ADDRESS (0x0968)
#define HAL_LL_TIM5_CCAH_REG_ADDRESS (0x0969)
#define HAL_LL_TIM5_CCBL_REG_ADDRESS (0x096A)
#define HAL_LL_TIM5_CCBH_REG_ADDRESS (0x096B)
#define HAL_LL_TIM5_PERBUFL_REG_ADDRESS (0x0966)
#define HAL_LL_TIM5_PERBUFH_REG_ADDRESS (0x0967)
#define HAL_LL_TIM5_CCABUF_REG_ADDRESS (0x0968)
#define HAL_LL_TIM5_CCABUFL_REG_ADDRESS (0x0968)
#define HAL_LL_TIM5_CCABUFH_REG_ADDRESS (0x0969)
#define HAL_LL_TIM5_CCBBUF_REG_ADDRESS (0x096A)
#define HAL_LL_TIM5_CCBBUFL_REG_ADDRESS (0x096A)
#define HAL_LL_TIM5_CCBBUFH_REG_ADDRESS (0x096B)
#define HAL_LL_TIM6_CTRLA_REG_ADDRESS (0x0A40)
#define HAL_LL_TIM6_CTRLB_REG_ADDRESS (0x0A41)
#define HAL_LL_TIM6_CTRLC_REG_ADDRESS (0x0A42)
#define HAL_LL_TIM6_CTRLD_REG_ADDRESS (0x0A43)
#define HAL_LL_TIM6_CTRLE_REG_ADDRESS (0x0A44)
#define HAL_LL_TIM6_INTCTRLA_REG_ADDRESS (0x0A46)
#define HAL_LL_TIM6_INTCTRLB_REG_ADDRESS (0x0A47)
#define HAL_LL_TIM6_CTRLFCLR_REG_ADDRESS (0x0A48)
#define HAL_LL_TIM6_CTRLFSET_REG_ADDRESS (0x0A49)
#define HAL_LL_TIM6_CTRLGCLR_REG_ADDRESS (0x0A4A)
#define HAL_LL_TIM6_CTRLGSET_REG_ADDRESS (0x0A4B)
#define HAL_LL_TIM6_INTFLAGS_REG_ADDRESS (0x0A4C)
#define HAL_LL_TIM6_TEMP_REG_ADDRESS (0x0A4F)
#define HAL_LL_TIM6_CNTL_REG_ADDRESS (0x0A60)
#define HAL_LL_TIM6_CNTH_REG_ADDRESS (0x0A61)
#define HAL_LL_TIM6_PERL_REG_ADDRESS (0x0A66)
#define HAL_LL_TIM6_PERH_REG_ADDRESS (0x0A67)
#define HAL_LL_TIM6_CCAL_REG_ADDRESS (0x0A68)
#define HAL_LL_TIM6_CCAH_REG_ADDRESS (0x0A69)
#define HAL_LL_TIM6_CCBL_REG_ADDRESS (0x0A6A)
#define HAL_LL_TIM6_CCBH_REG_ADDRESS (0x0A6B)
#define HAL_LL_TIM6_PERBUFL_REG_ADDRESS (0x0A66)
#define HAL_LL_TIM6_PERBUFH_REG_ADDRESS (0x0A67)
#define HAL_LL_TIM6_CCABUF_REG_ADDRESS (0x0A68)
#define HAL_LL_TIM6_CCABUFL_REG_ADDRESS (0x0A68)
#define HAL_LL_TIM6_CCABUFH_REG_ADDRESS (0x0A69)
#define HAL_LL_TIM6_CCBBUF_REG_ADDRESS (0x0A6A)
#define HAL_LL_TIM6_CCBBUFL_REG_ADDRESS (0x0A6A)
#define HAL_LL_TIM6_CCBBUFH_REG_ADDRESS (0x0A6B)
// Following registers don't exist, but defined as NULL for source code implementation
#define HAL_LL_TIM4_CCCBUF_REG_ADDRESS (NULL)
#define HAL_LL_TIM4_CCDBUF_REG_ADDRESS (NULL)
#define HAL_LL_TIM5_CCCBUF_REG_ADDRESS (NULL)
#define HAL_LL_TIM5_CCDBUF_REG_ADDRESS (NULL)
#define HAL_LL_TIM6_CCCBUF_REG_ADDRESS (NULL)
#define HAL_LL_TIM6_CCDBUF_REG_ADDRESS (NULL)
// EOF TIM Register addresses and offsets
// EOF TIM

// GPIO
#define __PA0_CN
#define __PA1_CN
#define __PA2_CN
#define __PA3_CN
#define __PA4_CN
#define __PA5_CN
#define __PA6_CN
#define __PA7_CN
#define __PB0_CN
#define __PB1_CN
#define __PB2_CN
#define __PB3_CN
#define __PB4_CN
#define __PB5_CN
#define __PB6_CN
#define __PB7_CN
#define __PC0_CN
#define __PC1_CN
#define __PC2_CN
#define __PC3_CN
#define __PC4_CN
#define __PC5_CN
#define __PC6_CN
#define __PC7_CN
#define __PD0_CN
#define __PD1_CN
#define __PD2_CN
#define __PD3_CN
#define __PD4_CN
#define __PD5_CN
#define __PD6_CN
#define __PD7_CN
#define __PE0_CN
#define __PE1_CN
#define __PE2_CN
#define __PE3_CN
#define __PE4_CN
#define __PE5_CN
#define __PE6_CN
#define __PE7_CN
#define __PF0_CN
#define __PF1_CN
#define __PF2_CN
#define __PF3_CN
#define __PF4_CN
#define __PF5_CN
#define __PF6_CN
#define __PF7_CN

#define __PORT_A_CN
#define __PORT_B_CN
#define __PORT_C_CN
#define __PORT_D_CN
#define __PORT_E_CN
#define __PORT_F_CN

#define PORT_SIZE  (8)
#define PORT_COUNT (6)

// GPIO Register addresses and offsets
#define DDRA_REG_ADDRESS (0x600)
#define PORTA_REG_ADDRESS (0x604)
#define PINA_REG_ADDRESS (0x608)
#define DDRB_REG_ADDRESS (0x620)
#define PORTB_REG_ADDRESS (0x624)
#define PINB_REG_ADDRESS (0x628)
#define DDRC_REG_ADDRESS (0x640)
#define PORTC_REG_ADDRESS (0x644)
#define PINC_REG_ADDRESS (0x648)
#define DDRD_REG_ADDRESS (0x660)
#define PORTD_REG_ADDRESS (0x664)
#define PIND_REG_ADDRESS (0x668)
#define DDRE_REG_ADDRESS (0x680)
#define PORTE_REG_ADDRESS (0x684)
#define PINE_REG_ADDRESS (0x688)
#define DDRF_REG_ADDRESS (0x6A0)
#define PORTF_REG_ADDRESS (0x6A4)
#define PINF_REG_ADDRESS (0x6A8)
#define DDRR_REG_ADDRESS (0x7E0)
#define PORTR_REG_ADDRESS (0x7E4)
#define PINR_REG_ADDRESS (0x7E8)
// REMAP Register addresses
#define HAL_LL_MODULE_REMAP (false)
// EOF GPIO Register addresses and offsets
// EOF GPIO

// POWER REDUCTION REGISTER
#define HAL_LL_PRPA_REG_ADDRESS (0x71)
#define HAL_LL_PRPB_REG_ADDRESS (0x72)
#define HAL_LL_PRPC_REG_ADDRESS (0x73)
#define HAL_LL_PRPD_REG_ADDRESS (0x74)
#define HAL_LL_PRPE_REG_ADDRESS (0x75)
#define HAL_LL_PRPF_REG_ADDRESS (0x76)
#define HAL_LL_POWER_REDUCTION (true)
// EOF POWER REDUCTION REGISTER

// IVT
#define HAL_LL_USARTC0_RXC_IVT (25)
#define HAL_LL_USARTC0_DRE_IVT (26)
#define HAL_LL_USARTC0_TXC_IVT (27)
#define HAL_LL_USARTC1_RXC_IVT (28)
#define HAL_LL_USARTC1_DRE_IVT (29)
#define HAL_LL_USARTC1_TXC_IVT (30)
#define HAL_LL_USARTE0_RXC_IVT (58)
#define HAL_LL_USARTE0_DRE_IVT (59)
#define HAL_LL_USARTE0_TXC_IVT (60)
#define HAL_LL_USARTD0_RXC_IVT (88)
#define HAL_LL_USARTD0_DRE_IVT (89)
#define HAL_LL_USARTD0_TXC_IVT (90)
#define HAL_LL_USARTD1_RXC_IVT (91)
#define HAL_LL_USARTD1_DRE_IVT (92)
#define HAL_LL_USARTD1_TXC_IVT (93)
#define HAL_LL_USARTF0_RXC_IVT (119)
#define HAL_LL_USARTF0_DRE_IVT (120)
#define HAL_LL_USARTF0_TXC_IVT (121)
// IVT ADDRESSES
#define HAL_LL_USARTC0_RXC_IVT_ADDRESS (0x32)
#define HAL_LL_USARTC0_DRE_IVT_ADDRESS (0x34)
#define HAL_LL_USARTC0_TXC_IVT_ADDRESS (0x36)
#define HAL_LL_USARTC1_RXC_IVT_ADDRESS (0x38)
#define HAL_LL_USARTC1_DRE_IVT_ADDRESS (0x3A)
#define HAL_LL_USARTC1_TXC_IVT_ADDRESS (0x3C)
#define HAL_LL_USARTE0_RXC_IVT_ADDRESS (0x74)
#define HAL_LL_USARTE0_DRE_IVT_ADDRESS (0x76)
#define HAL_LL_USARTE0_TXC_IVT_ADDRESS (0x78)
#define HAL_LL_USARTD0_RXC_IVT_ADDRESS (0xB0)
#define HAL_LL_USARTD0_DRE_IVT_ADDRESS (0xB2)
#define HAL_LL_USARTD0_TXC_IVT_ADDRESS (0xB4)
#define HAL_LL_USARTD1_RXC_IVT_ADDRESS (0xB6)
#define HAL_LL_USARTD1_DRE_IVT_ADDRESS (0xB8)
#define HAL_LL_USARTD1_TXC_IVT_ADDRESS (0xBA)
#define HAL_LL_USARTF0_RXC_IVT_ADDRESS (0xEE)
#define HAL_LL_USARTF0_DRE_IVT_ADDRESS (0xF0)
#define HAL_LL_USARTF0_TXC_IVT_ADDRESS (0xF2)
// Programmable multilevel interrupt controller
#define HAL_LL_PMIC_STATUS_REG_ADDRESS (0xA0)
#define HAL_LL_PMIC_INTPRI_REG_ADDRESS (0xA1)
#define HAL_LL_PMIC_CTRL_REG_ADDRESS (0xA2)
// EOF IVT

#endif // _MCU_DEFINITIONS_H_
// ------------------------------------------------------------------------- END