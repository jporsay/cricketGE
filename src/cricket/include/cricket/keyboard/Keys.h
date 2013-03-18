#pragma once
namespace keyboard {

enum State {
    Released,
    Pressed
};

typedef enum {
    CR_KEY_A,
    CR_KEY_B,
    CR_KEY_C,
    CR_KEY_D,
    CR_KEY_E,
    CR_KEY_F,
    CR_KEY_G,
    CR_KEY_H,
    CR_KEY_I,
    CR_KEY_J,
    CR_KEY_K,
    CR_KEY_L,
    CR_KEY_M,
    CR_KEY_N,
    CR_KEY_O,
    CR_KEY_P,
    CR_KEY_Q,
    CR_KEY_R,
    CR_KEY_S,
    CR_KEY_T,
    CR_KEY_U,
    CR_KEY_V,
    CR_KEY_W,
    CR_KEY_X,
    CR_KEY_Y,
    CR_KEY_Z,
    CR_KEY_0,
    CR_KEY_1,
    CR_KEY_2,
    CR_KEY_3,
    CR_KEY_4,
    CR_KEY_5,
    CR_KEY_6,
    CR_KEY_7,
    CR_KEY_8,
    CR_KEY_9,
    CR_KEY_LEFT,
    CR_KEY_RIGHT,
    CR_KEY_UP,
    CR_KEY_DOWN,
    CR_KEY_ESC,
    CR_KEY_LCTRL,
    CR_KEY_RCTRL,
    CR_KEY_LSHIFT,
    CR_KEY_RSHIFT,
    CR_KEY_PGUP,
    CR_KEY_PGDOWN,

    CR_KEY_UNKNOWN

} Key;

}
