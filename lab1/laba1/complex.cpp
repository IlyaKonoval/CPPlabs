//
// Created by Чемпион on 11.03.2023.
//

#include "complex.h"
void complex::conj_complex_point(double *re, double *im) {
    *im = -(*im);
}

void complex::conj_complex_link(double &re, double &im) {
    im = -im;
}