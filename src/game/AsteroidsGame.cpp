#include <asteroids/AsteroidsGame.h>

#include <typeinfo>

#include <cricket/event/EventType.h>
#include <cricket/event/Service.h>
#include <cricket/event/ClosedEvent.h>

bool AsteroidsGame::initialize() {
    setWindow(new window::SFMLWindow(800, 600, "Cricket GE"));
    getWindow()->initialize();
    event::Service::get().subscribe(event::EventType::CLOSE, this);
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
    if (e.isOfType(event::EventType::CLOSE)) {
        shutDown();
    }
    return true;
}

AsteroidsGame::~AsteroidsGame() {}
