#pragma once
namespace system {

class System {
private:
    short type;
public:
    explicit System(short sType) { type = sType; }
    short getType() const { return type; }
    virtual bool initialize() = 0;
    virtual bool update() = 0;
    virtual bool shutDown() = 0;
    virtual ~System() {}
};

}
