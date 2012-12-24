#pragma once

#include "../event/Event.hpp"
#include "../event/EventType.hpp"
#include "Keys.hpp"

namespace keyboard {

class KeyboardEvent : public event::Event {
private:
    Key key;
    State state;
public:
    KeyboardEvent() : event::Event(event::EventType::TYPE_KEYBOARD) {}
    Key getKey() { return key; }
    void setKey(Key k) { key = k; }
    State getState() { return state; }
    void setState(State s) { state = s; }
};

}