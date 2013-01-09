#pragma once

#include <cricket/Game.h>

#include <cricketsfml/window/SFMLWindow.h>

class AsteroidsGame : public Game {
    bool initialize();
    void update();
    void draw();
    void shutDown();
    bool notify(const event::Event& e);

    ~AsteroidsGame();
};