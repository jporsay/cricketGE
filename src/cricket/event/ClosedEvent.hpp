#pragma once

#include "Event.hpp"
#include "EventType.hpp"

namespace event {

class ClosedEvent : public Event {
public:
    ClosedEvent() : Event(EventType::CLOSE) {}
};

}
