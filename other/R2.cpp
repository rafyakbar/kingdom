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

#define MAX_X 1000
#define MAX_Y 100
#define MAX_Z 1000
#define SLOWER 10

R2::R2() {
    generateParticle();
}


constexpr float operator "" _rgb(long double d) {
    return d / 255;
}

void R2::randomize(int x, int y) {
    tetes[x][y].tinggi = ((float) (Util::acak(0, 50))) / 10;
    tetes[x][y].x = Util::acak(0, MAX_X);
    tetes[x][y].y = (x == 0) ? Util::acak(5, MAX_Y) : (tetes[x - 1][y].y - tetes[x][y].tinggi - 0.25);
    tetes[x][y].z = Util::acak(0, MAX_Z);
}

void R2::generateParticle() {
    for (int i = 0; i < MAX_T; ++i) {
        for (int j = 0; j < MAX_RINTIK; ++j) {
            randomize(i,j);
        }
    }
}

void R2::hujan() {
    for (int i = 0; i < MAX_T; ++i) {
        for (int j = 0; j < MAX_RINTIK; ++j) {
            glColor4ub(255,255,255,0.4);
            glBegin(GL_LINES);
            glVertex3f(tetes[i][j].x, tetes[i][j].y, tetes[i][j].z);
            glVertex3f(tetes[i][j].x, tetes[i][j].y + tetes[i][j].tinggi, tetes[i][j].z);
            glEnd();
            if (slower % SLOWER == 0)
                randomize(i,j);
        }
    }
}

void flashlight() {
    float LightAmbient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
    float LightEmission[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    float LightDiffuse[] = { 1.0f, 1.0f, 0.8f, 1.0f };
    float LightSpecular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    float LightPos[] = { 0.0f, 0.0f, 0.0f };
    float dirVector[]={ 0.0, 1.0, 0.0, 0.0};
    glLightfv(GL_LIGHT2, GL_AMBIENT, LightAmbient);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, LightDiffuse);
    glLightfv(GL_LIGHT2, GL_SPECULAR, LightSpecular);
    glLightfv(GL_LIGHT2, GL_POSITION, LightPos);
    glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, 20.0);
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

void R2::pintu(int rotasiPintu, GLuint *txtr) {
    glPushMatrix();
    glTranslatef(-5,0,0);
    glRotatef(rotasiPintu, 0,1,0);
    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    Basic::kubus(0,0,0,5,1,10,10);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,0,0);
    glRotatef(-rotasiPintu,0,1,0);
    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    Basic::kubus(0,0,0,-5,1,10,10);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void R2::show(float rotasi, GLuint *txtr, void setlight(void), bool siang, Camera &camera, bool senter, int &musim, int rotasiPintu) {
    GLfloat light_ambient[] = {0.0, 0.0, 0.0, 1.0};
    GLfloat light_diffuse[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_specular[] = {0.5, 0.5, 0.5, 1.0};
    GLfloat light_position[] = {0.0, 1000.0, 100.0};
    glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT1);

    glPushMatrix();
    glTranslatef(5,0,-37);
    glScalef(1,1.5,1);
    pintu(rotasiPintu, txtr);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, 42.5, -105);
    glScalef(5, 5, 5);
    glBindTexture(GL_TEXTURE_2D, txtr[10]);
    Bridge::model_0();
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    if (musim != 0){
        glPushMatrix();
        glTranslatef(-(MAX_X / 2), 0, -(MAX_Z / 2));
        if (musim == 1)
            hujan();
        slower++;
        glPopMatrix();
    }

    if (!siang) {
        if (senter) {
            glPushMatrix();
            glTranslatef(camera.getPosX(), camera.getPosY(), camera.getPosZ());
            glRotatef(-(camera.getLookX() + camera.getPosX()), 0.0, 1.0, 0.0);
//            std::cout<<camera.getPosX()<<" "<<camera.getPosY()<<" "<<camera.getPosZ()<<"\n";
            glPushMatrix();
            glTranslatef(0, 1, -1.25);
            glScalef(0.005, 0.005, 0.005);
            glRotatef(270, 1.0, 0.0, 0.0);
            glPushMatrix();
            flashlight();
            glPopMatrix();
            glPopMatrix();
            glPopMatrix();
        } else {
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
    }
}