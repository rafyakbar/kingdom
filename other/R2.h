//
// Created by Rafy on 30/11/2017.
//

#ifndef KINGDOM_R2_H
#define KINGDOM_R2_H


#include <GL/gl.h>
#include "../camera/Camera.h"
#define MAX_RINTIK 600
#define MAX_T 10
#define MAX_SNAIL 25

class R2 {
public:
    R2();
    void show(float rotasi, GLuint *txtr, void setlight(void), bool siang, Camera &camera, bool senter, int &musim, int rotasiPintu);

private:
    typedef struct {
        GLfloat x, y, z, tinggi;
    } Tetes;
    Tetes tetes[MAX_T][MAX_RINTIK];
    int slower = 0;
    void randomize(int x, int y);
    void generateParticle();
    void hujan();
    void pintu(int rotasiPintu, GLuint *txtr);
    float snailCoordinate[MAX_SNAIL][2];
    bool flagSnail = true;
    float thetaSnail = 0;
};


#endif //KINGDOM_R2_H
