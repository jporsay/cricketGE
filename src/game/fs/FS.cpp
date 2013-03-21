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
    return PHYSFS_mount(folder.c_str(), location.c_str(), appendToSearchPath) != 0;
}

const std::string FS::getRealFilePath(std::string file) const {
    const char* path = PHYSFS_getRealDir(file.c_str());
    if (path == 0) {
        return std::string();
    }
    return std::string(path).append(std::string(PHYSFS_getDirSeparator())).append(file);
}

File* FS::getFile(std::string filePath, FileMode mode) const {
    File* f = new File(filePath, mode);
    if (!f->init()) {
        return 0;
    }
    return f;
}

void FS::shutDown() {
    PHYSFS_deinit();
}

FS::~FS() {
}

}
