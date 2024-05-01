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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

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
//     [0] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
//     [1] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
//     [2] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
//     [3] = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
// };
// #endif


// aheiko.vogeler@hvo.deheiko.vogeler@hvo.dea1abheiko.vogeler@hvo.de