#pragma once

#include "../event/EventBuilder.h"
#include <SFML/Window/Event.hpp>

namespace event {

class SFMLEventBuilder : public EventBuilder<sf::Event> {
public:
    const Event& build(sf::Event* rawEvent);
private:
    // Window events
    Event* buildClosedEvent(sf::Event* rawEvent);
    Event* buildResizedEvent(sf::Event* rawEvent);

    // Keyboard events
    Event* buildKeyPressedEvent(sf::Event* rawEvent);
    Event* buildKeyReleasedEvent(sf::Event* rawEvent);

    // Mouse Events
    Event* buildMouseMovedEvent(sf::Event* rawEvent);
    Event* buildMouseButtonPressedEvent(sf::Event* rawEvent);
    Event* buildMouseButtonReleasedEvent(sf::Event* rawEvent);

    // Default Event
    Event* buildDefaultEvent(sf::Event* rawEvent);
};

}