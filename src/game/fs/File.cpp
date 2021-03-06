#include <asteroids/fs/File.h>

#include <iostream>

namespace fs {

File::File(std::string fileName, FileMode mode) :
_fileName(fileName),
_mode(mode),
_pfsFile(0) {}

bool File::init() {
    if (_pfsFile != 0) {
        return true;
    }
    if (_mode == FILE_READ) {
        _pfsFile = PHYSFS_openRead(_fileName.c_str());
    } else if (_mode == FILE_APPEND) {
        _pfsFile = PHYSFS_openAppend(_fileName.c_str());
    } else if (_mode == FILE_WRITE) {
        _pfsFile = PHYSFS_openWrite(_fileName.c_str());
    } else {
        _pfsFile = NULL;
    }

    bool ret = _pfsFile != NULL;
    if (_pfsFile != NULL) {
        _size = PHYSFS_fileLength(_pfsFile);
    }
    return ret;
}

const char* File::getData() const {
    char * data = new char[this->getSize()];
    int read = PHYSFS_read(_pfsFile, data, 1, this->getSize());
    if (read != this->getSize()) {
        return 0;
    }
    return data;
}

File::~File() {
    PHYSFS_close(_pfsFile);
}

}
