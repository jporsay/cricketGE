#include "SFMLEventBuilder.hpp"

#include "../event/ClosedEvent.hpp"
#include "../event/KeyboardEvent.hpp"
#include "../event/EmptyEvent.hpp"

#include "../keyboard/Keys.hpp"

namespace event {

const Event& SFMLEventBuilder::build(sf::Event* e) {
    Event* event;
    switch (e->type) {
        case sf::Event::Closed:
            event = this->buildClosedEvent(e);
            break;
//        case sf::Event::Resized:
//            event = this->buildResizedEvent(e);
//            break;
        case sf::Event::KeyPressed:
            event = this->buildKeyPressedEvent(e);
            break;
        case sf::Event::KeyReleased:
            event = this->buildKeyReleasedEvent(e);
            break;
/*        case sf::Event::MouseMoved:
            event = this->buildMouseMovedEvent(e);
            break;
        case sf::Event::MouseButtonPressed:
            event = this->buildMouseButtonPressedEvent(e);
            break;
        case sf::Event::MouseButtonReleased:
            event = this->buildMouseButtonReleasedEvent(e);
            break; */
        default:
            break;
    }
    return *event;
}

Event* SFMLEventBuilder::buildClosedEvent(sf::Event* rawEvent) {
    Event* event = new event::ClosedEvent();
    return event;
}
/*
Event* SFMLEventBuilder::buildResizedEvent(sf::Event* rawEvent) {
    //Event* event = new

    // return event;
}
*/
Event* SFMLEventBuilder::buildKeyPressedEvent(sf::Event* rawEvent) {
    event::KeyboardEvent* event = new event::KeyboardEvent();
    event->setState(keyboard::Pressed);
    //event->setKey(keyboard::Key k);
    return static_cast<Event*>(event);
}

Event* SFMLEventBuilder::buildKeyReleasedEvent(sf::Event* rawEvent) {
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
Event* SFMLEventBuilder::buildDefaultEvent(sf::Event* rawEvent) {
    Event* event = new event::EmptyEvent();
    return event;
}

}
