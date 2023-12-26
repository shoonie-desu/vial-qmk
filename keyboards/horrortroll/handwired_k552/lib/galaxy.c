/* Copyright 2022 HorrorTroll <https://github.com/HorrorTroll>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

# define ANIM_SIZE 636  // number of bytes in array, minimize for adequate firmware size, max is 1024

void render_galaxy(void) {
    static const char PROGMEM galaxy[][ANIM_SIZE] = {
        {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0xc8, 0xe8, 0x49, 0x72,
        0x7e, 0x4b, 0x82, 0x05, 0xa2, 0x55, 0x0a, 0x11, 0x2a, 0x44, 0xaa, 0x11, 0xaa, 0x44, 0x2a, 0x10,
        0x20, 0x42, 0x02, 0x80, 0xc4, 0x92, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x05, 0x02, 0x05, 0x03, 0x06, 0x81, 0xfe, 0x81, 0x1c, 0x1e, 0x08, 0x00, 0x00, 0x00, 0x80,
        0x00, 0x10, 0x65, 0xcd, 0x63, 0xce, 0x2b, 0x2b, 0x8e, 0x9c, 0x2c, 0x78, 0xf3, 0x58, 0xc0, 0xe8,
        0xe0, 0xf9, 0x88, 0x68, 0xa1, 0x00, 0x01, 0x03, 0x8f, 0x0f, 0x1f, 0x2f, 0xdf, 0x7f, 0x7e, 0xff,
        0x79, 0x2f, 0xff, 0xdf, 0x5f, 0xbf, 0xff, 0x7f, 0xff, 0x9e, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf7,
        0xde, 0xfd, 0xfe, 0x50, 0xa8, 0x50, 0x02, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x42, 0xe4, 0xf0, 0xfe, 0xf0, 0xe1, 0x41, 0x47, 0x49, 0xab,
        0x14, 0x48, 0x22, 0x55, 0x0a, 0x05, 0x20, 0x55, 0x88, 0x54, 0xa2, 0x14, 0x08, 0x00, 0x48, 0x22,
        0x90, 0x20, 0x00, 0x40, 0xa8, 0x70, 0x86, 0x5d, 0x60, 0x04, 0x08, 0x00, 0x04, 0x00, 0x04, 0x04,
        0x04, 0x04, 0x84, 0x84, 0x0e, 0x1f, 0x3f, 0xff, 0x3f, 0x1f, 0x6e, 0xe4, 0xe4, 0xd4, 0xa4, 0xd4,
        0xa5, 0xd9, 0xad, 0xde, 0xfd, 0xf9, 0xfd, 0xf4, 0x08, 0xf0, 0x40, 0x40, 0x00, 0xc1, 0x01, 0x0b,
        0x9f, 0x4f, 0xbf, 0x7f, 0xff, 0xff, 0xfa, 0xc0, 0xea, 0x84, 0xaa, 0x84, 0x00, 0x05, 0x00, 0x01,
        0xc5, 0x7c, 0x2d, 0x57, 0x28, 0x53, 0x20, 0x11, 0x2b, 0x9d, 0x1e, 0x2f, 0x57, 0x2f, 0xdf, 0x3f,
        0xff, 0x7f, 0xff, 0x7f, 0xbf, 0x3f, 0x52, 0x04, 0x0a, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x31, 0x60, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x0a, 0x11, 0x2a, 0x44, 0xa8, 0x00, 0x80, 0x00, 0x01, 0x00, 0x04, 0x19, 0x58, 0xf6, 0xf5,
        0xf8, 0xd5, 0x58, 0xe1, 0x6e, 0xb4, 0x02, 0x80, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x03, 0x07, 0xa7, 0xa3, 0x00, 0x00, 0xaf, 0x80, 0x00, 0x04, 0x01, 0x03, 0x83, 0x73, 0x05,
        0xd3, 0xff, 0x7f, 0xbf, 0x7f, 0xbf, 0xdf, 0xff, 0xfb, 0xf5, 0xe9, 0xac, 0x97, 0x1e, 0xae, 0xf0,
        0x82, 0xc1, 0x42, 0xc5, 0x50, 0xef, 0x9b, 0x1f, 0x9f, 0x6f, 0x59, 0x80, 0x18, 0xe0, 0x60, 0xf1,
        0x56, 0x23, 0x61, 0x22, 0x11, 0x02, 0x01, 0x00, 0x00, 0x80, 0x80, 0x10, 0x08, 0x1a, 0xfd, 0x02,
        0xa9, 0x71, 0x3f, 0x16, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x05, 0x0a, 0x11, 0x0a, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff,
        0xff, 0xff, 0xbf, 0xea, 0xed, 0x7a, 0x05, 0x02, 0x06, 0x00, 0x0c, 0x00, 0x09, 0x2e, 0x80, 0x30,
        0x02, 0x04, 0x82, 0x8a, 0x0d, 0xb8, 0x10, 0xf1, 0xe0, 0xe0, 0x80, 0xe0, 0x40, 0x00, 0x54, 0xa8,
        0x41, 0x82, 0x01, 0x00, 0x01, 0x00, 0x41, 0x88, 0x55, 0x23, 0x55, 0x8b, 0x57, 0xaf, 0xdf, 0xff,
        0xfe, 0xfe, 0xff, 0xfe, 0xfe, 0xfc, 0xbf, 0x4b, 0x8c, 0x07, 0x0f, 0x1f, 0x0c, 0xaa, 0x10, 0x00,
        0x00, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x01, 0x80,
        0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x04, 0x00
        }
    };

    oled_write_raw_P(galaxy[0], ANIM_SIZE);
}