#pragma once
#include "graphic/Window.hpp"

class Game {
private:
    graphic::Window* _window;
public:
    explicit Game();
    ~Game();
    bool initialize();
    void run();
    void update();
    void draw();
    void shutDown();
};