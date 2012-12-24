#include "SFMLEventBuilder.hpp"

namespace event {

const Event& SFMLEventBuilder::build(sf::Event* rawEvent) {
    Event* event;
    switch (rawEvent->type) {
        case sf::Event::Closed:
            break;
        case sf::Event::Resized:
            break;
        case sf::Event::KeyPressed:
            break;
        case sf::Event::KeyReleased:
            break;
        case sf::Event::MouseMoved:
            break;
        case sf::Event::MouseButtonPressed:
            break;
        case sf::Event::MouseButtonReleased:
            break;
        default:
            break;
    }
    return *event;
}

Event* SFMLEventBuilder::buildClosedEvent(sf::Event* rawEvent) {
    //Event* event = new 

    // return event;
}

Event* SFMLEventBuilder::buildResizedEvent(sf::Event* rawEvent) {
    //Event* event = new 

    // return event;
}

Event* SFMLEventBuilder::buildKeyPressedEvent(sf::Event* rawEvent) {
    //Event* event = new 

    // return event;
}

Event* SFMLEventBuilder::buildKeyReleasedEvent(sf::Event* rawEvent) {
    //Event* event = new 

    // return event;
}

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

Event* SFMLEventBuilder::buildDefaultEvent(sf::Event* rawEvent) {
    //Event* event = new 

    // return event;
}

}