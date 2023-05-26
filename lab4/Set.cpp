#include "Set.h"
void Set::Add(Rectangle R) {
    self.push_back(R);
}
double Set::areaSum() {
    double result = 0;
    int k = self.size();
    for (int i = 0; i < k; i++) {
        result += self[i].getArea();
    }
    return result;
}
double Set::perimeterSum() {
    double result = 0;
    for (int i = 0; i < self.size(); i++) {
        result += self[i].getPerimeter();
    }
    return result;
}
