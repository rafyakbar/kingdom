//
// Created by Rafy on 21/11/2017.
//

#include <GL/glut.h>
#include "Util.h"
#include "math.h"

void Util::doNormalize(float *v) {
    float length = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);

    for (int i = 0; i < 3; i++) {
        v[i] = v[i] / length;
    }
}

float *Util::cross_product(float *a, float *b) {
    float result[] = {a[1] * b[2] - a[2] * b[1], -(a[0] * b[2] - a[2] * b[0]), a[0] * b[1] - a[1] * b[0]};
    doNormalize(result);

    return result;
}

float *Util::calculate_normal(float *a, float *b, float *c) {
    float x[] = {b[0] - a[0], b[1] - a[1], b[2] - a[2]};
    float y[] = {c[0] - a[0], c[1] - a[1], c[2] - a[2]};

    float *result = cross_product(x, y);

    return result;
}