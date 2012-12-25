#include "Locator.h"

namespace locator {

template<class I, class N>
I* Locator<I, N>::service;

template<class I, class N>
N Locator<I, N>::nullService;

}