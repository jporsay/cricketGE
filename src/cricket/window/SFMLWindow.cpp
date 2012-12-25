#include "SFMLWindow.h"

namespace window {

bool SFMLWindow::initialize() {
    _window = new sf::RenderWindow(sf::VideoMode(this->getWidth(), this->getHeight()), this->getTitle(), sf::Style::Close | sf::Style::Titlebar);
    _window->setVerticalSyncEnabled(true);
    return true;
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

bool SFMLWindow::isOpen() const {
    return _window->isOpen();
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