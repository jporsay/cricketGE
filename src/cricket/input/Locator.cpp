#include "Locator.hpp"
#include "Input.hpp"
#include "NullInput.hpp"

namespace locator {

template<class I, class N>
I* Locator<I, N>::service;

template<class I, class N>
N Locator<I, N>::nullService;

template class Locator<input::Input, input::NullInput>;

}