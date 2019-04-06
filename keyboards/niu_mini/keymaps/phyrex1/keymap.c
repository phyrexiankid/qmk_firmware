#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Ctrl |  GUI | Caps |  Alt |Layer1|    Space    |Layer2|  /   | Left | Down |Right |
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_planck_mit(
		KC_GESC, KC_Q,   KC_W, KC_E,   KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,  KC_P,    KC_LBRC,
		KC_TAB,  KC_A,   KC_S, KC_D,   KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,  KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,   KC_X, KC_C,   KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,KC_SLSH, KC_ENT,
		KC_LCTL, KC_LGUI,KC_NO,KC_LALT,MO(1),    KC_SPC,    MO(3), RSFT_T(KC_CAPS),KC_NO, KC_BSLS, KC_RBRC
  ), 							
 
	/* Layer 1
	 * ,-----------------------------------------------------------------------------------.
	 * |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      | Vol- | Vol+ | Mute |      |      |      |  F11 |  F12 |      |      |      |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * | Reset|      |      |      |      |      |      |      |      |      |      |      |
	 * `------------------------------------------------------/-----------------------------'
	 */
	[1] = LAYOUT_planck_mit(
		MO(2),   KC_PMNS, KC_PPLS,   KC_LCBR, KC_RCBR, KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9,  KC_PEQL,  KC_NO,
		_______, KC_PSLS, KC_PAST, KC_LPRN, KC_RPRN, KC_NO,   KC_NO,   KC_4,    KC_5,    KC_6,  KC_0,     KC_NO,
		_______, KC_LT,   KC_GT, KC_LBRC, KC_RBRC, KC_NO,   KC_NO,   KC_1,    KC_2,    KC_3,  KC_PCMM,  _______,
		_______, _______, _______, _______, _______,      _______,     _______, _______, KC_NO, KC_NO,    KC_NO
	),

	/* Layer 2 (r_ Indicates RGB Controls)
	 * ,-----------------------------------------------------------------------------------.
	 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      |r_TOG |r_Mode|r_Hue+|r_Hue-|      |      |   -  |   =  |   [  |   ]  |  \   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |BL_TOG|BL_STEP|     |      |      |      |      |      |      |      |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */

	[2] = LAYOUT_planck_mit(
		_______, KC_NO,   KC_NO,   KC_MSTP, KC_VOLU, KC_NO, KC_NO, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_CALC,
		_______, KC_NO,   KC_NO,   KC_MPLY, KC_VOLD, KC_NO, KC_NO, KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_NO,
		_______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_F1,   KC_F2,   KC_F3,   KC_F12,  KC_NO,
		_______, _______, _______, _______, _______,     _______,  _______, KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),	

    [3] = LAYOUT_planck_mit(
		_______,    KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_BSPC, KC_UP,   KC_DEL,  KC_NO,   KC_PGUP,
		_______,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_HOME,KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_PGDN,
		_______,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_UNDS, KC_NO,   KC_NO,   KC_NO,   _______,
		_______,  _______,_______, _______, KC_NO,      _______,    _______, _______, KC_NO,   KC_NO,   KC_NO
    )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
