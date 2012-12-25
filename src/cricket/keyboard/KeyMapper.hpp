#pragma once

#include <map>

namespace keyboard {

using namespace std;

template<typename T, typename J>
class KeyMapper {
private:
    map<T, J> mapping;
public:
    virtual void initMapper() = 0;

    void addMapping(T key, J value) {
        mapping.insert(pair<T, J>(key, value));
    }

    J getValue(T key) {
        typename map<T, J>::iterator it = mapping.find(key);
        if (it != mapping.end()) {
            return *it;
        } else {
            return 0;
        }
    }
};

}
