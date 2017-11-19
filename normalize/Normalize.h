//
// Created by Rafy on 19/11/2017.
//

#ifndef KINGDOM_NORMALIZE_H
#define KINGDOM_NORMALIZE_H


class Normalize {
public:
    static void doNormalize(float *v);
    static float *cross_product(float *a, float *b);
    static float *calculate_normal(float *a, float *b, float *c);
};


#endif //KINGDOM_NORMALIZE_H
