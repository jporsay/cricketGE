#include <asteroids/config/ConfigLoader.h>
#include <iostream>

// http://jsoncpp.sourceforge.net/

namespace config {

Config* ConfigLoader::load(const char* config) {
    Json::Value root;
    Json::Reader reader;
    if (!reader.parse(config, root)) {
        return 0;
    }
    Config* conf = new Config();
    this->loadWindow(root, conf);
    return conf;
}

void ConfigLoader::loadWindow(Json::Value& root, Config* conf) {
    Json::Value v = root["window"];
    conf->setWindowHeight(v.get("height", 600).asInt());
    conf->setWindowWidth(v.get("width", 800).asInt());
    conf->setFullscreen(v.get("fullscreen", false).asBool());
}

}
