// #pragma once

// #include "config_common.h"

// #define VENDOR_ID       0xFEED
// #define PRODUCT_ID      0x6666
// #define DEVICE_VER      0x0001
// #define PRODUCT         BeMa
// #define MANUFACTURER    SaNoRaMyun

// /* key matrix size */
// // Rows are doubled-up
// #define MATRIX_ROWS 10
// #define MATRIX_COLS 4

// // #define ENCODERS_PAD_A { F4 }
// // #define ENCODERS_PAD_B { F5 }

// // wiring of each half

// #define MATRIX_COL_PINS { C6, D7, E6, B4, B5}
// #define MATRIX_ROW_PINS { B1, B3, B2, B6}

// #define DIODE_DIRECTION COL2ROW
// #define SOFT_SERIAL_PIN D0

// // WS2812 RGB LED strip input and number of LEDs
// // #define RGB_DI_PIN D3
// // #define RGBLED_NUM 12





#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6666
#define DEVICE_VER      0x0001
#define PRODUCT         BeMa
#define MANUFACTURER    SaNoRaMyun

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 5
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5}
// #define MATRIX_COL_PINS { B5, B4, E6, D7, C6}
#define MATRIX_ROW_PINS { B1, B3, B2, B6}
// #define MATRIX_ROW_PINS { B2, B6, B4, B5 }
// #define MATRIX_COL_PINS { F4, F5, F6, F7, B1 }
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2
/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW