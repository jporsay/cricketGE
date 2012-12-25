#pragma once

#include <SFML/Window/Keyboard.hpp>

#include "KeyMapper.h"
#include "Keys.h"

namespace keyboard {

class SFMLKeyMapper : public KeyMapper<sf::Keyboard::Key, keyboard::Key> {};

}