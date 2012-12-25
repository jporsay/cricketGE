#include <cricket/sound/NullSound.h>

namespace sound {

bool NullSound::initialize() {
    return true;
}

void NullSound::play() {
    return;
}

}