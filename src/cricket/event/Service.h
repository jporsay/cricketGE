#pragma once

#include <list>
#include <map>
#include <string>
#include <typeinfo>

#include "Event.h"
#include "Notifiable.h"

namespace event {

typedef std::list<Notifiable*> subscriber_list;
typedef std::map<std::string, subscriber_list*> subscriber_map;

class Service {
private:
    Service() {}
    static Service *service;
    subscriber_map subscriberMap;
public:
    static Service& get() {
        if (service == 0) {
            service = new Service();
        }
        return *service;
    }
    void publish(const Event &e);
    void subscribe(const std::type_info &eventType, Notifiable *subscriber);
};

}
