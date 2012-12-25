#include <cricket/locator/Locator.h>
#include <cricket/sound/Sound.h>
#include <cricket/sound/NullSound.h>

namespace locator {

template<class I, class N>
I* Locator<I, N>::service;

template<class I, class N>
N Locator<I, N>::nullService;

template class Locator<sound::Sound, sound::NullSound>;

}