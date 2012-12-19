#include "Locator.hpp"

namespace locator {

template<class I, class N>
I* Locator<I, N>::service = 0;

template<class I, class N>
N Locator<I, N>::nullService = N();

template<class I, class N>
void Locator<I, N>::initialize() {
    service = &nullService;
}

template<class I, class N>
void Locator<I, N>::provide(I* newService) {
    if (newService == 0) {
        initialize();
    } else {
        service = newService;
    }
}

template<class I, class N>
Locator<I,N>::~Locator() {
    delete service;
}

}