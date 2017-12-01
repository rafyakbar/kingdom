//
// Created by Rafy on 30/11/2017.
//

#include "R2.h"
#include "../util/Util.h"
#include "../object/WindMill.h"
#include "../object/Catapult.h"
#include "../object/Tent.h"

R2::R2() {

}

void R2::show(float rotasi, GLuint *txtr) {
    //std::cout<<txtr[1]<<"\n";
    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    glPushMatrix();
    glRotatef(45,0,1,0);
    glPushMatrix();
    //glRotatef(rotasi,0,0,1);
    //WindMill::fan(0,0,5,1,1,1);
//    Catapult::model_0();
    //Basic::tabung(0,0,10,5,10,10,10,1, true, true);
//    Basic::lingkaran(0,0,10,10,10,1);
    Tent::model_0();
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
    glPopMatrix();
}