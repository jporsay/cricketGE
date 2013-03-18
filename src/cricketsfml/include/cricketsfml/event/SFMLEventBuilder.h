#pragma once

#include <cricket/event/EventBuilder.h>
#include <SFML/Window/Event.hpp>
#include <cricketsfml/keyboard/SFMLKeyMapper.h>

namespace event {

class SFMLEventBuilder : public EventBuilder {
private:
    keyboard::SFMLKeyMapper _keyMapper;
public:
    const Event* build(void* rawEvent) const;
private:
    // Window events
    Event* buildClosedEvent(sf::Event* rawEvent) const;
    Event* buildResizedEvent(sf::Event* rawEvent) const;

    // Keyboard events
    Event* buildKeyPressedEvent(sf::Event* rawEvent) const;
    Event* buildKeyReleasedEvent(sf::Event* rawEvent) const;

    // Mouse Events
    Event* buildMouseMovedEvent(sf::Event* rawEvent) const;
    Event* buildMouseButtonPressedEvent(sf::Event* rawEvent) const;
    Event* buildMouseButtonReleasedEvent(sf::Event* rawEvent) const;

    // Default Event
    Event* buildDefaultEvent(sf::Event* rawEvent) const;
};

}
