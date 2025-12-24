/* Copyright 2019 Ryota Goto
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

enum layer_names {
    _BASE,
    _GAME,
    _FN,
    _EMPTY
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_all( /* Base */
    QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_NO,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,
    MO(_FN), MT(MOD_LGUI,KC_A), MT(MOD_LALT,KC_S), MT(MOD_LCTL,KC_D), MT(MOD_LSFT,KC_F), KC_G, KC_H, MT(MOD_RSFT,KC_J), MT(MOD_LCTL,KC_K), MT(MOD_LALT,KC_L), MT(MOD_LGUI,KC_SCLN), KC_QUOT, KC_ENT,
    KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_RGUI,
    KC_LCTL, KC_NO,   KC_LALT,          LT(_FN, KC_SPC),  LT(_FN, KC_SPC),  LT(_FN, KC_SPC),           KC_RALT, KC_RALT, KC_NO,   KC_RCTL
  ),
  [_GAME] = LAYOUT_all( /* Game */
    QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_NO,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,
    MO(_FN), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
    KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_RGUI,
    KC_LCTL, KC_NO,   KC_LALT,          KC_SPC,           KC_SPC,           KC_SPC,                    KC_RALT, KC_LALT, KC_NO,   KC_RCTL
  ),
  [_FN] = LAYOUT_all( /* FN */
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_TRNS,
    KC_ESC,  KC_TRNS, KC_WBAK, KC_WFWD, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_DEL,  KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_GAME), KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, KC_TRNS,                   KC_BSPC,
    KC_TRNS, KC_TRNS, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), TO(_BASE), KC_TRNS, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_PSCR,
    KC_TRNS, KC_NO,   KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_NO,   KC_TRNS, KC_NO,   KC_TRNS
  ),
  [_EMPTY] = LAYOUT_all( /* Empty */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};