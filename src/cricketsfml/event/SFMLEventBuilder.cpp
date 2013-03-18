#include "../include/cricketsfml/event/SFMLEventBuilder.h"

#include <cricket/event/ClosedEvent.h>
#include <cricket/event/KeyboardEvent.h>
#include <cricket/event/EmptyEvent.h>
#include <cricket/keyboard/Keys.h>

namespace event {

const Event* SFMLEventBuilder::build(void* e) const {
    sf::Event* ev = (sf::Event*)e;
    Event* event;
    switch (ev->type) {
        case sf::Event::Closed:
            event = this->buildClosedEvent(ev);
            break;
//        case sf::Event::Resized:
//            event = this->buildResizedEvent(ev);
//            break;
        case sf::Event::KeyPressed:
            event = this->buildKeyPressedEvent(ev);
            break;
        case sf::Event::KeyReleased:
            event = this->buildKeyReleasedEvent(ev);
            break;
/*        case sf::Event::MouseMoved:
            event = this->buildMouseMovedEvent(ev);
            break;
        case sf::Event::MouseButtonPressed:
            event = this->buildMouseButtonPressedEvent(ev);
            break;
        case sf::Event::MouseButtonReleased:
            event = this->buildMouseButtonReleasedEvent(ev);
            break; */
        default:
            event = this->buildDefaultEvent(ev);
            break;
    }
    return event;
}

Event* SFMLEventBuilder::buildClosedEvent(sf::Event* rawEvent) const {
    Event* event = new event::ClosedEvent();
    return event;
}
/*
Event* SFMLEventBuilder::buildResizedEvent(sf::Event* rawEvent) {
    //Event* event = new

    // return event;
}
*/
Event* SFMLEventBuilder::buildKeyPressedEvent(sf::Event* rawEvent) const {
    event::KeyboardEvent* event = new event::KeyboardEvent();
    event->setState(keyboard::Pressed);
    //event->setKey(keyboard::Key k);
    return static_cast<Event*>(event);
}

Event* SFMLEventBuilder::buildKeyReleasedEvent(sf::Event* rawEvent) const {
    event::KeyboardEvent* event = new event::KeyboardEvent();
    event->setState(keyboard::Released);
    //event->setKey(keyboard::Key k);
    return static_cast<Event*>(event);
}
/*
Event* SFMLEventBuilder::buildMouseMovedEvent(sf::Event* rawEvent) {
    //Event* event = new

    // return event;
}

Event* SFMLEventBuilder::buildMouseButtonPressedEvent(sf::Event* rawEvent) {
    //Event* event = new

    // return event;
}

Event* SFMLEventBuilder::buildMouseButtonReleasedEvent(sf::Event* rawEvent) {
    //Event* event = new

    // return event;
}
*/
Event* SFMLEventBuilder::buildDefaultEvent(sf::Event* rawEvent) const {
    Event* event = new event::EmptyEvent();
    return event;
}

}
