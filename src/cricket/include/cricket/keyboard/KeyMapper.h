#pragma once

#include <map>
#include "Keys.h"
namespace keyboard {

using namespace std;

template<typename T>
class KeyMapper {

public:
    virtual const Key getKey(T key) const = 0;
};

}
