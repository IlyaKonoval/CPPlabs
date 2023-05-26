#ifndef LAB3_COMPLEX_H
#define LAB3_COMPLEX_H


class Complex {
public:
    double re;
    double im;
public:
    Complex();
    double module();
    Complex operator+ (Complex &num);
    Complex operator* (int &x);
    Complex operator* (Complex &num);
};


#endif //LAB3_COMPLEX_H
