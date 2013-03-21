#pragma once

namespace config {

class Config {
private:
    struct {
        int height = 800;
        int width = 600;
        bool fullscreen = true;
    } Window;
public:
    void setWindowHeight(int val);
    int getWindowHeight();
    void setWindowWidth(int val);
    int getWindowWidth();
    void setFullscreen(bool val);
    bool isFullscreen();
};

}
