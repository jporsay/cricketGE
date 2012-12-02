#include "Window.hpp"

namespace graphics {

Window::Window(int width, int height, std::string title) {
    _window = new sf::RenderWindow(sf::VideoMode(width, height), title);
}

Window::~Window() {
    delete _window;
}

}