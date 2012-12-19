#include "NullSound.hpp"

namespace sound {

bool NullSound::initialize() {
    return true;
}

void NullSound::play() {
    return;
}

}