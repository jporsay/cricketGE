#pragma once

#include <string>
#include <cstdint>

#include <physfs.h>


namespace fs {

typedef enum {
    FILE_WRITE,
    FILE_READ,
    FILE_APPEND
} FileMode;

class File {
private:
    PHYSFS_File *_pfsFile;
    std::string _fileName;
    FileMode _mode;
    uint64_t _size;
public:
    File(std::string fileName, FileMode mode);
    bool init();
    const char* getData() const;
    uint64_t getSize() const { return _size; }
    ~File();
};

}
