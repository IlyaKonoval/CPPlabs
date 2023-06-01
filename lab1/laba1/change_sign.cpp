//
// Created by Чемпион on 11.03.2023.
//

#include "change_sign.h"
int change_sign::change_int_point(const int *x) {
    return (~(*x)) +1;
}
int change_sign::change_int_link(int x) {
    return (~x) + 1;
}

float change_sign::change_float_point(float *x){
    return *x * -1.0f;
}

float change_sign::change_float_link(float x) {
    return x * -1.0f;
}