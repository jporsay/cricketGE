#pragma once

#include "Event.hpp"
#include "EventType.hpp"

namespace event {

class EmptyEvent : public Event {
public:
    EmptyEvent() : Event(EventType::EMPTY) {}
};

}