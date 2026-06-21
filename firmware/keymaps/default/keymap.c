// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_INS,
        KC_LCTL,
        KC_LSFT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_INS:
            rgblight_sethsv_at(record->event.pressed ? HSV_CYAN : HSV_OFF, 0);
            return true;

        case KC_LCTL:
            rgblight_sethsv_at(record->event.pressed ? HSV_PURPLE : HSV_OFF, 1);
            return true;

        case KC_LSFT:
            rgblight_sethsv_at(record->event.pressed ? HSV_GREEN : HSV_OFF, 2);
            return true;
    }
    return true;
}