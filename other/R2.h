//
// Created by Rafy on 30/11/2017.
//

#ifndef KINGDOM_R2_H
#define KINGDOM_R2_H


#include <GL/gl.h>
#include "../camera/Camera.h"

class R2 {
public:
    R2();
    void show(float rotasi, GLuint *txtr, void setlight(void), bool siang, Camera &camera);
};


#endif //KINGDOM_R2_H
