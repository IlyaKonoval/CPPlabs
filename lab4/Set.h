#ifndef LAB4_SET_H
#define LAB4_SET_H
#include "Square.h"
#include <vector>

class Set {
public:
    std::vector<Rectangle> self;
    void Add(Rectangle R);
    double areaSum();
    double perimeterSum();
};
#endif //LAB4_SET_H
