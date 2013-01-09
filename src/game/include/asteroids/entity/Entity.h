#pragma once 

#include <asteroids/component/Component.h>
#include <map>

namespace entity {

class Entity {
private:
    std::map<std::string, component::Component*> _components;
public:
    void addComponent(std::string name, component::Component newComponent) {
        _components.insert(new std::pair<std::string, component::Component>(name, newComponent));
    }
};

}
