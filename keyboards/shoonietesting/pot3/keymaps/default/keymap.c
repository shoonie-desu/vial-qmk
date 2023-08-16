#include QMK_KEYBOARD_H
#include "analog.h"

extern MidiDevice midi_device;
uint8_t midi2vol = 0x3E;

enum custom_keycodes {
  POT
};

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
        KC_D,    KC_E,    POT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case POT:
      if (record->event.pressed) {
        midi_send_cc(&midi_device, 2, midi2vol, 0x7F - (analogReadPin(A0) >> 3));
      }
      break;
  }
  return true;
}
