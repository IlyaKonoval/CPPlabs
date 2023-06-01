#ifndef LAB2_SERVICE_H
#define LAB2_SERVICE_H
#include "FileStream.cpp"
class Service {
private:
    FileStream file_stream;
    bool processAction();
public:
    Service();
    Service(std::string);
    void run();
};


#endif //LAB2_SERVICE_H
