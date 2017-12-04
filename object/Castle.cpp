//
// Created by Rafy on 19/11/2017.
//

#include "Castle.h"
#include "Pohon.h"
#include "Batu.h"
#include "Catapult.h"
#include "Tent.h"
#include "WindMill.h"
GLfloat theta=0.0;

void Castle::show(GLuint *txtr) {
    kastilDepan(txtr);
    kastilBelakang(txtr);
    kastilKanan(txtr);
    kastilDalam(txtr);
    Pohon::hiasPohon(txtr);
    Batu::letakBatu(txtr);
    letakKubah(txtr);
    letakRumah(txtr);
    letakRumah1(txtr);
    jalan(txtr);
    alas(txtr);
    tent(-55,0,100,txtr);
    tent(-55,0,85,txtr);
    tent(-55,0,70,txtr);
    windmill(-125,0,105,txtr);
    rumah(120,0,100,txtr);

}

void Castle::pilar(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 5, 5, 20,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[9]);
    glPushMatrix();
    glTranslatef(posX + 2.5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
   //glColor3ub(242,44,44);
    Basic::tabung(0, 20, 0, 3.5, 6, 4, 360/4, 1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX-1.5,posY+1,posZ+1.5);
    glRotatef(90,0,1,0);
    Basic::hiasan_1(0,23,0,8,8,0.7,5,5,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

}

void Castle::tembokSampingTengah(GLfloat posX, GLfloat posY, GLfloat posZ, GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 20, 20, 30,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[9]);
    glPushMatrix();
    glTranslatef(posX + 10, posY, posZ - 10);
    glRotatef(45,0,1,0);
    Basic::tabung(0, 30, 0, 14, 18, 3, 360/4, 1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX-2.5,posY+10,posZ+2.5);
    glRotatef(90,0,1,0);
    Basic::hiasan_1(0,23,0,25,25,1,10,10,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

}

void Castle::pipa(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX+5, posY+17.5, posZ-2.5);
    glRotatef(90,1,0,0);
    Basic::pipa(0,0,0,0.3,0.3,5,360/20,1,5);
    glPopMatrix();
}

void Castle::tembokSampingPintuKiri(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 25, 5, 15,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    glPushMatrix();
    glTranslatef(posX + 5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    Basic::tabung(0, 15, 0, 2, 2, 2.5, 360/360, 1, true, true,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void Castle::tembokSampingPintuKanan(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glPushMatrix();
    glTranslatef(posX+25, posY, posZ-5);
    glRotatef(180,0,1,0);
    tembokSampingPintuKiri(0,0,0,txtr);
    glPopMatrix();

}

void Castle::pagerDepan(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0,0,0,panjang,lebar,15,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

}

void Castle::tembokSamping(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLfloat tinggi,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0,0,0,panjang,lebar,tinggi,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void Castle::tembokSamping1(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLfloat tinggi,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[4]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::kubus(0,0,0,panjang,lebar,tinggi,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void Castle::kastilDepan(GLuint *txtr) {
    //kastil belakang
    pilar(-120,0,0,txtr);
    pilar(-55,0,0,txtr);
    pilar(-55,0,-35,txtr);
    pagerDepan(-115,0,-1,60,3,txtr);
    pagerDepan(-54,0,-5,3,30,txtr);
    pagerDepan(-50,0,-36,25,3,txtr);
    pagerDepan(-10,15,-35,30,5,txtr);
    tembokSampingPintuKiri(-25,0,-35,txtr);
    pipa(-25,0,-35);


    pipa(25,0,-35);
    tembokSampingPintuKanan(10,0,-35,txtr);
    pagerDepan(35,0,-36,20,3,txtr);
    pilar(55,0,-35,txtr);
    pagerDepan(56,0,-5,3,30,txtr);
    pilar(55,0,0,txtr);
    pagerDepan(60,0,-1,60,3,txtr);
    pilar(120,0,0,txtr);
}

void Castle::kastilKanan(GLuint *txtr){
    pagerDepan(121,0,-5,3,45,txtr);
    pilar(120,0,-50,txtr);
    pagerDepan(121,0,-55,3,20,txtr);
    Pohon::pohon(140,0,-40,txtr);
    Pohon::pohon(140,0,-80,txtr);
    Pohon::pohon(140,0,-145,txtr);
    Pohon::pohon(150,0,-165,txtr);
    Pohon::pohon(140,0,-60,txtr);
    Pohon::pohon(150,0,-100,txtr);
    Pohon::pohon(150,0,-120,txtr);
    Batu::batu1(0,0,0,txtr);
    Batu::batu1(0,0,-50,txtr);
    Batu::batu1(0,0,-165,txtr);
    Batu::batu1(0,0,-120,txtr);
    tembokSamping(116,0,-75,9,20,24,txtr);
    tembokSampingTengah(105,0,-95,txtr);
    tembokSamping(116,0,-115,9,20,24,txtr);
    pagerDepan(121,0,-135,3,20,txtr);
    pilar(120,0,-155,txtr);
    pagerDepan(121,0,-160,3,45,txtr);
}

void Castle::kastilBelakang(GLuint *txtr){
    glPushMatrix();
    glTranslatef(5,0,-210);
    glRotatef(180,0,1,0);
    kastilKanan(txtr);
    kastilDepan(txtr);
    glPopMatrix();

    tembokSamping(-30,0,-168,65,10,40,txtr);
    tembokSamping(-12.5,40,-168,30,10,6,txtr);
}

void Castle::pilarDalam(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 5, 5, 24,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[9]);
    glPushMatrix();
    glTranslatef(posX + 2.5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    Basic::tabung(0, 24, 0, 3.5, 6, 4, 360/4, 1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX-1.5,posY+1,posZ+1.5);
    glRotatef(90,0,1,0);
    Basic::hiasan_1(0,27,0,8,8,0.7,5,5,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

}

void Castle::kubahKecil(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,0,0,2,1.5,3,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,3,0,2,2,1,360/10,1,true,true,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[7]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::kerucut(0,4,0,2.5,3,360/10,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::pipa(0,7,0,0.05,0.05,3,360/10,1,5);
    glPopMatrix();


}

void Castle::kubah(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,0,0,3,3,21,360/20,1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,21,0,4,4,3,360/20,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::hiasan_0(0,24,0,4,4,1,360/20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,12,0,1,4,4,360/20,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::hiasan_0(0,16,0,4,4,2,360/10,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::hiasan_0(0,9,0,4,4,2,360/10,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,0,0,5,3.5,5,360/20,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,5,0,1,4,4,360/20,1,true,true,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    glPushMatrix();
    glTranslatef(posX,posY+24,posZ-1);
    glScalef(0.75,0.75,0.75);
    Catapult::model_0();
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

}
void Castle::letakKubah(GLuint *txtr) {
    kubah(-100,0,10,txtr);
    kubah(-65,0,10,txtr);
    kubah(-35,0,-15,txtr);
    kubah(40,0,-15,txtr);
    kubah(70,0,10,txtr);
    kubah(105,0,10,txtr);
    letakGazebo(-93,0,-40,txtr);
    letakGazebo(85,0,-40,txtr);
    letakGazebo(85,0,-180,txtr);
    letakGazebo(-93,0,-175,txtr);
}

void Castle::kastilDalam(GLuint *txtr){
    //belakang
    kubahKecil(5,43,-137.5,txtr);
    kubahKecil(-5,38,-137.5,txtr);
    tembokSamping(0,38,-135.5,10,4,7,txtr);
    tembokSamping(-10,28,-135,30,5,10,txtr);//
    kubahKecil(15,38,-137.5,txtr);
    pagerDepan(-10,18,-135,30,5,txtr);//tutup pagar
    tembokSamping(-30,0,-135,30,5,18,txtr);
    tembokSamping(-65,0,-136,45,3,15,txtr);
    pilarDalam(-70,0,-135,txtr);
    pilarDalam(70,0,-135,txtr);
    tembokSamping(40,0,-136,30,3,15,txtr);
    tembokSamping(10,0,-135,30,5,18,txtr);

    glPushMatrix();
    glScalef(1,1,1);
    Pohon::pohon(-45,0,-110,txtr);
    Pohon::pohon(45,0,-110,txtr);
    glPopMatrix();

    //depan
    pilarDalam(-70,0,-74,txtr);
    tembokSamping(-65,0,-75,45,3,15,txtr);
    tembokSamping(-30,0,-74,30,5,18,txtr);
    tembokSamping(-10,15,-74,30,5,15,txtr);
    kubahKecil(-5,30,-76.5,txtr);
    tembokSamping(0,30,-74.5,10,4,7,txtr);//menara tengah

    glPushMatrix();
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    Basic::hiasan_1(-10,38,-140,30,5,1,30,5,5);//hiasan belakang bawah
    Basic::hiasan_1(0,37,-78.5,10,4,1,10,5,5);//hiasan depan atas
    Basic::hiasan_1(-10,30,-79,30,5,1.5,20,4,5);//hiasan depan bawah
    Basic::hiasan_1(0,45,-139.5,10,4,1,10,5,5);//hiasan belakang atas
    Basic::hiasan_1(-10,25,-40,30,5,1,20,5,5);//hiasan depan
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    kubahKecil(5,35,-76.5,txtr);
    kubahKecil(15,30,-76.5,txtr);
    tembokSamping(10,0,-74,30,5,18,txtr);
    tembokSamping(40,0,-75,30,3,15,txtr);
    pilarDalam(70,0,-74,txtr);
    //samping
    tembokSamping(71,0,-79,3,56,15,txtr);
    tembokSamping(-69,0,-79,3,56,15,txtr);
}

void Castle::gazebo(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr) {
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    tembokSamping(-1,0,6,7,7,5,txtr);//lantai
    tembokSamping(-1,10,6,7,7,1,txtr);//atap
    tembokSamping(-1,0,6.5,7,0.5,4,txtr);
    tembokSamping(-1,0,7,7,0.5,3,txtr);
    tembokSamping(-1,0,7.5,7,0.5,2,txtr);
    tembokSamping(-1,0,8,7,0.5,1,txtr);
    Basic::tabung(0,0,0,0.5,0.5,10,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX+5,posY,posZ);
    Basic::tabung(0,0,0,0.5,0.5,10,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ+5);
    Basic::tabung(0,0,0,0.5,0.5,10,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX+5,posY,posZ+5);
    Basic::tabung(0,0,0,0.5,0.5,10,360/10,1,true,true,5);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[7]);
    glPushMatrix();
    glTranslatef(posX-1,posY+11,posZ-1);
    glRotatef(45,0,1,0);
    Basic::kerucut(0,0,5,6,6,360/4,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}
void Castle::letakGazebo(GLfloat posX,GLfloat posY, GLfloat posZ,GLuint *txtr){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glScalef(0.7,0.7,0.7);
    gazebo(0,0,0,txtr);
    glPopMatrix();
}
void Castle::rumah(GLfloat posX,GLfloat posY,GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[4]);
    glPushMatrix();
    glTranslatef(posX+2,posY,posZ-2);
    tembokSamping1(0,0,0,10,10,7,txtr);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[7]);
    glPushMatrix();
    glTranslatef(posX+7,posY+7,posZ-7);
    glRotatef(45,0,1,0);
    Basic::tabung(0,0,0,10,2,5,360/4,1,true,true,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}
void Castle::letakRumah1(GLuint *txtr){
    glPushMatrix();
    glTranslatef(180,0,0);
    letakRumah(txtr);

    glPushMatrix();
    glTranslatef(-50,0,180);
    glRotatef(270,0,1,0);
    windmill(-140,0,80,txtr);
    tent(-110,0,70,txtr);
    tent(-125,0,70,txtr);
    tent(-95,0,70,txtr);
    glPopMatrix();
    glPopMatrix();
}


void Castle::tent(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glRotatef(45,0,1,0);
    glScalef(1.2,1.2,1.2);
    Tent::model_0();
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void Castle::letakRumah(GLuint *txtr){
    rumah(-100,0,60,txtr);
    rumah(-80,0,80,txtr);
    rumah (-80,0,100,txtr);
    letakGazebo(-125,0,40,txtr);

    //rumah(-105,0,95,txtr);
    rumah(-100,0,105,txtr);
    rumah(-70,0,50,txtr);
    glPushMatrix();
    Pohon::pohon(-60,0,60,txtr);
    Pohon::pohon(-120,0,100,txtr);
    glPopMatrix();
}
void Castle::jalan(GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[3]);
    glPushMatrix();
    glColor3ub(148,124,124);
    Basic::kubus(-140,0,30,295,10,0.05,5);
    Basic::kubus(-90,0,-55,185,10,0.05,5);
    Basic::kubus(-90,0,-65,10,95,0.05,5);
    Basic::kubus(85,0,-65,10,95,0.05,5);
    Basic::kubus(-80,0,-150,175,10,0.05,5);
    Basic::kubus(0,0,20,10,85,0.05,5);
    Basic::kubus(-140,0,110,10,90,0.05,5);
    Basic::kubus(-45,0,110,10,90,0.05,5);
    Basic::kubus(40,0,110,10,90,0.05,5);
    Basic::kubus(145,0,110,10,90,0.05,5);
    Basic::kubus(-140,0,120,295,10,0.05,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}
void Castle::alas(GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[6]);
    glPushMatrix();
    Basic::kubus(-350,0,350,700,700,0.02,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void Castle::bunga(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){

    glBindTexture(GL_TEXTURE_2D, txtr[11]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,0,0,0.1,0.1,2,360/20,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,2,0,0.1,0.5,0.5,360/30,1,true,true,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    //glColor3ub(255,215,0);
    Basic::bola(0,2.5,0,0.3,360/30,0.5,true,5);
    glPopMatrix();
}

void  Castle::windmill(GLfloat posX, GLfloat posY,GLfloat posZ, GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[12]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ+125);
    glRotatef(225,0,1,0);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,0,0,4,2,20,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::tabung(0,4,0,6,6,1,360/20,1,true,true,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[13]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::hiasan_0(0,5,0,6,6,2,20,5);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::hiasan_0(0,0,0,4,6,4,20,5);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::kubus(-0.5,20,0,1,3,1,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[10]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::kerucut(0,20,0,2,5,360/8,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[0]);
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glPushMatrix();
    glTranslatef(0,20,-3);
    glRotatef(theta++,0,0,1);
    WindMill::fan(0,0,0,1.5,1.5,0.3);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
}

void Castle::letakBunga(GLuint *txtr){
    bunga(0,0,-10,txtr);
    bunga(0,0,-20,txtr);
    bunga(0,0,0,txtr);
    bunga(0,0,10,txtr);
    bunga(0,0,20,txtr);
    bunga(10,0,-10,txtr);
    bunga(10,0,-20,txtr);
    bunga(10,0,0,txtr);
    bunga(10,0,10,txtr);
    bunga(10,0,20,txtr);
}


