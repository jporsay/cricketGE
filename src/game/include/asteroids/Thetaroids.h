#pragma once

#include <cricket/Game.h>

#include <cricketsfml/window/SFMLWindow.h>
#include <asteroids/fs/FS.h>
#include <asteroids/config/ConfigLoader.h>

class Thetaroids : public Game {
private:
    config::Config* config;
public:
    bool initialize(char const *argv[]);
    void update();
    void draw();
    void shutDown();
    bool notify(const event::Event& e);
    ~Thetaroids();
private:
    bool initServices(char const *argv[]);
    void suscribeToEvents();
    bool loadConfig();
};
