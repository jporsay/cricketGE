#pragma once

#include <SFML/Graphics.hpp>

#include <cricket/window/Window.h>
#include "../event/SFMLEventBuilder.h"
#include "../graphics/Sprite.h"

namespace window {

class SFMLWindow : public Window {
private:
    sf::RenderWindow* _window;
public:
    SFMLWindow(int width, int height, std::string title) : Window(width, height, title) {}

    bool initialize();
    bool isOpen() const;
    const event::Event *getEvent() const;
    void clear();
    void display();
    void close();
    void draw(void* s);
    void pumpEvents();

    ~SFMLWindow();
};

}
