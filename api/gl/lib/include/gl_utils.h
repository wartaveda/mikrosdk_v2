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

/// @cond

#ifndef _GL_UTILS_H
#define _GL_UTILS_H

#include "gl_types.h"


typedef struct
{
    gl_int_t top;
    gl_int_t left;
    gl_int_t bottom;
    gl_int_t right;
} gl_border_t;

/**
 * @brief The context structure for storing font options and source.
 * @details User shall define the values stored within.
 */
typedef struct
{
    const uint8_t *data_array;           /**> Source of the font generated by NECTO Studio. */
    gl_font_orientation_t orientation;   /**> Orientation for text.*/
    gl_color_t background_color;         /**>  */
    bool background_on;                  /**>  */
} gl_font_t;

/**
 * @brief The context structure for storing brush style and color.
 * @details User shall define the values stored within.
 */
typedef struct
{
    gl_color_t color;           /**> Color of the brush which is used for @ref GL_BRUSH_STYLE_FILL style of brush. See @ref gl_color_t definition for detailed explanation. */
    gl_brush_style_t style;  /**> Style of brush. See @ref gl_brush_style_t definition for detailed explanation. */
} gl_brush_t;

/**
 * @brief The context structure for storing pen's size and color.
 * @details User shall define the values stored within.
 */
typedef struct
{
    gl_color_t color;             /**> Color of the pen. */
    uint16_t inner_width;    /**> Width of the pen part which overlaps with shape's brush area. If shape is completely drawn with pen, etc. line and point, this value will be added to total pen width which then will be used.  */
    uint16_t outer_width;   /**> Width of the pen part which frames shape without overlaping. If shape is completely drawn with pen, etc. line and point, this value will be added to total pen width which then will be used.  */
} gl_pen_t;

/**
 * @brief The context structure for storing colors for gradient painting.
 * @details User shall define the values stored within.
 */
typedef struct
{
    gl_color_t from;  /**> Color used in starting point of the gradientally painted area. */
    gl_color_t to;      /**> Color used in ending point of the gradientally pinted area. */
} gl_gradient_color;

typedef struct
{
    gl_driver_t driver;

    gl_border_t crop_rect;       //!<-- determins area on screen in which object should be drawn

    gl_pen_t pen;

    gl_brush_t brush;

    gl_gradient_color gradient_color;

    gl_font_t font;
} gl_t;


typedef struct
{
    gl_point_t center;            // 2 * 32bit
    gl_uint_t radius;              // 1 * 16bit
    gl_angle_t start_angle;     // 1 * 16bit
    gl_angle_t end_angle;      // 1 * 16bit
} gl_arc_t;


typedef struct
{
    uint8_t     version;
    uint8_t     format;
    uint16_t height;
    uint16_t  width;
} gl_image_header_t;


#endif // _GL_UTILS_H

/// @endcond
