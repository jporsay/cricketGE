#pragma once

#include <physfs.h>
#include <string>

namespace fs {

class FS {
private:
    static FS* _instance;
    bool _initialized = false;
public:
    static FS* inst() {if (_instance == 0) _instance = new FS(); return _instance;}
    bool initialize(std::string org, std::string appName, std::string archiveExt, char const *argv[]);
    inline const char * getLastError() { return PHYSFS_getLastError(); };
    bool mount(std::string folder, std::string location, bool absolutePath = false, bool appendToSearchPath = true);
};

}
