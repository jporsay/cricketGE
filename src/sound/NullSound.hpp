#pragma once
#include "Sound.hpp"
namespace sound {

class NullSound : public Sound {
public:
    bool initialize();
    void play();
};

}