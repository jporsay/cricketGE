#pragma once

#include <SFML/Graphics.hpp>

#include <cricket/window/Window.h>
#include "SFMLEventBuilder.h"

namespace window {

class SFMLWindow : public Window<sf::Event> {
private:
    sf::RenderWindow* _window;
public:
    SFMLWindow(int width, int height, std::string title) : Window<sf::Event>(width, height, title) {}

    bool initialize();
    bool isOpen() const;
    const event::Event *getEvent() const;
    void clear();
    void display();
    void close();
    void pumpEvents();

    ~SFMLWindow();
};

}