#pragma once

#include <string>

#include "../event/EventBuilder.h"

namespace window {

template <class T>
class Window {
private:
    int width;
    int height;
    std::string title;
    event::EventBuilder<T>* eventBuilder;
public:
    Window(int w, int h, std::string t) : 
        width(w),
        height(h),
        title(t)
    {}

    virtual bool initialize() = 0;
    virtual bool isOpen() const = 0;
    virtual const event::Event *getEvent() const = 0;
    virtual void clear() = 0;
    virtual void display() = 0;
    virtual void close() = 0;
    virtual void pumpEvents() = 0;

    void setEventBuilder(event::EventBuilder<T> *builder) {
        eventBuilder = builder;
    }

    event::EventBuilder<T>* getEventBuilder() {
        return eventBuilder;
    }

    const int getWidth() const {
        return width;
    }

    const int getHeight() const {
        return height;
    }

    const std::string getTitle() const {
        return title;
    }

    virtual ~Window() {}
};

}
