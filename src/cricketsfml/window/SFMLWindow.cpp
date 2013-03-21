#include "../include/cricketsfml/window/SFMLWindow.h"
#include <cricket/event/Service.h>
#include "../include/cricketsfml/event/SFMLEventBuilder.h"

namespace window {

bool SFMLWindow::initialize() {
    _window = new sf::RenderWindow(sf::VideoMode(this->getWidth(), this->getHeight()), this->getTitle(), sf::Style::Close | sf::Style::Titlebar);
    _window->setVerticalSyncEnabled(true);
    this->setEventBuilder(new event::SFMLEventBuilder());
    return true;
}

void SFMLWindow::pumpEvents() {
    const event::Event* event;
    while ((event = getEvent())) {
        event::Service::get().publish(*event);
    }
}

const event::Event* SFMLWindow::getEvent() const {
    sf::Event event;
    if (_window->pollEvent(event)) {
        return getEventBuilder()->build(&event);
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

void SFMLWindow::draw(void* s) {
    graphics::Sprite* sprite = static_cast<graphics::Sprite*>(s);
    _window->draw(sprite->getSprite());
}

SFMLWindow::~SFMLWindow() {
    delete _window;
}

}
