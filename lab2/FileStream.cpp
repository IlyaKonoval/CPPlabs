#include "FileStream.h"
#include <iostream>
#include <string>
#include <utility>
FileStream::FileStream(std::string fileName) : name(std::move(fileName)) {}

void FileStream::open() {
    file.open(name, std::ios::app);
}

void FileStream::close() {
    file.close();
}

bool FileStream::isFileOpened() {
    return file.is_open();
}

void FileStream::write(std::string str) {
    file << str;
}

void FileStream::write(int number) {
    file << number;
}

void FileStream::write(float number) {
    file << number;
}

void FileStream::setName(std::string fileName){
    name = std::move(fileName);
}

FileStream::~FileStream() {
    close();
};