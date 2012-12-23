#pragma once
#include <SFML/Graphics.hpp>
#include "../event/Event.hpp"

namespace window {

class Window {
private:
    sf::RenderWindow* _window;
public:
    Window(int width, int height, std::string title);
    ~Window();
    bool isOpen() { return _window->isOpen(); }
    event::Event getEvent();
    void clear();
    void display();
    void close();
};

}
