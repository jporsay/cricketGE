#pragma once

namespace event {

class EventType {
public:
    enum Type {
        EMPTY,
        CLOSE,
        KEYBOARD,
        
        COUNT
    };
};

}