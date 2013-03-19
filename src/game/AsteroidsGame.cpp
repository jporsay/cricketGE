#include <asteroids/AsteroidsGame.h>

#include <iostream>

#include <cricket/event/Events.h>
#include <cricketsfml/graphics/Graphics.h>

graphics::Sprite* s;

bool AsteroidsGame::initialize(char const *argv[]) {
    if (!fs::FS::inst()->initialize("chilogic", "metaroids", "", argv)) {
        std::cout << fs::FS::inst()->getLastError() << std::endl;
        return false;
    }
    if (!fs::FS::inst()->mount("data", "")) {
        std::cout << fs::FS::inst()->getLastError() << std::endl;
        return false;
    }
    setWindow(new window::SFMLWindow(800, 600, "Metaroids"));
    getWindow()->initialize();
    event::Service::get().subscribe(event::EventType::CLOSE, this);
    event::Service::get().subscribe(event::EventType::KEYBOARD, this);

    fs::File* f = fs::FS::inst()->getFile("images/starTile.jpg", fs::FILE_READ);
    s = graphics::Sprite::loadFromMemory(f->getData(), f->getSize());
    if (s == 0) {
        std::cout << "Error! " << fs::FS::inst()->getLastError() << std::endl;
    }
    return true;
}

void AsteroidsGame::update() {
}

void AsteroidsGame::draw() {
    getWindow()->clear();
    if (s != 0) getWindow()->draw(s);
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
