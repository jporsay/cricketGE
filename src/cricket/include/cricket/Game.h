#pragma once
#include "event/Notifiable.h"
#include "window/Window.h"

class Game : public event::Notifiable {
private:
    window::Window* window;
protected:
    window::Window* getWindow() { return window; }
    void setWindow(window::Window* w) { window = w; }
public:
    explicit Game() {};

    virtual void run() {
        while (window->isOpen()) {
            window->pumpEvents();
            this->update();
            this->draw();
        }
    };
    virtual bool initialize(char const *argv[]) = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void shutDown() = 0;
    virtual bool notify(const event::Event& e) = 0;
    virtual void destroyWindow() { delete window; }

    virtual ~Game() {}
};
