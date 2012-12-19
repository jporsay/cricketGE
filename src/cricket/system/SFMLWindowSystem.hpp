#pragma once
#include "WindowSystem.hpp"

namespace system {

class SFMLWindowSystem : public WindowSystem {
public:
    bool initialize();
    bool update();
    bool shutDown();
    bool isOpen();
    void clear();
	~SFMLWindowSystem();
};

}
