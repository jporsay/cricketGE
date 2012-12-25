#include "AsteroidsGame.h"

int main(int argc, char const *argv[]) {
    Game<sf::Event> *game = new AsteroidsGame();
    if (!game->initialize()) {
        return 1;
    }
    game->run();
    return 0;
}