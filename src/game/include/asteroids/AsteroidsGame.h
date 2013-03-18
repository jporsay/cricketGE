#pragma once

#include <cricket/Game.h>

#include <cricketsfml/window/SFMLWindow.h>
#include <asteroids/fs/FS.h>

class AsteroidsGame : public Game {
public:
    bool initialize(char const *argv[]);
    void update();
    void draw();
    void shutDown();
    bool notify(const event::Event& e);
    ~AsteroidsGame();
};
