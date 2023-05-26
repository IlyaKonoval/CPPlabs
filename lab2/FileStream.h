#ifndef LAB2_FILESTREAM_H
#define LAB2_FILESTREAM_H
#include <iostream>
#include <string>
#include <fstream>

class FileStream {
private:
    std::fstream file;
    std::string name;
public:
    FileStream();

    explicit FileStream(std::string);

    void open();

    void close();

    bool isFileOpened();

    void write(std::string);

    void write(int);

    void write(float);

    void setName(std::string);

    ~FileStream();
};


#endif //LAB2_FILESTREAM_H
