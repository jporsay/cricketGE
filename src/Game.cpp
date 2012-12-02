#include "Game.hpp"

Game::Game() {

}

bool Game::initialize() {
    _window = new graphics::Window(800, 600, "Minute Wings");
    return true;
}

void Game::run() {
    while (_window->isOpen()) {
        if (_window->handleEvents()) {
            this->update();
        } else {
            this->shutDown();
        }
        _window->clear();
        _window->display();
    }
}

void Game::update() {

}

void Game::shutDown() {
    _window->close();
}

Game::~Game() {
    delete _window;
}
