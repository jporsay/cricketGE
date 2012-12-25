#include "Game.h"

#include <typeinfo>

#include "sound/Locator.h"
#include "event/EventType.h"
#include "event/Service.h"
#include "event/ClosedEvent.h"

bool Game::initialize() {
    window = new window::SFMLWindow(800, 600, "Cricket GE");
    window->initialize();
    sound::Locator::initialize();
    sound::Locator::get().play();
    event::Service::get().subscribe(typeid(event::ClosedEvent), this);
    return true;
}

void Game::run() {
    while (window->isOpen()) {
        window->pumpEvents();
        this->update();
        this->draw();
    }
}

void Game::update() {
}

void Game::draw() {
    window->clear();
    // draw stuff
    window->display();
}

void Game::shutDown() {
    window->close();
}

bool Game::notify(const event::Event& e) {
    if (e.isOfType(event::EventType::CLOSE)) {
        shutDown();
    }
    return true;
}

Game::~Game() {
    delete window;
}
