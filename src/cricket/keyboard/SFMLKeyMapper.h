#pragma once

#include <SFML/Window/Keyboard.hpp>

#include <cricket/keyboard/KeyMapper.h>
#include <cricket/keyboard/Keys.h>

namespace keyboard {

class SFMLKeyMapper : public KeyMapper<sf::Keyboard::Key, keyboard::Key> {};

}