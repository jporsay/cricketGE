#include "Game.hpp"
#include "sound/Locator.hpp"
Game::Game() {

}

bool Game::initialize() {
    _window = new window::SFMLWindow(800, 600, "Minute Wings");
    sound::Locator::initialize();
    sound::Locator::get().play();
    return true;
}

void Game::run() {
    while (_window->isOpen()) {
//        if (!_window->handleEvents()) {
//           this->shutDown();
//        }
        this->update();
        this->draw();
    }
}

void Game::update() {
}

void Game::draw() {
    _window->clear();
    // draw stuff
    _window->display();
}

void Game::shutDown() {
    _window->close();
}

Game::~Game() {
    delete _window;
}
