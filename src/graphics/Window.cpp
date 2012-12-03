#include "Window.hpp"

namespace graphics {

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

void Window::clear() {
    _window->clear();
}

void Window::display() {
    sf::CircleShape shape(100.0f);
    shape.setFillColor(sf::Color::Green);
    _window->draw(shape);
    _window->display();
}

void Window::close() {
    _window->close();
}

Window::~Window() {
    delete _window;
}

}