#include <asteroids/AsteroidsGame.h>

#include <typeinfo>

#include <cricket/event/EventType.h>
#include <cricket/event/Service.h>
#include <cricket/event/ClosedEvent.h>
#include <cricket/event/KeyboardEvent.h>

#include <iostream>

bool AsteroidsGame::initialize() {
    setWindow(new window::SFMLWindow(800, 600, "Cricket GE"));
    getWindow()->initialize();
    event::Service::get().subscribe(event::EventType::CLOSE, this);
    event::Service::get().subscribe(event::EventType::KEYBOARD, this);
    return true;
}

void AsteroidsGame::update() {
}

void AsteroidsGame::draw() {
    getWindow()->clear();
    // draw stuff
    getWindow()->display();
}

void AsteroidsGame::shutDown() {
    getWindow()->close();
}

bool AsteroidsGame::notify(const event::Event& e) {
    switch (e.getType()) {
        case event::EventType::CLOSE:
            shutDown();
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

AsteroidsGame::~AsteroidsGame() {}
