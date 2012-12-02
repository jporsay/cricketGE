#include "Game.hpp"

Game::Game() {

}

bool Game::initialize() {
    return true;
}

void Game::run() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML win");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.display();
    }
}

Game::~Game() {

}
