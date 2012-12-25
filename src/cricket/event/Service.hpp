#pragma once

#include <list>
#include <map>
#include <string>

#include "Event.hpp"
#include "Notifiable.hpp"

namespace event {

typedef std::list<Notifiable*> subscriber_list;
typedef std::map<std::string, subscriber_list*> subscriber_map;

class Service {
private:
    subscriber_map subscriberMap;
public:
    void publish(const Event &e);
    void subscribe(std::string eventType, Notifiable *subscriber);
};

}
