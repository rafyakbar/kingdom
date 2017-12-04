//
// Created by Rafy on 30/11/2017.
//

#include <cstdlib>
#include "R2.h"
#include "../util/Util.h"
#include "../object/WindMill.h"
#include "../object/Catapult.h"
#include "../object/Tent.h"
#include "../object/Bridge.h"
#include "../material/Material.h"

#define MAX_X 10
#define MAX_Y 5
#define MAX_Z 10

R2::R2() {
    tetesan();
}



constexpr float operator "" _rgb(long double d) {
    return d / 255;
}

void R2::tetesan() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 100; ++j) {
            tetes[i][j].x = Util::acak(0, MAX_X);
            tetes[i][j].y = Util::acak(0, MAX_Y);
            tetes[i][j].z = Util::acak(0, MAX_Z);
            tetes[i][j].tinggi = ((float)(Util::acak(0, 50))) / 10;
        }
    }
}

void R2::hujan() {

}

void flashlight() {
    float LightAmbient[] = {0.2f, 0.2f, 0.2f, 1.0f};
    float LightEmission[] = {1.0f, 1.0f, 1.0f, 1.0f};
    float LightDiffuse[] = {1.0f, 1.0f, 0.8f, 1.0f};
    float LightSpecular[] = {1.0f, 1.0f, 1.0f, 1.0f};
    float LightPos[] = {0.0f, 0.0f, 0.0f};
    float dirVector[] = {0.0, 1.0, 0.0, 0.0};
    glLightfv(GL_LIGHT2, GL_AMBIENT, LightAmbient);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, LightDiffuse);
    glLightfv(GL_LIGHT2, GL_SPECULAR, LightSpecular);
    glLightfv(GL_LIGHT2, GL_POSITION, LightPos);
    glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, 15.0);
    glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, dirVector);
    glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, 1);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT2);

    Material::yellowLamp();
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glutSolidSphere(20.0, 20, 16);
    glPopMatrix();

    Material::defaultMaterial();
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glRotatef(90, 1.0, 0.0, 0.0);
    GLUquadric *qobj = gluNewQuadric();
    gluQuadricNormals(qobj, GLU_SMOOTH);
    gluCylinder(qobj, 24.0, 5.0, 50.0, 20, 20);
    glPopMatrix();
}

void R2::show(float rotasi, GLuint *txtr, void setlight(void), bool siang, Camera &camera, bool senter) {
    GLfloat light_ambient[] = {0.0, 0.0, 0.0, 1.0};
    GLfloat light_diffuse[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_specular[] = {0.5, 0.5, 0.5, 1.0};
    GLfloat light_position[] = {0.0, 1000.0, 0.0};
    glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT1);

    glPushMatrix();
    glTranslatef(0, 42.5, -105);
    glScalef(5, 5, 5);
    glBindTexture(GL_TEXTURE_2D, txtr[10]);
    Bridge::model_0();
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    if (!siang) {
        if (senter){
            glPushMatrix();
            glTranslatef(camera.getPosX(), camera.getPosY(), camera.getPosZ());
            glRotatef(-(camera.getLookX() + camera.getPosX()), 0.0, 1.0, 0.0);
            glPushMatrix();
            glTranslatef(0,1,-1.25);
            glScalef(0.005,0.005,0.005);
            glRotatef(270, 1.0, 0.0, 0.0);
            flashlight();
            glPopMatrix();
            glPopMatrix();
        } else{
            glDisable(GL_LIGHT2);
        }
    } else {
        glDisable(GL_LIGHT0);
        glDisable(GL_LIGHT2);
    }
    setlight();

    if (siang)
        glClearColor(249.0_rgb, 251.0_rgb, 252.0_rgb, 1);
    else {
        glClearColor(26.0_rgb, 25.0_rgb, 44.0_rgb, 1);
        int perbesar = 5;
        glPushMatrix();
        glBindTexture(GL_TEXTURE_2D, txtr[2]);
        Basic::layer(-1100 * perbesar / 2, 0, -1000, 1100 * perbesar, 500 * perbesar, 10000);
        glBindTexture(GL_TEXTURE_2D, -1);
        glPopMatrix();
    }
}