#pragma once

#include <map>

namespace keyboard {

using namespace std;

template<class T, class J>
class KeyMapper {
private:
    map<T, J> mapping;
public:
    void addMapping(T key, J value) {
        mapping.insert(pair<T, J>(key, value));
    }

    J get(T key) {

    }
};

}
