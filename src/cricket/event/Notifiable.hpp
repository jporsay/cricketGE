#pragma once

#include "Event.hpp"

namespace event {

class Notifiable {
public:
    virtual bool notify(const Event& e) = 0;
    virtual ~Notifiable() {}
};

}