#pragma once

#include <cricket/Game.h>

#include "window/SFMLWindow.h"

class AsteroidsGame : public Game<sf::Event> {
    bool initialize();
    void update();
    void draw();
    void shutDown();
    bool notify(const event::Event& e);

    ~AsteroidsGame();
};