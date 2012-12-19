#pragma once
#include "System.hpp"

namespace system {

class EventSystem;

class WindowSystem : public System {
public:
    virtual bool isOpen() = 0;
    virtual void clear() = 0;
    virtual ~WindowSystem() {}
};

}
