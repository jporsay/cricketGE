#include <asteroids/fs/FS.h>

#include <iostream>

namespace fs {

FS* FS::_instance = 0;

bool FS::initialize(std::string org, std::string appName, std::string archiveExt, char const *argv[]) {
    bool ret;
    if (!_initialized) {
        _initialized = true;
        ret = PHYSFS_init(argv[0]) != 0;
        if (ret) {
            PHYSFS_setSaneConfig(org.c_str(), appName.c_str(), archiveExt.c_str(), 0, 0);
        }
    } else {
        ret = PHYSFS_isInit() != 0;
    }
    return ret;
}

bool FS::mount(std::string folder, std::string location, bool absolutePath, bool appendToSearchPath) {
    if (!absolutePath) {
        folder = std::string(PHYSFS_getBaseDir()).append(folder);
    }
    std::cout << folder << std::endl;
    return PHYSFS_mount(folder.c_str(), location.c_str(), appendToSearchPath) != 0;
}

FS::~FS() {
    PHYSFS_deinit();
}

}
