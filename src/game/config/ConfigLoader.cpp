#include <asteroids/config/ConfigLoader.h>
#include <iostream>

// http://jsoncpp.sourceforge.net/

namespace config {

const Config* load(const char* config) {
    Json::Value root;
    Json::Reader reader;
    if (!reader.parse(config, root)) {
        return 0;
    }
    Config* conf = new Config();

    return conf;
}

}
