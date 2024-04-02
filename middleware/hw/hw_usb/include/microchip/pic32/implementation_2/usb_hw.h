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
 * @file  usb_hw.h
 * @brief Initializes USB HW module.
 * @details Sets clock, pins, etc.
 */

#ifndef _USB_HW_H_
#define _USB_HW_H_

#ifdef __cplusplus
extern "C"{
#endif

#include "mcu.h"

#define hal_ll_core_enable_int_asm asm("nop"); \
                                   asm("ei"); \
                                   asm("nop")

/*!
 * @addtogroup middleware Middleware
 * @{
 */

/*!
 * @addtogroup usb MikroE USB HW implementation.
 * @brief MikroE USB HW init library.
 *
 * @details This library initializes HW specific
 * USB pins/clock etc.
 * @{
 */

/**
 * @brief Initializes USB.
 * @details Sets appropriate clock settings.
 * Sets appropriate pins if necessary.
 * @param None
 * @note Needs to implemented by user for current MCU.
 * @return None
 */
static inline void usb_hw_init(void) {
    // Set interrupt priority for USB.
    #ifdef _IPC11_USBIP_MASK
    IPC11CLR = _IPC11_USBIP_MASK;
    IPC11SET = (10 << _IPC11_USBIP_POSITION);
    // Set interrupt subpriority for USB.
    IPC11CLR = _IPC11_USBIS_MASK;
    IPC11SET = (8 << _IPC11_USBIS_POSITION);
    #else
    // Set interrupt priority for USB.
    IPC7CLR = _IPC7_USBIP_MASK;
    IPC7SET = (10 << _IPC7_USBIP_POSITION);
    // Set interrupt subpriority for USB.
    IPC7CLR = _IPC7_USBIS_MASK;
    IPC7SET = (8 << _IPC7_USBIS_POSITION);
    #endif

    // Configure interrupt controller for Multi-vector mode.
    INTCONbits.MVEC = 1;
    // Enable global interrupts.
    hal_ll_core_enable_int_asm;
}

/*! @} */ // usb
/*! @} */ // middleware

#ifdef __cplusplus
}
#endif

#endif // _USB_HW_H_
// ------------------------------------------------------------------------- END
