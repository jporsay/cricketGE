#pragma once

#include "../event/Event.hpp"
#include "Keys.hpp"

namespace keyboard {

class KeyboardEvent : public event::Event {
private:
    Key key;
    State state;
public:
    Key getKey() { return key; }
    void setKey(Key k) { key = k; }
    State getState() { return state; }
    void setState(State s) { state = s; }
};

}