// Copyright 2023 shoonie-desu (@shoonie-desu)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B5, C14, B1, B15, B14 }
#define MATRIX_COL_PINS { A0, B3, B4, A8, B10, A3, B8, A4, B6, B9, B7, A15, B0, B12, C13 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* encoders */
#define ENCODERS_PAD_A { C15 , A13 }
#define ENCODERS_PAD_B { A2, A14 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
