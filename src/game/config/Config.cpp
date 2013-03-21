#include <asteroids/config/Config.h>

namespace config {

void Config::setWindowHeight(int val) {
    if (val <= 0) return;
    Window.height = val;
}

int Config::getWindowHeight() {
    return Window.height;
}

void Config::setWindowWidth(int val) {
    if (val <= 0) return;
    Window.width = val;
}

int Config::getWindowWidth() {
    return Window.width;
}

void Config::setFullscreen(bool val) {
    Window.fullscreen = val;
}

bool Config::isFullscreen() {
    return Window.fullscreen;
}

}
