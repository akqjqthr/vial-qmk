/* Copyright 2020 Richard Sutherland
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

#include "bema2.h"
#include "pointing_device.H"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { };

void pointing_device_init_kb(void) {
#ifdef ABALL_CPI
    pointing_device_set_cpi(ABALL_CPI);
#endif
}