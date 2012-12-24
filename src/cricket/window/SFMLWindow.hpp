#pragma once

#include <SFML/Graphics.hpp>

#include "Window.hpp"

namespace window {

class SFMLWindow : public Window {
private:
    sf::RenderWindow* _window;
public:
    SFMLWindow(int w, int h, std::string t);

    bool isOpen() const;
    const event::Event *getEvent() const;
    void clear();
    void display();
    void close();
    void pumpEvents();

    ~SFMLWindow();
};

}