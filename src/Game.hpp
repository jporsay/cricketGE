#include <SFML/Graphics.hpp>

class Game {
public:
    explicit Game();
    ~Game();
    bool initialize();
    void run();
};