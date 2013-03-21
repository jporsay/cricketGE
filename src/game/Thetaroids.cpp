#include <asteroids/Thetaroids.h>

#include <iostream>

#include <cricket/event/Events.h>
#include <cricketsfml/graphics/Graphics.h>

graphics::Sprite* s;

bool Thetaroids::initialize(char const *argv[]) {
    if (!this->initServices(argv)) {
        return false;
    }
    this->suscribeToEvents();
    return true;
}

void Thetaroids::update() {
}

void Thetaroids::draw() {
    this->getWindow()->clear();
    // draw everything
    this->getWindow()->display();
}

void Thetaroids::shutDown() {
    fs::FS::inst()->shutDown();
    this->getWindow()->close();
}

bool Thetaroids::notify(const event::Event& e) {
    switch (e.getType()) {
        case event::EventType::CLOSE:
            this->shutDown();
        break;
        case event::EventType::KEYBOARD: {
            const event::KeyboardEvent* ev = static_cast<const event::KeyboardEvent*>(&e);
            if (ev->getState() == keyboard::Pressed) {
                std::cout << "Pressed key: " << ev->getKey() << std::endl;
            }
        }
        break;
        default: break;
    }
    return true;
}

Thetaroids::~Thetaroids() {}

bool Thetaroids::initServices(char const *argv[]) {
    // Window
    if (!fs::FS::inst()->initialize("chilogic", "thetaroids", "", argv)) {
        std::cout << fs::FS::inst()->getLastError() << std::endl;
        return false;
    }
    setWindow(new window::SFMLWindow(800, 600, "Thetaroids"));
    getWindow()->initialize();

    // FS
    if (!fs::FS::inst()->mount("data", "")) {
        std::cout << fs::FS::inst()->getLastError() << std::endl;
        return false;
    }
    return true;
}

void Thetaroids::suscribeToEvents() {
    event::Service::get().subscribe(event::EventType::CLOSE, this);
    event::Service::get().subscribe(event::EventType::KEYBOARD, this);
}
