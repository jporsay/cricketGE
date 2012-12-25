#pragma once

#include "EventType.h"

namespace event {

class Event {
private:
    short type;
protected:
    Event(short eType) { type = eType; }
public:
    short getType() const { return type; }
    bool isOfType(EventType::Type t) const { return type == t; }
};

}