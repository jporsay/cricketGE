#include "Game.hpp"

int main(int argc, char const *argv[]) {
    Game game = new Game();
    if (!game->initialize()) {
        return 1;
    }
    game->run(); 
    return 0;
}