//
// Created by Rafy on 30/11/2017.
//

#include "R2.h"
#include "../util/Util.h"
#include "../object/WindMill.h"
#include "../object/Catapult.h"

R2::R2() {

}

void R2::show(float rotasi, GLuint &wood) {
    glBindTexture(GL_TEXTURE_2D, wood);
    glPushMatrix();
    glRotatef(45,0,1,0);
    glPushMatrix();
    glRotatef(rotasi,0,0,1);
    WindMill::fan(0,0,5,1,1,1);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
    glPopMatrix();
}