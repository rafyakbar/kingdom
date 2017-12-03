//
// Created by Rafy on 30/11/2017.
//

#include "R2.h"
#include "../util/Util.h"
#include "../object/WindMill.h"
#include "../object/Catapult.h"
#include "../object/Tent.h"
#include "../object/Bridge.h"

R2::R2() {

}

constexpr float operator "" _rgb(long double d) {
    return d / 255;
}

void layer(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar,
           GLfloat texture_scale) {
    GLfloat vertices[][3] = {
            {posX,           posY,         posZ},
            {posX + panjang, posY,         posZ},
            {posX + panjang, posY + lebar, posZ},
            {posX,           posY + lebar, posZ}
    };
    float textcoord[][2] = {
            {0, 0},
            {1, 0},
            {1, 1},
            {0, 1}
    };

    glBegin(GL_POLYGON);
    glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
    for (int i = 0; i < 4; ++i) {
        glTexCoord2f(textcoord[i][0], textcoord[i][1]);
        glVertex3fv(vertices[i]);
    }
    glEnd();
}

void R2::show(float rotasi, GLuint *txtr, void setlight(void), bool siang) {
    //Basic::line(500, 500, 5);

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

    if (!siang){
        setlight();
    } else{
        glDisable(GL_LIGHTING);
        glDisable(GL_LIGHT0);
    }

    glPushMatrix();
    glTranslatef(0,35,-105);
    glScalef(7,7,7);
    glBindTexture(GL_TEXTURE_2D, txtr[10]);
    Bridge::model_0();
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    if (siang)
        glClearColor(249.0_rgb,251.0_rgb,252.0_rgb,1);
    else{
        glClearColor(12.0_rgb, 15.0_rgb, 28.0_rgb, 1);
        int perbesar = 5;
        glPushMatrix();
        glBindTexture(GL_TEXTURE_2D, txtr[2]);
        layer(-1100 * perbesar / 2, 0, -1000, 1100 * perbesar, 500 * perbesar, 10000);
        glBindTexture(GL_TEXTURE_2D, -1);
        glPopMatrix();
    }
}