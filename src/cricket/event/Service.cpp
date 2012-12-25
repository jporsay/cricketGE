#include "Service.h"

namespace event {

void Service::publish(const Event &e) {
    subscriber_map::iterator mapIterator = subscriberMap.begin();
    for (; mapIterator != subscriberMap.end(); mapIterator++) {
        subscriber_list* subscribers = mapIterator->second;
        subscriber_list::iterator subscriber = subscribers->begin();
        for (; subscriber != subscribers->end(); subscriber++) {
            (*subscriber)->notify(e);
        }
    }
}

void Service::subscribe(std::string eventType, Notifiable *subscriber) {
    subscriber_map::iterator subscribers = subscriberMap.find(eventType);
    subscriber_list *list;
    if (subscribers == subscriberMap.end()) {
        list = new subscriber_list();
        subscriberMap.insert(std::pair<std::string, subscriber_list*>(eventType, list));
    } else {
        list = subscribers->second;
    }
    list->push_back(subscriber);
}

}