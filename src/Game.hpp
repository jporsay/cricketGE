#pragma once
#include "graphics/Window.hpp"

class Game {
private:
    graphics::Window* _window;
public:
    explicit Game();
    ~Game();
    bool initialize();
    void run();
    void update();
    void shutDown();
};