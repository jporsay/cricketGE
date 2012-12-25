#pragma once
#include "../locator/Locator.h"
#include "NullSound.h"

namespace sound {

class Sound;

class Locator : public locator::Locator<Sound, NullSound> {};

}