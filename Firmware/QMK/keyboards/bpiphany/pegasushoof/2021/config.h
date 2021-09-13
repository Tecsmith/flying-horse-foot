/**
 * This file is part of the QMK Firmware distribution (https://github.com/qmk/qmk_firmware).
 * Copyright 2016-2021 Daniel Svensson <dsvensson@gmail.com> [2013, 2015]
 *                     Vino Rodrigues <http://github.com/vinorodrigues> [2021]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID     0x04d9  // Holtek Semiconductor, Inc. // keeping original ID as 0xfeed is not permited in QMK
#define PRODUCT_ID    0x1818  // keeping original ID
#define DEVICE_VER    0x2021
#define MANUFACTURER  Filco
#define PRODUCT       Majestouch TKL \\w The Pegasus Hoof 2021

#define DYNAMIC_KEYMAP_LAYER_COUNT 3

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 18

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
