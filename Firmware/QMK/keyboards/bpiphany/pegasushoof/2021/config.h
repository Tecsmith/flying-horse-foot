/*
Copyright 2016 Daniel Svensson <dsvensson@gmail.com>
Copyright 2021 Silvino Rodrigues <github.com/silvinor>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter */
#define VENDOR_ID       0x4245  // "BE" (Bathroom Epiphanies)
#define PRODUCT_ID      0x6050  // "`p"
#define DEVICE_VER      0x2021
#define MANUFACTURER    Filco
#define PRODUCT         Majestouch TKL \\w The Pegasus Hoof 2021

#define DYNAMIC_KEYMAP_LAYER_COUNT 3  // not enough memory for a 4th layer

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 18

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
