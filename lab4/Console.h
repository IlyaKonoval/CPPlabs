#ifndef LAB4_CONSOLE_H
#define LAB4_CONSOLE_H
#include <iostream>
#include "Square.h"
class Console {
public:
    void Print(double x);
    void Print(std::string string);
    void Get(double &x);

};
#endif //LAB4_CONSOLE_H
