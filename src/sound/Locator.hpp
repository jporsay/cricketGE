#pragma once
#include "../locator/Locator.hpp"
#include "NullSound.hpp"

namespace sound {

class Sound;

class Locator : public locator::Locator<Sound, NullSound> {};

}