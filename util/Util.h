//
// Created by Rafy on 21/11/2017.
//

#ifndef KINGDOM_UTIL_H
#define KINGDOM_UTIL_H

class Util {
public:
    //normal
    static void doNormalize(float *v);
    static float *cross_product(float *a, float *b);
    static float *calculate_normal(float *a, float *b, float *c);
    static GLuint loadBmpFile(const char* fileName);
    static int acak(int min, int max);
};


#endif //KINGDOM_UTIL_H
