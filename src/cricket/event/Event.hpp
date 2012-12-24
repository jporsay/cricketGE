#pragma once

namespace event {

class Event {
private:
    short type;
protected:
    Event(short eType) { type = eType; }
public:
    short getType() { return type; }

};

}