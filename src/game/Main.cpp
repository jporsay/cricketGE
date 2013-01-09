#include <asteroids/AsteroidsGame.h>

int main(int argc, char const *argv[]) {
    Game *game = new AsteroidsGame();
    if (!game->initialize()) {
        return 1;
    }
    game->run();
    return 0;
}