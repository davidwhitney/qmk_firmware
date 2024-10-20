/* Copyright 2023 Brian Low
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  _   |   -  |   -  |   -  |   -  |   -  |                    |  ESC |   1  |   2  |   3  |   4  |  5   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  _   |   -  |   -  |   -  |   -  |   -  |                    |  Tab |   Q  |   W  |   E  |   R  |  T   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  _   |   -  |   -  |   -  |   -  |   -  |-------.    ,-------|LShift|   A  |   S  |   D  |   F  |  G   |
 * |------+------+------+------+------+------|   -   |    |   `   |------+------+------+------+------+------|
 * |  -   |   -  |   -  |   -  |   -  |   -  |-------|    |-------| LCTL |   Z  |   X  |   C  |   V  |  B   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |   -  |   -  |   -  |   -  | /  -    /       \Space \  | LALT |   I  |   M  | Enter|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

LAYOUT(
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                       KC_ESC,     KC_1,     KC_2,    KC_3,    KC_4,    KC_5,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                       KC_TAB,     KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                       KC_LSFT,    KC_A,     KC_S,    KC_D,    KC_F,    KC_G,
    KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,       KC_GRV, KC_LCTL,    KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,
                      KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,       KC_SPC, KC_LALT,    KC_I,     KC_M,    KC_ENT
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif
