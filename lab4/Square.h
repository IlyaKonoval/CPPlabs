#ifndef LAB4_SQUARE_H
#define LAB4_SQUARE_H

class Figure {
public:
    double a, b;
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Rectangle : public Figure {
public:
    double getArea();
    double getPerimeter();
};

#endif //LAB4_SQUARE_H
