#include "Locator.h"
#include "Sound.h"
#include "NullSound.h"

namespace locator {

template<class I, class N>
I* Locator<I, N>::service;

template<class I, class N>
N Locator<I, N>::nullService;

template class Locator<sound::Sound, sound::NullSound>;

}