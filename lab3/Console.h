#ifndef LAB3_CONSOLE_H
#define LAB3_CONSOLE_H
#include "Matrix.h"
#include "Complex.h"
#include <iostream>
class Console {
public:
    void Print(Matrix *matrix);
    void Get(Matrix &matrix);
    void Print(Complex *x);
    void Get(Complex &x);
};
#endif //LAB3_CONSOLE_H
