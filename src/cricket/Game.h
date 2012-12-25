#pragma once
#include "window/SFMLWindow.h"

class Game {
private:
    window::Window<sf::Event>* window;
public:
    explicit Game() {};
    ~Game();
    bool initialize();
    void run();
    void update();
    void draw();
    void shutDown();
};