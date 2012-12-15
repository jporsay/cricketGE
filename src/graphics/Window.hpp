#pragma once
#include <SFML/Graphics.hpp>

namespace graphics {

class Window {
private:
    sf::RenderWindow* _window;
public:
    Window(int width, int height, std::string title);
    ~Window();
    bool isOpen() { return _window->isOpen(); }
    bool handleEvents();
    void clear();
    void display();
    void close();
};

}