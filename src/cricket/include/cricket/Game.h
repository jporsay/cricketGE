#pragma once
#include "event/Notifiable.h"
#include "window/Window.h"

template <class T>
class Game : public event::Notifiable {
private:
    window::Window<T>* window;
protected:
    window::Window<T>* getWindow() { return window; }
    void setWindow(window::Window<T>* w) { window = w; }
public:
    explicit Game() {};

    virtual void run() {
        while (window->isOpen()) {
            window->pumpEvents();
            this->update();
            this->draw();
        }
    };
    virtual bool initialize() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    virtual void shutDown() = 0;
    virtual bool notify(const event::Event& e) = 0;
    virtual void destroyWindow() { delete window; }

    virtual ~Game() {}
};
