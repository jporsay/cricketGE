
namespace system {

class ISystem {
    ISystem* get() { return this; }
    virtual bool initialize() = 0;
    virtual bool update() = 0;
    virtual bool shutDown() = 0;
};

}