/*
Copyright 2021 MechMaster48 admin@mechbox.net

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

#include QMK_KEYBOARD_H
#include "keymap_italian.h"

enum layers {
  _QWERTY,
  _SHIFT,
  _NUMBER,
  _SYMBOL,
  _ACCENT,
  _NAVIGATOR,
  _SERVICE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

      [_QWERTY] = LAYOUT_directional(
          KC_GESC,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    IT_MINS, IT_EQL,  XXXXXXX, KC_BSPC,
          KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    IT_LBRC, IT_RBRC, IT_LESS,
          SFT_T(KC_CAPS), KC_A,    KC_S,    LT(_NAVIGATOR, KC_D),    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    IT_SCLN, IT_QUOT,          KC_ENT,
          MO(_SHIFT),     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  XXXXXXX, MO(_SHIFT), KC_UP,   IT_SLSH,
          KC_LCTL,        KC_LALT, KC_LGUI,          XXXXXXX,              LT(_ACCENT, KC_SPC), XXXXXXX, XXXXXXX,     MO(_SERVICE),    KC_LEFT, KC_DOWN, KC_RGHT
      ),
      [_SHIFT] = LAYOUT_directional(
          S(KC_GESC), IT_EXLM,    IT_AT,   IT_SHRP, IT_DLR,  IT_PERC, IT_CIRC, IT_AMPR, IT_ASTR,    IT_LPRN,   IT_RPRN,    IT_UNDS,    IT_PLUS,    XXXXXXX, KC_BSPC,
          S(KC_TAB),  S(KC_Q),    S(KC_W), S(KC_E), S(KC_R), S(KC_T), S(KC_Y), S(KC_U), S(KC_I),    S(KC_O),   S(KC_P),    IT_LCBR,    IT_RCBR,    IT_MORE,
          KC_LSFT,    S(KC_A),    S(KC_S), S(KC_D), S(KC_F), S(KC_G), S(KC_H), S(KC_J), S(KC_K),    S(KC_L),   IT_COLN,    IT_DQUO,                S(KC_ENT),
          KC_LSFT,    S(KC_Z),    S(KC_X), S(KC_C), S(KC_V), S(KC_B), S(KC_N), S(KC_M), IT_BSLS,    IT_PIPE, XXXXXXX, KC_RSFT,                S(KC_UP),   IT_QST,
          S(KC_LCTL), S(KC_LALT), S(KC_LGUI),       XXXXXXX,               S(KC_SPC),  XXXXXXX, XXXXXXX,                   MO(_SERVICE), S(KC_LEFT), S(KC_DOWN), S(KC_RGHT)
      ),
      [_ACCENT] = LAYOUT_directional(
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, IT_SECT, XXXXXXX, IT_DEG,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          XXXXXXX, IT_EURO, XXXXXXX, IT_EGRV, XXXXXXX, XXXXXXX, XXXXXXX, IT_UGRV, IT_IGRV, IT_OGRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          _______, IT_AGRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          _______, XXXXXXX, XXXXXXX, IT_CCED, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, KC_UP, XXXXXXX,
          KC_LCTL, KC_LALT, KC_LGUI,          XXXXXXX,            KC_SPC,    XXXXXXX, XXXXXXX,                  MO(_SERVICE),   KC_LEFT, KC_DOWN, KC_RGHT
      ),
      [_NAVIGATOR] = LAYOUT_directional(
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
          _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, C(KC_ENT),
          KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, XXXXXXX, XXXXXXX,
          XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,            KC_BSPC,    XXXXXXX, XXXXXXX,                  XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX
      ),
      [_SERVICE] = LAYOUT_directional(
          RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
          XXXXXXX, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS, RESET,
          _______, RGB_SPI, RGB_SPD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
          _______, _______, _______,                   XXXXXXX,         _______,    XXXXXXX, XXXXXXX,                 _______, XXXXXXX, XXXXXXX, XXXXXXX
      )
  };
