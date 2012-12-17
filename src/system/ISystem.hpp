#pragma once
namespace system {

class ISystem {
private:
	short type;
public:
	explicit ISystem(short sType) { type = sType; }
    short getType() const { return type; }
    virtual bool initialize() = 0;
    virtual bool update() = 0;
    virtual bool shutDown() = 0;
};

}
