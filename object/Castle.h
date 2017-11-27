//
// Created by Rafy on 19/11/2017.
//

#ifndef KINGDOM_CASTLE_H
#define KINGDOM_CASTLE_H

#include <GL/glut.h>
#include <GL/glu.h>
#include "Basic.h"

class Castle {
public:
    static void show();
    static void pilar(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void tembokSampingTengah(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void pipa(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void pipa1(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void tembokSampingPintuKiri(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void tembokSampingPintuKanan(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void pagerDepan(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar);
    static void tembokSamping(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLfloat tinggi);
    static void kastilDepan() ;
    static void kastilKanan();
    static void kastilBelakang();
    static void pilarDalam(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void kubahKecil(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void kastilDalam();
    static void pohon();
    static void hiasBatu();
    static void batu(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void susunBatu();
    static void pindahBatu(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void scaledPohon(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void hiasPohon();
};


#endif //KINGDOM_CASTLE_H
