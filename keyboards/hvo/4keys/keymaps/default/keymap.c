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

// [_BL] = LAYOUT(
//     KC_A, KC_B,
//     KC_1, HV_EMAIL
// ),
[0] = LAYOUT(
    KC_A, KC_B,
    KC_1, KC_3
),

[1] = LAYOUT(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

[2] = LAYOUT(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),

[3] = LAYOUT(
    KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS
),
};

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
//     [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
//     [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
//     [2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
//     [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
// };
// #endif

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
//     [0] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
//     [1] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
//     [2] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
//     [3] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
// };
// #endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } 
    
    // else if (index == 1) { /* Second encoder */
    //     if (clockwise) {
            
    //         rgb_matrix_increase_hue();
    //     } else {
    //         rgb_matrix_decrease_hue();
    //     }
    // }
    return false;
}
// aheiko.vogeler@hvo.deheiko.vogeler@hvo.de