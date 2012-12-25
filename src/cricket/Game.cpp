#include "Game.hpp"
#include "sound/Locator.hpp"

bool Game::initialize() {
    window = new window::SFMLWindow(800, 600, "Cricket GE");
    window->initialize();
    sound::Locator::initialize();
    sound::Locator::get().play();
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

Game::~Game() {
    delete window;
}
