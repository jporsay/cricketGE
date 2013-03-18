#include <cricket/event/Service.h>
namespace event {

Service* Service::service = 0;

void Service::publish(const Event &e) {
    subscriber_map::iterator mapIterator = subscriberMap.find(e.getType());
    for (; mapIterator != subscriberMap.end(); mapIterator++) {
        subscriber_list* subscribers = mapIterator->second;
        subscriber_list::iterator subscriber = subscribers->begin();
        for (; subscriber != subscribers->end(); subscriber++) {
            (*subscriber)->notify(e);
        }
    }
}

void Service::subscribe(const event::EventType::Type eventType, Notifiable *subscriber) {
    subscriber_map::iterator subscribers = subscriberMap.find(eventType);
    subscriber_list *list;
    if (subscribers == subscriberMap.end()) {
        list = new subscriber_list();
        subscriberMap.insert(std::pair<event::EventType::Type, subscriber_list*>(eventType, list));
    } else {
        list = subscribers->second;
    }
    list->push_back(subscriber);
}

}
