#pragma once
#include "ISystem.hpp"

namespace system {

class EventSystem;

class WindowSystem : public ISystem {
private:

public:

    virtual bool isOpen() = 0;
    virtual void clear() = 0;
    virtual void registerEventHandler(EventSystem& system);
};

}