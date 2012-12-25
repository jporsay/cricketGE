#pragma once

#include "Event.h"

namespace event {

class EventBuilder {
public:
    virtual const Event* build(void* rawEvent) const = 0;
    virtual ~EventBuilder() {}
};

}