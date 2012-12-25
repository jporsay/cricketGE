#pragma once

#include "Event.h"
#include "EventType.h"

namespace event {

class ClosedEvent : public Event {
public:
    ClosedEvent() : Event(EventType::CLOSE) {}
};

}
