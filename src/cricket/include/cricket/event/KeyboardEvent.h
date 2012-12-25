#pragma once

#include "./Event.h"
#include "./EventType.h"
#include "../keyboard/Keys.h"

namespace event {

using namespace keyboard;

class KeyboardEvent : public event::Event {
private:
    Key key;
    State state;
public:
    KeyboardEvent() : event::Event(event::EventType::KEYBOARD) {}
    Key getKey() { return key; }
    void setKey(Key k) { key = k; }
    State getState() { return state; }
    void setState(State s) { state = s; }
};

}
