namespace sound {

class Sound {
public:
    virtual bool initialize() = 0;
    virtual void play() = 0;
    virtual ~Sound() {};
};

}