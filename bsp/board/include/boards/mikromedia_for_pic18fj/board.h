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
 * @file  board.h
 * @brief Main board pin mapping.
 */

#ifndef _BOARD_H_
#define _BOARD_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "hal_target.h"
#include "shield.h"

// Hardware revision number
#define BOARD_REV_MAJOR (1)
#define BOARD_REV_MINOR (00)

#define BOARD_NAME "Mikromedia for PIC18FJ"

/// Mapping
#define TFT_RST  PD3
#define TFT_CS   PD2
#define TFT_RS   PE0
#define TFT_RD   PH1
#define TFT_WR   PH2
#define TFT_BLED PC2
#define TFT_D0   PJ0
#define TFT_D1   PJ1
#define TFT_D2   PJ2
#define TFT_D3   PJ3
#define TFT_D4   PJ4
#define TFT_D5   PJ5
#define TFT_D6   PJ6
#define TFT_D7   PJ7
#define TFT_D8   HAL_PIN_NC
#define TFT_D9   HAL_PIN_NC
#define TFT_D10  HAL_PIN_NC
#define TFT_D11  HAL_PIN_NC
#define TFT_D12  HAL_PIN_NC
#define TFT_D13  HAL_PIN_NC
#define TFT_D14  HAL_PIN_NC
#define TFT_D15  HAL_PIN_NC

#define TFT_BPWM TFT_BLED

#define TFT_8BIT_DATA_PORT_CH0 PORT_J
#define TFT_8BIT_DATA_PORT_CH0_MASK 0x00FF

#define TFT_16BIT_DATA_PORT_CH0 PORT_J
#define TFT_16BIT_DATA_PORT_CH0_MASK 0x00FF

#define TFT_16BIT_DATA_PORT_CH1 HAL_PORT_NC
#define TFT_16BIT_DATA_PORT_CH1_MASK 0x0000

#define TP_MIKROE_XL PA0
#define TP_MIKROE_XR PD7
#define TP_MIKROE_YU PA1
#define TP_MIKROE_YD PD4

// Default TP_MIKROE touch panel calibration values.
#define TP_MIKROE_CALIBRATION_XMIN 92
#define TP_MIKROE_CALIBRATION_XMAX 882
#define TP_MIKROE_CALIBRATION_YMIN 132
#define TP_MIKROE_CALIBRATION_YMAX 770

#define TP_MIKROE_PRESSURE_THRESHOLD_LOWER (70)
#define TP_MIKROE_PRESSURE_THRESHOLD_UPPER (1000)

#define USB_SW_ID HAL_PIN_NC
#define USB_VBUS HAL_PIN_NC
#define USB_N PF3
#define USB_P PF4
#define USB_PSW HAL_PIN_NC

#define SD_CS PD0
#define SD_MOSI PC5
#define SD_SCK PC3
#define SD_MISO PC4
#define SD_CD PD1

#define FLASH_CS PF7
#define FLASH_MISO PC4
#define FLASH_SCK PC3
#define FLASH_MOSI PC5

#define MP3_SCLK PC3
#define MP3_SIN PC4
#define MP3_SOUT PC5
#define MP3_CS PB4
#define MP3_RST PH0
#define MP3_DREQ PH7
#define MP3_DCS PB5

#define ALS_SDA HAL_PIN_NC
#define ALS_SCL HAL_PIN_NC

#define ACCEL_SDA PD5
#define ACCEL_SCL PD6
#define ACCEL_INT HAL_PIN_NC

#define BUZZER HAL_PIN_NC

#define IR_TX HAL_PIN_NC

#define LED_R HAL_PIN_NC
#define LED_G HAL_PIN_NC
#define LED_B HAL_PIN_NC

#define TEMP_SENS HAL_PIN_NC

#define CAN_RX HAL_PIN_NC
#define CAN_TX HAL_PIN_NC

#define POWER_BAT_SENSE PH5
#define POWER_STATUS PH3
#define POWER_DC_DETECT HAL_PIN_NC

#define USB_UART_TX HAL_PIN_NC
#define USB_UART_RX HAL_PIN_NC

#define HEADER_CONNECTOR_HDR1_PIN1 HAL_PIN_NC  // VCC SYS
#define HEADER_CONNECTOR_HDR1_PIN2 HAL_PIN_NC  // VDD
#define HEADER_CONNECTOR_HDR1_PIN3 PA2
#define HEADER_CONNECTOR_HDR1_PIN4 PA5
#define HEADER_CONNECTOR_HDR1_PIN5 PF2
#define HEADER_CONNECTOR_HDR1_PIN6 PF5
#define HEADER_CONNECTOR_HDR1_PIN7 PF6
#define HEADER_CONNECTOR_HDR1_PIN8 PH4
#define HEADER_CONNECTOR_HDR1_PIN9 PH6
#define HEADER_CONNECTOR_HDR1_PIN10 PB0
#define HEADER_CONNECTOR_HDR1_PIN11 PB1
#define HEADER_CONNECTOR_HDR1_PIN12 PB2
#define HEADER_CONNECTOR_HDR1_PIN13 PB3
#define HEADER_CONNECTOR_HDR1_PIN14 PJ0
#define HEADER_CONNECTOR_HDR1_PIN15 PJ1
#define HEADER_CONNECTOR_HDR1_PIN16 PJ2
#define HEADER_CONNECTOR_HDR1_PIN17 PJ3
#define HEADER_CONNECTOR_HDR1_PIN18 PJ4
#define HEADER_CONNECTOR_HDR1_PIN19 PJ5
#define HEADER_CONNECTOR_HDR1_PIN20 PC0
#define HEADER_CONNECTOR_HDR1_PIN21 PA4
#define HEADER_CONNECTOR_HDR1_PIN22 PC3
#define HEADER_CONNECTOR_HDR1_PIN23 PC4
#define HEADER_CONNECTOR_HDR1_PIN24 PC5
#define HEADER_CONNECTOR_HDR1_PIN25 HAL_PIN_NC  // VCC 3V3
#define HEADER_CONNECTOR_HDR1_PIN26 HAL_PIN_NC  // VDD

// Specifically defined in schematic
#define HEADER_CONNECTOR_HDR2_PIN1 HAL_PIN_NC  // RST
#define HEADER_CONNECTOR_HDR2_PIN2 HAL_PIN_NC  // VDD
#define HEADER_CONNECTOR_HDR2_PIN3 HAL_PIN_NC  // PHONE JACK L
#define HEADER_CONNECTOR_HDR2_PIN4 HAL_PIN_NC  // PHONE JACK R
#define HEADER_CONNECTOR_HDR2_PIN5 PC1
#define HEADER_CONNECTOR_HDR2_PIN6 PG0
#define HEADER_CONNECTOR_HDR2_PIN7 PG3
#define HEADER_CONNECTOR_HDR2_PIN8 PG4
#define HEADER_CONNECTOR_HDR2_PIN9 PA3
#define HEADER_CONNECTOR_HDR2_PIN10 PE1
#define HEADER_CONNECTOR_HDR2_PIN11 PE2
#define HEADER_CONNECTOR_HDR2_PIN12 PE3
#define HEADER_CONNECTOR_HDR2_PIN13 PE4
#define HEADER_CONNECTOR_HDR2_PIN14 PE5
#define HEADER_CONNECTOR_HDR2_PIN15 PE6
#define HEADER_CONNECTOR_HDR2_PIN16 PE7
#define HEADER_CONNECTOR_HDR2_PIN17 PB6
#define HEADER_CONNECTOR_HDR2_PIN18 PB7
#define HEADER_CONNECTOR_HDR2_PIN19 PG2
#define HEADER_CONNECTOR_HDR2_PIN20 PG1
#define HEADER_CONNECTOR_HDR2_PIN21 PC7
#define HEADER_CONNECTOR_HDR2_PIN22 PC6
#define HEADER_CONNECTOR_HDR2_PIN23 PD6
#define HEADER_CONNECTOR_HDR2_PIN24 PD5
#define HEADER_CONNECTOR_HDR2_PIN25 HAL_PIN_NC  // VCC 3V3
#define HEADER_CONNECTOR_HDR2_PIN26 HAL_PIN_NC  // VDD

#define HEADER_CONNECTOR_HDR2_PIN27 HEADER_CONNECTOR_HDR2_PIN1  // RST
#define HEADER_CONNECTOR_HDR2_PIN28 HEADER_CONNECTOR_HDR2_PIN2  // VDD
#define HEADER_CONNECTOR_HDR2_PIN29 HEADER_CONNECTOR_HDR2_PIN3  // PHONE JACK L
#define HEADER_CONNECTOR_HDR2_PIN30 HEADER_CONNECTOR_HDR2_PIN4  // PHONE JACK R
#define HEADER_CONNECTOR_HDR2_PIN31 HEADER_CONNECTOR_HDR2_PIN5
#define HEADER_CONNECTOR_HDR2_PIN32 HEADER_CONNECTOR_HDR2_PIN6
#define HEADER_CONNECTOR_HDR2_PIN33 HEADER_CONNECTOR_HDR2_PIN7
#define HEADER_CONNECTOR_HDR2_PIN34 HEADER_CONNECTOR_HDR2_PIN8
#define HEADER_CONNECTOR_HDR2_PIN35 HEADER_CONNECTOR_HDR2_PIN9
#define HEADER_CONNECTOR_HDR2_PIN36 HEADER_CONNECTOR_HDR2_PIN10
#define HEADER_CONNECTOR_HDR2_PIN37 HEADER_CONNECTOR_HDR2_PIN11
#define HEADER_CONNECTOR_HDR2_PIN38 HEADER_CONNECTOR_HDR2_PIN12
#define HEADER_CONNECTOR_HDR2_PIN39 HEADER_CONNECTOR_HDR2_PIN13
#define HEADER_CONNECTOR_HDR2_PIN40 HEADER_CONNECTOR_HDR2_PIN14
#define HEADER_CONNECTOR_HDR2_PIN41 HEADER_CONNECTOR_HDR2_PIN15
#define HEADER_CONNECTOR_HDR2_PIN42 HEADER_CONNECTOR_HDR2_PIN16
#define HEADER_CONNECTOR_HDR2_PIN43 HEADER_CONNECTOR_HDR2_PIN17
#define HEADER_CONNECTOR_HDR2_PIN44 HEADER_CONNECTOR_HDR2_PIN18
#define HEADER_CONNECTOR_HDR2_PIN45 HEADER_CONNECTOR_HDR2_PIN19
#define HEADER_CONNECTOR_HDR2_PIN46 HEADER_CONNECTOR_HDR2_PIN20
#define HEADER_CONNECTOR_HDR2_PIN47 HEADER_CONNECTOR_HDR2_PIN21
#define HEADER_CONNECTOR_HDR2_PIN48 HEADER_CONNECTOR_HDR2_PIN22
#define HEADER_CONNECTOR_HDR2_PIN49 HEADER_CONNECTOR_HDR2_PIN23
#define HEADER_CONNECTOR_HDR2_PIN50 HEADER_CONNECTOR_HDR2_PIN24
#define HEADER_CONNECTOR_HDR2_PIN51 HEADER_CONNECTOR_HDR2_PIN25  // VCC 3V3
#define HEADER_CONNECTOR_HDR2_PIN52 HEADER_CONNECTOR_HDR2_PIN26  // VDD

#ifdef __cplusplus
}
#endif

#endif // _BOARD_H_
// ------------------------------------------------------------------------- END
