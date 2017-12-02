//
// Created by Rafy on 10/11/2017.
//

#ifndef KINGDOM_OBJECT_H
#define KINGDOM_OBJECT_H

#include <GL/glut.h>
#include <GL/glu.h>
#include "../util/Util.h"
#include <math.h>
#include <iostream>

class Basic {
public:
    // 2D
    static void line(int panjang, int lebar, int detail);
    static void lingkaran(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat detail, GLfloat keutuhan, GLfloat texture_scale);
    static void kotakVertikalDepan(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat texture_scale);
    static void kotakVertikalSamping(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat texture_scale);
    static void kotakHorizontal(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat texture_scale);

    // 3D
    static void pipa(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari_bawah, GLfloat jari_jari_atas, GLfloat tinggi, GLfloat detail, GLfloat keutuhan, GLfloat texture_scale);
    static void tabung(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari_bawah, GLfloat jari_jari_atas, GLfloat tinggi, GLfloat detail, GLfloat keutuhan, bool tutup_atas, bool tutup_bawah, GLfloat texture_scale);
    static void kerucut(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat tinggi, GLfloat detail, GLfloat texture_scale);
    static void kubus(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat tinggi, GLfloat texture_scale);
    static void bola(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat detail, GLfloat keutuhan, bool tutup_bola, GLfloat texture_scale);
    static void kristal(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat tinggi, GLfloat detail, GLfloat texture_scale);

    // hiasan
    static void hiasan_0(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari_bawah, GLfloat jari_jari_atas, GLfloat tinggi, GLfloat jumlah_sisi, GLfloat texture_scale);
    static void hiasan_1(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat tinggi, GLfloat jumlah_sisi_panjang, GLfloat jumlah_sisi_lebar, GLfloat texture_scale);
};


#endif //KINGDOM_OBJECT_H
