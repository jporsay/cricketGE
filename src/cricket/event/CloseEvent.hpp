#pragma once

#include "Event.hpp"
#include "EventType.hpp"

namespace event {

class CloseEvent : public Event {
    CloseEvent() : Event(EventType::TYPE_CLOSE) {}
};

}