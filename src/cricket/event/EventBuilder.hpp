#pragma once

#include "Event.hpp"

namespace event {

template<class T>
class EventBuilder {
public:
    virtual const Event& build(T* rawEvent) = 0;
    virtual ~EventBuilder() {}
};

}