/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { B3, B4, B5, B12, C13 }
#define MATRIX_COL_PINS { B7, A15, A7, A6, B13, A1, B14, B15, B1, C14, A5, C15, A2, A14, A13 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
