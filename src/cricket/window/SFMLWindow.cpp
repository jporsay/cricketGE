#include "SFMLWindow.hpp"

namespace window {

SFMLWindow::SFMLWindow(int width, int height, std::string title) : Window(width, height, title) {
    _window = new sf::RenderWindow(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
    _window->setVerticalSyncEnabled(true);
}

void SFMLWindow::pumpEvents() {
    
}

const event::Event* SFMLWindow::getEvent() const {
    sf::Event event;
    if (_window->pollEvent(event)) {
        // build newEvent with event;
        // return newEvent;
    }
    return 0;
}

void SFMLWindow::clear() {
    _window->clear();
}

void SFMLWindow::display() {
    _window->display();
}

void SFMLWindow::close() {
    _window->close();
}

SFMLWindow::~SFMLWindow() {
    delete _window;
}

}