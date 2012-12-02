#include "Window.hpp"

namespace graphics {

Window::Window(int width, int height, std::string title) {
    _window = new sf::RenderWindow(sf::VideoMode(width, height), title);
}

bool Window::handleEvents() {
    sf::Event event;
    while (_window->pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            return false;
        }
    }
    return true;
}

void Window::clear() {
    _window->clear();
}

void Window::display() {
    _window->display();
}

void Window::close() {
    _window->close();
}

Window::~Window() {
    delete _window;
}

}