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
    static void show(GLuint *txtr);
    static void pilar(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void tembokSampingTengah(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void pipa(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void pipa1(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void tembokSampingPintuKiri(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void tembokSampingPintuKanan(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void pagerDepan(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLuint *txtr);
    static void tembokSamping(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLfloat tinggi,GLuint *txtr);
    static void kastilDepan(GLuint *txtr) ;
    static void kastilKanan(GLuint *txtr);
    static void kastilBelakang(GLuint *txtr);
    static void pilarDalam(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void kubahKecil(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void kubah(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void gazebo(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void letakGazebo(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr);
    static void kastilDalam(GLuint *txtr);
    static void letakKubah(GLuint *txtr);
    static void jalan(GLuint *txtr);
    static void alas();
    static void rumah(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void letakRumah(GLuint *txtr);
    static void letakRumah1(GLuint *txtr);
    static void susunBatu();
    static void pindahBatu(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void scaledPohon(GLfloat posX, GLfloat posY, GLfloat posZ);
    static void hiasPohon();
};


#endif //KINGDOM_CASTLE_H
