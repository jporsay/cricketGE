#pragma once

#include <asteroids/json/json.h>

#include "Config.h"

namespace config {

class ConfigLoader {
public:
    Config* load(const char* config);
};

}
