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
 * @file  shield.h
 * @brief Mikromedia shield connections mapping.
 */

#ifndef _SHIELD_H_
#define _SHIELD_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "mikrobus.h"

#define SHIELD_MIKROBUS_1_AN   SHIELD_CONNECTOR_J1_PIN3
#define SHIELD_MIKROBUS_1_RST  SHIELD_CONNECTOR_J1_PIN6
#define SHIELD_MIKROBUS_1_CS   SHIELD_CONNECTOR_J1_PIN9
#define SHIELD_MIKROBUS_1_SCK  SHIELD_CONNECTOR_J1_PIN18
#define SHIELD_MIKROBUS_1_MISO SHIELD_CONNECTOR_J1_PIN19
#define SHIELD_MIKROBUS_1_MOSI SHIELD_CONNECTOR_J1_PIN20
#define SHIELD_MIKROBUS_1_PWM  SHIELD_CONNECTOR_J2_PIN7
#define SHIELD_MIKROBUS_1_INT  SHIELD_CONNECTOR_J2_PIN13
#define SHIELD_MIKROBUS_1_RX   SHIELD_CONNECTOR_J2_PIN21
#define SHIELD_MIKROBUS_1_TX   SHIELD_CONNECTOR_J2_PIN22
#define SHIELD_MIKROBUS_1_SCL  SHIELD_CONNECTOR_J2_PIN17
#define SHIELD_MIKROBUS_1_SDA  SHIELD_CONNECTOR_J2_PIN18

#define SHIELD_MIKROBUS_2_AN   SHIELD_CONNECTOR_J1_PIN4
#define SHIELD_MIKROBUS_2_RST  SHIELD_CONNECTOR_J1_PIN7
#define SHIELD_MIKROBUS_2_CS   SHIELD_CONNECTOR_J1_PIN10
#define SHIELD_MIKROBUS_2_SCK  SHIELD_CONNECTOR_J1_PIN18
#define SHIELD_MIKROBUS_2_MISO SHIELD_CONNECTOR_J1_PIN19
#define SHIELD_MIKROBUS_2_MOSI SHIELD_CONNECTOR_J1_PIN20
#define SHIELD_MIKROBUS_2_PWM  SHIELD_CONNECTOR_J2_PIN8
#define SHIELD_MIKROBUS_2_INT  SHIELD_CONNECTOR_J2_PIN14
#define SHIELD_MIKROBUS_2_RX   SHIELD_CONNECTOR_J2_PIN21
#define SHIELD_MIKROBUS_2_TX   SHIELD_CONNECTOR_J2_PIN22
#define SHIELD_MIKROBUS_2_SCL  SHIELD_CONNECTOR_J2_PIN17
#define SHIELD_MIKROBUS_2_SDA  SHIELD_CONNECTOR_J2_PIN18

#define SHIELD_MIKROBUS_3_AN   SHIELD_CONNECTOR_J1_PIN5
#define SHIELD_MIKROBUS_3_RST  SHIELD_CONNECTOR_J1_PIN8
#define SHIELD_MIKROBUS_3_CS   SHIELD_CONNECTOR_J1_PIN11
#define SHIELD_MIKROBUS_3_SCK  SHIELD_CONNECTOR_J1_PIN18
#define SHIELD_MIKROBUS_3_MISO SHIELD_CONNECTOR_J1_PIN19
#define SHIELD_MIKROBUS_3_MOSI SHIELD_CONNECTOR_J1_PIN20
#define SHIELD_MIKROBUS_3_PWM  SHIELD_CONNECTOR_J2_PIN10
#define SHIELD_MIKROBUS_3_INT  SHIELD_CONNECTOR_J2_PIN15
#define SHIELD_MIKROBUS_3_RX   SHIELD_CONNECTOR_J2_PIN19
#define SHIELD_MIKROBUS_3_TX   SHIELD_CONNECTOR_J2_PIN20
#define SHIELD_MIKROBUS_3_SCL  SHIELD_CONNECTOR_J2_PIN17
#define SHIELD_MIKROBUS_3_SDA  SHIELD_CONNECTOR_J2_PIN18

#define MIKROBUS_1 1
#define MIKROBUS_1_AN   SHIELD_MIKROBUS_1_AN
#define MIKROBUS_1_RST  SHIELD_MIKROBUS_1_RST
#define MIKROBUS_1_CS   SHIELD_MIKROBUS_1_CS
#define MIKROBUS_1_SCK  SHIELD_MIKROBUS_1_SCK
#define MIKROBUS_1_MISO SHIELD_MIKROBUS_1_MISO
#define MIKROBUS_1_MOSI SHIELD_MIKROBUS_1_MOSI
#define MIKROBUS_1_PWM  SHIELD_MIKROBUS_1_PWM
#define MIKROBUS_1_RX   SHIELD_MIKROBUS_1_RX
#define MIKROBUS_1_INT  SHIELD_MIKROBUS_1_INT
#define MIKROBUS_1_TX   SHIELD_MIKROBUS_1_TX
#define MIKROBUS_1_SCL  SHIELD_MIKROBUS_1_SCL
#define MIKROBUS_1_SDA  SHIELD_MIKROBUS_1_SDA

#define MIKROBUS_2 2
#define MIKROBUS_2_AN   SHIELD_MIKROBUS_2_AN
#define MIKROBUS_2_RST  SHIELD_MIKROBUS_2_RST
#define MIKROBUS_2_CS   SHIELD_MIKROBUS_2_CS
#define MIKROBUS_2_SCK  SHIELD_MIKROBUS_2_SCK
#define MIKROBUS_2_MISO SHIELD_MIKROBUS_2_MISO
#define MIKROBUS_2_MOSI SHIELD_MIKROBUS_2_MOSI
#define MIKROBUS_2_PWM  SHIELD_MIKROBUS_2_PWM
#define MIKROBUS_2_RX   SHIELD_MIKROBUS_2_RX
#define MIKROBUS_2_INT  SHIELD_MIKROBUS_2_INT
#define MIKROBUS_2_TX   SHIELD_MIKROBUS_2_TX
#define MIKROBUS_2_SCL  SHIELD_MIKROBUS_2_SCL
#define MIKROBUS_2_SDA  SHIELD_MIKROBUS_2_SDA

#define MIKROBUS_3 3
#define MIKROBUS_3_AN   SHIELD_MIKROBUS_3_AN
#define MIKROBUS_3_RST  SHIELD_MIKROBUS_3_RST
#define MIKROBUS_3_CS   SHIELD_MIKROBUS_3_CS
#define MIKROBUS_3_SCK  SHIELD_MIKROBUS_3_SCK
#define MIKROBUS_3_MISO SHIELD_MIKROBUS_3_MISO
#define MIKROBUS_3_MOSI SHIELD_MIKROBUS_3_MOSI
#define MIKROBUS_3_PWM  SHIELD_MIKROBUS_3_PWM
#define MIKROBUS_3_RX   SHIELD_MIKROBUS_3_RX
#define MIKROBUS_3_INT  SHIELD_MIKROBUS_3_INT
#define MIKROBUS_3_TX   SHIELD_MIKROBUS_3_TX
#define MIKROBUS_3_SCL  SHIELD_MIKROBUS_3_SCL
#define MIKROBUS_3_SDA  SHIELD_MIKROBUS_3_SDA

#ifdef __cplusplus
}
#endif

#endif // _SHIELD_H_
// ------------------------------------------------------------------------- END
