#pragma once
#include "window/SFMLWindow.h"
#include "event/Notifiable.h"

class Game : public event::Notifiable {
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
    bool notify(const event::Event& e);
};
