#include QMK_KEYBOARD_H


enum custom_keycodes{
    POTENTIOMETER
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x3(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,    POTENTIOMETER
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case POTENTIOMETER:
      if (record->event.pressed) {
        int16_t potValue = adc_read_pin(A0);
        // Send potValue as a MIDI message to MIDI2Vol
      }
      break;
  }
  return true;
}