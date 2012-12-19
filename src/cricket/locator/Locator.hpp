#pragma once
namespace locator {

template <class I, class N>
class Locator {
public:
    static void initialize() {
        service = &nullService;
    }
    static void provide(I* newService) {
        if (newService == 0) {
            initialize();
        } else {
            service = newService;
        }
    }
    static I& get() {
        return *service;
    }
    virtual ~Locator() {
        delete service;
    }
private:
    Locator();
    static I* service;
    static N nullService;
};

}
