#pragma once

#include <SFML/Window/Keyboard.hpp>

#include "KeyMapper.hpp"
#include "Keys.hpp"

namespace keyboard {

class SFMLKeyMapper : public KeyMapper<sf::Keyboard::Key, keyboard::Key> {};

}