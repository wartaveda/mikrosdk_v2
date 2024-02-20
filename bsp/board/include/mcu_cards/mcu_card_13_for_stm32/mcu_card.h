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
 * @file  mcu_card.h
 * @brief MCU card connections mapping.
 */

#ifndef _MCU_CARD_H_
#define _MCU_CARD_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_target.h"

// Hardware revision number
#define MCU_CARD_REV_MAJOR (0)
#define MCU_CARD_REV_MINOR (85)

#define NC HAL_PIN_NC

// Left connector
#define LEFT_CN_PIN_001 PA0
#define LEFT_CN_PIN_002 PA1
#define LEFT_CN_PIN_003 PA2
#define LEFT_CN_PIN_004 PA3
#define LEFT_CN_PIN_005 PA4
#define LEFT_CN_PIN_006 PA5
#define LEFT_CN_PIN_007 PA6
#define LEFT_CN_PIN_008 PA7
#define LEFT_CN_PIN_009     // Pin not routed.
#define LEFT_CN_PIN_010     // Pin not routed.
#define LEFT_CN_PIN_011     // Pin not routed.
#define LEFT_CN_PIN_012 PA8
#define LEFT_CN_PIN_013 PA9
#define LEFT_CN_PIN_014 PA10
#define LEFT_CN_PIN_015 PA11
#define LEFT_CN_PIN_016 PA12
#define LEFT_CN_PIN_017 PA13
#define LEFT_CN_PIN_018 PA14
#define LEFT_CN_PIN_019 PA15
#define LEFT_CN_PIN_020     // Pin not routed.
#define LEFT_CN_PIN_021 PE2
#define LEFT_CN_PIN_022 PE3
#define LEFT_CN_PIN_023 PE4
#define LEFT_CN_PIN_024 PE5
#define LEFT_CN_PIN_025 PC4
#define LEFT_CN_PIN_026 PC5
#define LEFT_CN_PIN_027 PB2
#define LEFT_CN_PIN_028 PG0
#define LEFT_CN_PIN_029 PG1
#define LEFT_CN_PIN_030 PF0
#define LEFT_CN_PIN_031 PF1
#define LEFT_CN_PIN_032 PF2
#define LEFT_CN_PIN_033 PF3
#define LEFT_CN_PIN_034 PF4
#define LEFT_CN_PIN_035 PF5
#define LEFT_CN_PIN_036 PF6
#define LEFT_CN_PIN_037 PF7
#define LEFT_CN_PIN_038 PF8
#define LEFT_CN_PIN_039 PF9
#define LEFT_CN_PIN_040 PF10
#define LEFT_CN_PIN_041 PF11
#define LEFT_CN_PIN_042 PF12
#define LEFT_CN_PIN_043 PF13
#define LEFT_CN_PIN_044 PF14
#define LEFT_CN_PIN_045 PF15
#define LEFT_CN_PIN_046     // Pin not routed.
#define LEFT_CN_PIN_047     // Pin not routed.
#define LEFT_CN_PIN_048     // Pin not routed.
#define LEFT_CN_PIN_049     // Pin not routed.
#define LEFT_CN_PIN_050     // Pin not routed.
#define LEFT_CN_PIN_051     // Pin not routed.
#define LEFT_CN_PIN_052     // Pin not routed.
#define LEFT_CN_PIN_053     // Pin not routed.
#define LEFT_CN_PIN_054 PE7
#define LEFT_CN_PIN_055 PE8
#define LEFT_CN_PIN_056 PB1
#define LEFT_CN_PIN_057 PE9
#define LEFT_CN_PIN_058 PB10
#define LEFT_CN_PIN_059 PB11
#define LEFT_CN_PIN_060 PE10
#define LEFT_CN_PIN_061 PE11
#define LEFT_CN_PIN_062 PE12
#define LEFT_CN_PIN_063     // Pin not routed.
#define LEFT_CN_PIN_064     // Pin not routed.
#define LEFT_CN_PIN_065     // Pin not routed.
#define LEFT_CN_PIN_066     // Pin not routed.
#define LEFT_CN_PIN_067     // Pin not routed.
#define LEFT_CN_PIN_068     // Pin not routed.
#define LEFT_CN_PIN_069 PB0
#define LEFT_CN_PIN_070 PB1
#define LEFT_CN_PIN_071 PB2
#define LEFT_CN_PIN_072 PB3
#define LEFT_CN_PIN_073 PB4
#define LEFT_CN_PIN_074 PB5
#define LEFT_CN_PIN_075 PB6
#define LEFT_CN_PIN_076 PB7
#define LEFT_CN_PIN_077 PB8
#define LEFT_CN_PIN_078 PB9
#define LEFT_CN_PIN_079 PB10
#define LEFT_CN_PIN_080 PB11
#define LEFT_CN_PIN_081 PB12
#define LEFT_CN_PIN_082 PB13
#define LEFT_CN_PIN_083 PB14
#define LEFT_CN_PIN_084 PB15
#define LEFT_CN_PIN_085 PB11
#define LEFT_CN_PIN_086 PB10
#define LEFT_CN_PIN_087 PC12
#define LEFT_CN_PIN_088 PD2
#define LEFT_CN_PIN_089 PC7
#define LEFT_CN_PIN_090 PB0
#define LEFT_CN_PIN_091 PB15
#define LEFT_CN_PIN_092 PB14
#define LEFT_CN_PIN_093 PB13
#define LEFT_CN_PIN_094 PG5
#define LEFT_CN_PIN_095 PD10
#define LEFT_CN_PIN_096 PA0
#define LEFT_CN_PIN_097 PB11
#define LEFT_CN_PIN_098 PB10
#define LEFT_CN_PIN_099 PC10
#define LEFT_CN_PIN_100 PC11
#define LEFT_CN_PIN_101 PC6
#define LEFT_CN_PIN_102 PD15
#define LEFT_CN_PIN_103 PB15
#define LEFT_CN_PIN_104 PB14
#define LEFT_CN_PIN_105 PB13
#define LEFT_CN_PIN_106 PG4
#define LEFT_CN_PIN_107 PB12
#define LEFT_CN_PIN_108 PC3
#define LEFT_CN_PIN_109 PB9
#define LEFT_CN_PIN_110 PB8
#define LEFT_CN_PIN_111 PD8
#define LEFT_CN_PIN_112 PD9
#define LEFT_CN_PIN_113 PG8
#define LEFT_CN_PIN_114 PD14
#define LEFT_CN_PIN_115 PA7
#define LEFT_CN_PIN_116 PA6
#define LEFT_CN_PIN_117 PA5
#define LEFT_CN_PIN_118 PG3
#define LEFT_CN_PIN_119 PE15
#define LEFT_CN_PIN_120 PC2
#define LEFT_CN_PIN_121 PB9
#define LEFT_CN_PIN_122 PB8
#define LEFT_CN_PIN_123 PD5
#define LEFT_CN_PIN_124 PD6
#define LEFT_CN_PIN_125 PG7
#define LEFT_CN_PIN_126 PD13
#define LEFT_CN_PIN_127 PA7
#define LEFT_CN_PIN_128 PA6
#define LEFT_CN_PIN_129 PA5
#define LEFT_CN_PIN_130 PG2
#define LEFT_CN_PIN_131 PE14
#define LEFT_CN_PIN_132 PC1
#define LEFT_CN_PIN_133 PB9
#define LEFT_CN_PIN_134 PB8
#define LEFT_CN_PIN_135 PB6
#define LEFT_CN_PIN_136 PB7
#define LEFT_CN_PIN_137 PG6
#define LEFT_CN_PIN_138 PD12
#define LEFT_CN_PIN_139 PA7
#define LEFT_CN_PIN_140 PA6
#define LEFT_CN_PIN_141 PA5
#define LEFT_CN_PIN_142 PD11
#define LEFT_CN_PIN_143 PE13
#define LEFT_CN_PIN_144 PC0
#define LEFT_CN_PIN_145 PD0
#define LEFT_CN_PIN_146 PC8
#define LEFT_CN_PIN_147 PE0
#define LEFT_CN_PIN_148 PE1
#define LEFT_CN_PIN_149 PA12
#define LEFT_CN_PIN_150 PA11
#define LEFT_CN_PIN_151 PA10
#define LEFT_CN_PIN_152 PA9
#define LEFT_CN_PIN_153 PA8
#define LEFT_CN_PIN_154 PC9
#define LEFT_CN_PIN_155     // Pin not routed.
#define LEFT_CN_PIN_156     // Pin not routed.
#define LEFT_CN_PIN_157     // Pin not routed.
#define LEFT_CN_PIN_158     // Pin not routed.
#define LEFT_CN_PIN_159     // Pin not routed.
#define LEFT_CN_PIN_160     // Pin not routed.
#define LEFT_CN_PIN_161     // Pin not routed.
#define LEFT_CN_PIN_162     // Pin not routed.
#define LEFT_CN_PIN_163     // Pin not routed.
#define LEFT_CN_PIN_164     // Pin not routed.
#define LEFT_CN_PIN_165     // Pin not routed.
#define LEFT_CN_PIN_166     // Pin not routed.
#define LEFT_CN_PIN_167     // Pin not routed.
#define LEFT_CN_PIN_168     // Pin not routed.

// Right connector
#define RIGHT_CN_PIN_001 PC0
#define RIGHT_CN_PIN_002 PC1
#define RIGHT_CN_PIN_003 PC2
#define RIGHT_CN_PIN_004 PC3
#define RIGHT_CN_PIN_005 PC4
#define RIGHT_CN_PIN_006 PC5
#define RIGHT_CN_PIN_007 PC6
#define RIGHT_CN_PIN_008 PC7
#define RIGHT_CN_PIN_009     // Pin not routed.
#define RIGHT_CN_PIN_010     // Pin not routed.
#define RIGHT_CN_PIN_011     // Pin not routed.
#define RIGHT_CN_PIN_012 PD0
#define RIGHT_CN_PIN_013 PD1
#define RIGHT_CN_PIN_014 PD2
#define RIGHT_CN_PIN_015 PD3
#define RIGHT_CN_PIN_016 PD4
#define RIGHT_CN_PIN_017 PD5
#define RIGHT_CN_PIN_018 PD6
#define RIGHT_CN_PIN_019 PD7
#define RIGHT_CN_PIN_020 PE0
#define RIGHT_CN_PIN_021 PE1
#define RIGHT_CN_PIN_022 PE2
#define RIGHT_CN_PIN_023 PE3
#define RIGHT_CN_PIN_024 PE4
#define RIGHT_CN_PIN_025 PE5
#define RIGHT_CN_PIN_026 PE6
#define RIGHT_CN_PIN_027 PE7
#define RIGHT_CN_PIN_028 PF0
#define RIGHT_CN_PIN_029 PF1
#define RIGHT_CN_PIN_030 PF2
#define RIGHT_CN_PIN_031 PF3
#define RIGHT_CN_PIN_032 PF4
#define RIGHT_CN_PIN_033 PF5
#define RIGHT_CN_PIN_034 PF6
#define RIGHT_CN_PIN_035 PF7
#define RIGHT_CN_PIN_036     // Pin not routed.
#define RIGHT_CN_PIN_037     // Pin not routed.
#define RIGHT_CN_PIN_038     // Pin not routed.
#define RIGHT_CN_PIN_039     // Pin not routed.
#define RIGHT_CN_PIN_040     // Pin not routed.
#define RIGHT_CN_PIN_041     // Pin not routed.
#define RIGHT_CN_PIN_042     // Pin not routed.
#define RIGHT_CN_PIN_043     // Pin not routed.
#define RIGHT_CN_PIN_044     // Pin not routed.
#define RIGHT_CN_PIN_045 PG0
#define RIGHT_CN_PIN_046 PG1
#define RIGHT_CN_PIN_047 PG2
#define RIGHT_CN_PIN_048 PG3
#define RIGHT_CN_PIN_049 PG4
#define RIGHT_CN_PIN_050 PG5
#define RIGHT_CN_PIN_051 PG6
#define RIGHT_CN_PIN_052 PG7
#define RIGHT_CN_PIN_053     // Pin not routed.
#define RIGHT_CN_PIN_054     // Pin not routed.
#define RIGHT_CN_PIN_055     // Pin not routed.
#define RIGHT_CN_PIN_056     // Pin not routed.
#define RIGHT_CN_PIN_057     // Pin not routed.
#define RIGHT_CN_PIN_058     // Pin not routed.
#define RIGHT_CN_PIN_059     // Pin not routed.
#define RIGHT_CN_PIN_060     // Pin not routed.
#define RIGHT_CN_PIN_061 PG13
#define RIGHT_CN_PIN_062 PG14
#define RIGHT_CN_PIN_063 PG15
#define RIGHT_CN_PIN_064 PB5
#define RIGHT_CN_PIN_065 PB4
#define RIGHT_CN_PIN_066     // Pin not routed.
#define RIGHT_CN_PIN_067     // Pin not routed.
#define RIGHT_CN_PIN_068     // Pin not routed.
#define RIGHT_CN_PIN_069     // Pin not routed.
#define RIGHT_CN_PIN_070     // Pin not routed.
#define RIGHT_CN_PIN_071     // Pin not routed.
#define RIGHT_CN_PIN_072     // Pin not routed.
#define RIGHT_CN_PIN_073     // Pin not routed.
#define RIGHT_CN_PIN_074     // Pin not routed.
#define RIGHT_CN_PIN_075     // Pin not routed.
#define RIGHT_CN_PIN_076     // Pin not routed.
#define RIGHT_CN_PIN_077     // Pin not routed.
#define RIGHT_CN_PIN_078     // Pin not routed.
#define RIGHT_CN_PIN_079     // Pin not routed.
#define RIGHT_CN_PIN_080     // Pin not routed.
#define RIGHT_CN_PIN_081     // Pin not routed.
#define RIGHT_CN_PIN_082     // Pin not routed.
#define RIGHT_CN_PIN_083     // Pin not routed.
#define RIGHT_CN_PIN_084     // Pin not routed.
#define RIGHT_CN_PIN_085     // Pin not routed.
#define RIGHT_CN_PIN_086     // Pin not routed.
#define RIGHT_CN_PIN_087     // Pin not routed.
#define RIGHT_CN_PIN_088     // Pin not routed.
#define RIGHT_CN_PIN_089     // Pin not routed.
#define RIGHT_CN_PIN_090     // Pin not routed.
#define RIGHT_CN_PIN_091     // Pin not routed.
#define RIGHT_CN_PIN_092     // Pin not routed.
#define RIGHT_CN_PIN_093     // Pin not routed.
#define RIGHT_CN_PIN_094     // Pin not routed.
#define RIGHT_CN_PIN_095     // Pin not routed.
#define RIGHT_CN_PIN_096     // Pin not routed.
#define RIGHT_CN_PIN_097     // Pin not routed.
#define RIGHT_CN_PIN_098     // Pin not routed.
#define RIGHT_CN_PIN_099     // Pin not routed.
#define RIGHT_CN_PIN_100     // Pin not routed.
#define RIGHT_CN_PIN_101 PG12
#define RIGHT_CN_PIN_102 PG11
#define RIGHT_CN_PIN_103 PG10
#define RIGHT_CN_PIN_104 PG9
#define RIGHT_CN_PIN_105 PD7
#define RIGHT_CN_PIN_106 PD4
#define RIGHT_CN_PIN_107 PD3
#define RIGHT_CN_PIN_108 PD1
#define RIGHT_CN_PIN_109     // Pin not routed.
#define RIGHT_CN_PIN_110     // Pin not routed.
#define RIGHT_CN_PIN_111     // Pin not routed.
#define RIGHT_CN_PIN_112     // Pin not routed.
#define RIGHT_CN_PIN_113     // Pin not routed.
#define RIGHT_CN_PIN_114     // Pin not routed.
#define RIGHT_CN_PIN_115     // Pin not routed.
#define RIGHT_CN_PIN_116     // Pin not routed.
#define RIGHT_CN_PIN_117 PG15
#define RIGHT_CN_PIN_118 PG14
#define RIGHT_CN_PIN_119 PG13
#define RIGHT_CN_PIN_120 PG12
#define RIGHT_CN_PIN_121 PG11
#define RIGHT_CN_PIN_122 PG10
#define RIGHT_CN_PIN_123 PG9
#define RIGHT_CN_PIN_124 PG8
#define RIGHT_CN_PIN_125 PA4
#define RIGHT_CN_PIN_126 PA3
#define RIGHT_CN_PIN_127 PA2
#define RIGHT_CN_PIN_128 PA1
#define RIGHT_CN_PIN_129     // Pin not routed.
#define RIGHT_CN_PIN_130     // Pin not routed.
#define RIGHT_CN_PIN_131     // Pin not routed.
#define RIGHT_CN_PIN_132     // Pin not routed.
#define RIGHT_CN_PIN_133     // Pin not routed.
#define RIGHT_CN_PIN_134 PF15
#define RIGHT_CN_PIN_135 PF14
#define RIGHT_CN_PIN_136 PF13
#define RIGHT_CN_PIN_137 PF12
#define RIGHT_CN_PIN_138 PF11
#define RIGHT_CN_PIN_139 PF10
#define RIGHT_CN_PIN_140 PF9
#define RIGHT_CN_PIN_141 PF8
#define RIGHT_CN_PIN_142 PE15
#define RIGHT_CN_PIN_143 PE14
#define RIGHT_CN_PIN_144 PE13
#define RIGHT_CN_PIN_145 PE12
#define RIGHT_CN_PIN_146 PE11
#define RIGHT_CN_PIN_147 PE10
#define RIGHT_CN_PIN_148 PE9
#define RIGHT_CN_PIN_149 PE8
#define RIGHT_CN_PIN_150 PD15
#define RIGHT_CN_PIN_151 PD14
#define RIGHT_CN_PIN_152 PD13
#define RIGHT_CN_PIN_153 PD12
#define RIGHT_CN_PIN_154 PD11
#define RIGHT_CN_PIN_155 PD10
#define RIGHT_CN_PIN_156 PD9
#define RIGHT_CN_PIN_157 PD8
#define RIGHT_CN_PIN_158     // Pin not routed.
#define RIGHT_CN_PIN_159 PD2
#define RIGHT_CN_PIN_160 PC12
#define RIGHT_CN_PIN_161     // Pin not routed.
#define RIGHT_CN_PIN_162     // Pin not routed.
#define RIGHT_CN_PIN_163 PC13
#define RIGHT_CN_PIN_164 PC12
#define RIGHT_CN_PIN_165 PC11
#define RIGHT_CN_PIN_166 PC10
#define RIGHT_CN_PIN_167 PC9
#define RIGHT_CN_PIN_168 PC8

#define LCD_TFT_8BIT_CH0 PORT_F
#define LCD_TFT_CH0_8BIT_MASK 0x00FF

#define LCD_TFT_16BIT_CH0 PORT_F
#define LCD_TFT_16BIT_CH0_MASK 0xFFFF

#define LCD_TFT_16BIT_CH1 HAL_PORT_NC
#define LCD_TFT_16BIT_CH1_MASK 0x0000

// Ethernet
#define ETH_RXD0   PC4
#define ETH_RXD1   PC5
#define ETH_TXD0   PB12
#define ETH_TXD1   PB13
#define ETH_TXEN   PB11
#define ETH_CRS_DV PA7
#define ETH_RXER   PB10
#define ETH_MDIO   PA2
#define ETH_MDC    PC1
#define ETH_NINT   PB14
#define ETH_CLK    PA8
#define ETH_RST    HAL_PIN_NC

#ifdef __cplusplus
}
#endif

#endif // _MCU_CARD_H_
// ------------------------------------------------------------------------- END
