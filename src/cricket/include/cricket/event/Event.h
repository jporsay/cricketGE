#pragma once

#include "EventType.h"

namespace event {

class Event {
private:
    event::EventType::Type type = event::EventType::EMPTY;
protected:
    Event(event::EventType::Type eType) { type = eType; }
public:
    const event::EventType::Type getType() const { return type; }
    bool isOfType(EventType::Type t) const { return type == t; }
};

}
