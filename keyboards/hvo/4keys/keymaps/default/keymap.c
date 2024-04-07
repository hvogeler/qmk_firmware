#include QMK_KEYBOARD_H

// Helpful defines
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
 *  You can use _______ in place for KC_TRNS (transparent)   *
 *  Or you can use XXXXXXX for KC_NO (NOOP)                  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Each layer gets a name for readability.
// The underscores don't mean anything - you can
// have a layer called STUFF or any other name.
// Layer names don't all need to be of the same
// length, and you can also skip them entirely
// and just use numbers.

enum layer_names {
    _BL,
};

enum custom_keycodes {
    HV_EMAIL = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case HV_EMAIL:
        if (record->event.pressed) {
            // when keycode HV_EMAIL is pressed
            SEND_STRING("heiko.vogeler@hvo.de");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BL] = LAYOUT(
    KC_A, KC_B,
    KC_1, HV_EMAIL
),

};

// aheiko.vogeler@hvo.deheiko.vogeler@hvo.de