#pragma once
#include "window/Window.hpp"

class Game {
private:
    window::Window* _window;
public:
    explicit Game();
    ~Game();
    bool initialize();
    void run();
    void update();
    void draw();
    void shutDown();
};
