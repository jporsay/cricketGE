#include "Service.h"

namespace event {

Service* Service::service = 0;

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

void Service::subscribe(const std::type_info &eventType, Notifiable *subscriber) {
    subscriber_map::iterator subscribers = subscriberMap.find(eventType.name());
    subscriber_list *list;
    if (subscribers == subscriberMap.end()) {
        list = new subscriber_list();
        subscriberMap.insert(std::pair<std::string, subscriber_list*>(eventType.name(), list));
    } else {
        list = subscribers->second;
    }
    list->push_back(subscriber);
}

}