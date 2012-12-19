namespace locator {

template <class I, class N>
class Locator {
public:
    static void initialize();
    static void provide(I* newService);
    static I& get() { return *service; }
    virtual ~Locator();
private:
    Locator();
    static I* service;
    static N nullService;
};

}