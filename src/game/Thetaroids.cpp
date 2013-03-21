#include <asteroids/Thetaroids.h>

#include <iostream>

#include <cricket/event/Events.h>
#include <cricketsfml/graphics/Graphics.h>

bool Thetaroids::initialize(char const *argv[]) {
    if (!this->initServices(argv)) {
        return false;
    }
    this->suscribeToEvents();
    return true;
}

void Thetaroids::update() {}

void Thetaroids::draw() {
    this->getWindow()->clear();
    // draw
    this->getWindow()->display();
}

void Thetaroids::shutDown() {
    fs::FS::inst()->shutDown();
    // if (this->config != 0) delete this->config;
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

    // FS
    if (!fs::FS::inst()->mount("data")) {
        std::cout << fs::FS::inst()->getLastError() << std::endl;
        return false;
    }

    // Config
    if (!this->loadConfig()) {
        return false;
    }

    // Window
    this->setWindow(new window::SFMLWindow(this->config->getWindowWidth(), this->config->getWindowHeight(), "Thetaroids"));
    this->getWindow()->initialize();
    return true;
}

void Thetaroids::suscribeToEvents() {
    event::Service::get().subscribe(event::EventType::CLOSE, this);
    event::Service::get().subscribe(event::EventType::KEYBOARD, this);
}

bool Thetaroids::loadConfig() {
    config::ConfigLoader loader;
    fs::File* f = fs::FS::inst()->getFile("settings.conf", fs::FILE_READ);
    this->config = loader.load(f->getData());
    if (this->config == 0) return false;
    return true;
}
