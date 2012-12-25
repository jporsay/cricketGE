#pragma once

namespace event {

class EventType {
public:
    enum {
        EMPTY,
        CLOSE,
        KEYBOARD,
        
        COUNT
    };
};

}