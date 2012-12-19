#include "SFMLWindowSystem.hpp"

namespace system {

bool SFMLWindowSystem::initialize() {
    return true;
}

bool SFMLWindowSystem::update() {
    return true;
}

bool SFMLWindowSystem::shutDown() {
    return true;
}


bool SFMLWindowSystem::isOpen() {
    return false;
}

void SFMLWindowSystem::clear() {
    return;
}

SFMLWindowSystem::~SFMLWindowSystem() {

}

}