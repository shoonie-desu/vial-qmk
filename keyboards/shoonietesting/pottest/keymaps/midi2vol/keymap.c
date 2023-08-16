#include QMK_KEYBOARD_H

#define MIDI_VOL KC_MVOL

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
        KC_D,    KC_E,    KC_F,
        MIDI_VOL
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_VOL:
            if (record->event.pressed) {
                // Read the analog input value and send a MIDI control change message
                uint16_t sliderValue = adc_read(ADC1_0);  // Replace ADC_CHANNEL_0 with the appropriate channel
                midi_send_cc(0, 0, sliderValue);  // Replace MIDI_CHANNEL and MIDI_CONTROL with your desired values
            }
            break;
    }
    return true;
}

enum custom_keycodes {
    MIDI_VOL = SAFE_RANGE,
};
