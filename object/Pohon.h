//
// Created by Rafy on 18/11/2017.
//

#ifndef KINGDOM_POHON_H
#define KINGDOM_POHON_H

#include <GL/glut.h>
#include <GL/glu.h>

class Pohon {
public:
    static void model_0();
    static void model_1(GLuint *txtr);
    static void pohon(GLfloat posX, GLfloat posY, GLfloat posZ, GLuint *txtr);
    static void hiasPohon(GLuint *txtr);
};


#endif //KINGDOM_POHON_H
