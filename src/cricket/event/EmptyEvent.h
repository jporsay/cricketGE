#pragma once

#include "Event.h"
#include "EventType.h"

namespace event {

class EmptyEvent : public Event {
public:
    EmptyEvent() : Event(EventType::EMPTY) {}
};

}