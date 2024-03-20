#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [0] = LAYOUT_ortho_4x10(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, 
        KC_LCTL, KC_LGUI, KC_LALT,LT(1,KC_SPC),KC_BTN1,KC_BTN2, LT(2,KC_SPC),KC_BSPC,KC_TAB,KC_LSFT,
        KC_1,
        TG(1)
    ),
    [1] = LAYOUT_ortho_4x10(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, 
        KC_LCTL, KC_LGUI, KC_LALT,KC_NO,KC_BTN1,KC_BTN2, LT(2,KC_SPC),KC_BSPC,KC_TAB,TO(3),
        KC_2,
        TO(0)
    ),
        [2] = LAYOUT_ortho_4x10(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, 
        KC_LCTL, KC_LGUI, KC_LALT,LT(1,KC_SPC),KC_BTN1,KC_BTN2, KC_NO,KC_BSPC,KC_TAB,KC_LSFT,
        KC_3,
        TO(0)
    ),
        [3] = LAYOUT_ortho_4x10(
        KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,
        KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_ENT,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, 
        KC_LCTL, KC_LGUI, KC_LALT,LT(1,KC_SPC),KC_BTN1,KC_BTN2, LT(2,KC_SPC),KC_BSPC,KC_TAB,TO(0),
        KC_4,
        TO(0)
    )

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_MS_UP, KC_MS_DOWN)},
    [1] = { ENCODER_CCW_CW(KC_MS_RIGHT, KC_MS_LEFT)},
    [2] = { ENCODER_CCW_CW(KC_A, KC_B)},
    [3] = { ENCODER_CCW_CW(KC_C, KC_D)},
};
#endif