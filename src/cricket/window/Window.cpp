#include "Window.hpp"

namespace window {

Window::Window(int width, int height, std::string title) {
    _window = new sf::RenderWindow(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
    _window->setVerticalSyncEnabled(true);
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

event::Event* Window::getEvent() {
    sf::Event event;
    if (_window->pollEvent(event)) {
        // build newEvent with event;
        // return newEvent;
    }
    return 0;
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
