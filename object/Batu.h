//
// Created by Rafy on 18/11/2017.
//

#ifndef KINGDOM_BATU_H
#define KINGDOM_BATU_H

#include <GL/glut.h>

class Batu {
public:
    static void model_0();
    static void model_1();
    static void batu(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void batu1Besar(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void batu1Kecil(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void pindahBatu(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void susunBatu();
    static void batu1(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void letakBatu(GLuint *txtr);
};


#endif //KINGDOM_BATU_H
