#pragma once
#include "System.hpp"

namespace system {

class EventSystem;

class WindowSystem : public System {
private:

public:
    virtual bool isOpen() = 0;
    virtual void clear() = 0;
    virtual void registerEventHandler(EventSystem& system);
    virtual ~WindowSystem() {}
};

}