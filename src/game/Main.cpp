#include <asteroids/Thetaroids.h>

int main(int argc, char const *argv[]) {
    Game *game = new Thetaroids();
    if (!game->initialize(argv)) {
        return 1;
    }
    game->run();
    return 0;
}
