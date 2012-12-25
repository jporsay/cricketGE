#pragma once
#include "Sound.h"
namespace sound {

class NullSound : public Sound {
public:
    bool initialize();
    void play();
};

}