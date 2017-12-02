//
// Created by Rafy on 19/11/2017.
//

#include "Castle.h"
#include "Pohon.h"
#include "Batu.h"
#include "Catapult.h"

void Castle::show(GLuint *txtr) {
    kastilDepan(txtr);
    kastilBelakang(txtr);
    kastilKanan(txtr);
    kastilDalam(txtr);
    Pohon::hiasPohon();
    Batu::letakBatu();
    letakKubah(txtr);
    letakRumah(txtr);
    letakRumah1(txtr);
    jalan(txtr);
//    kastil();
    alas(txtr);

}

void Castle::pilar(GLfloat posX, GLfloat posY, GLfloat posZ,GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 5, 5, 20,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX + 2.5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    glColor3ub(242,44,44);
    Basic::tabung(0, 20, 0, 3.5, 6, 4, 360/4, 1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX-1.5,posY+1,posZ+1.5);
    glRotatef(90,0,1,0);
    Basic::hiasan_1(0,23,0,8,8,0.7,5,5,5);
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

    glPushMatrix();
    glTranslatef(posX + 10, posY, posZ - 10);
    glRotatef(45,0,1,0);
    glColor3ub(242,44,44);
    Basic::tabung(0, 30, 0, 14, 18, 3, 360/4, 1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX-2.5,posY+10,posZ+2.5);
    glRotatef(90,0,1,0);
    Basic::hiasan_1(0,23,0,25,25,1,10,10,5);
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

    glPushMatrix();
    glTranslatef(posX + 5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    glColor3ub(242,44,44);
    Basic::tabung(0, 15, 0, 2, 2, 2.5, 360/360, 1, true, true,5);
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
    Basic::kubus(0,0,0,panjang,lebar,10,5);
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


    glPushMatrix();
    glColor3ub(242,44,44);
    Basic::hiasan_1(-10,25,-40,30,5,1,20,5,5);
    glPopMatrix();

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
    Pohon::pohon(140,0,-40);
    Pohon::pohon(140,0,-80);
    Pohon::pohon(140,0,-145);
    Pohon::pohon(150,0,-165);
    Pohon::pohon(140,0,-60);
    Pohon::pohon(150,0,-100);
    Pohon::pohon(150,0,-120);
    Batu::batu1(0,0,0);
    Batu::batu1(0,0,-50);
    Batu::batu1(0,0,-165);
    Batu::batu1(0,0,-120);
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

    glPushMatrix();
    glTranslatef(posX + 2.5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    glColor3ub(255,255,0);
    Basic::tabung(0, 24, 0, 3.5, 6, 4, 360/4, 1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX-1.5,posY+1,posZ+1.5);
    glRotatef(90,0,1,0);
    Basic::hiasan_1(0,27,0,8,8,0.7,5,5,5);
    glPopMatrix();

}

void Castle::kubahKecil(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(100,100,100);
    Basic::tabung(0,0,0,2,1.5,3,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(0,140,230);
    Basic::tabung(0,3,0,2,2,1,360/10,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::kerucut(0,4,0,2.5,3,360/10,5);
    glPopMatrix();

}

void Castle::kubah(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(0,140,230);
    Basic::tabung(0,0,0,3,3,20,360/20,1, true, true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(0,140,230);
    Basic::tabung(0,20,0,4,4,4,360/20,1,true,true,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::hiasan_0(0,24,0,4,4,1,360/20,5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY+24,posZ-1);
    glScalef(1,1,1);
    Catapult::model_0();
    glPopMatrix();

}
void Castle::letakKubah(GLuint *txtr) {
    kubah(-100,0,10);
    kubah(-65,0,10);
    kubah(-35,0,-15);
    kubah(40,0,-15);
    letakGazebo(-93,0,-40,txtr);
    letakGazebo(85,0,-40,txtr);
    letakGazebo(85,0,-180,txtr);
    letakGazebo(-93,0,-175,txtr);
}

void Castle::kastilDalam(GLuint *txtr){
    //belakang
    kubahKecil(5,43,-137.5);
    kubahKecil(-5,38,-137.5);
    tembokSamping(0,38,-135,10,3,7,txtr);
    Basic::hiasan_1(0,45,-140,10,5,1,10,5,5);//hiasan belakang atas
    tembokSamping(-10,28,-135,30,5,10,txtr);//
    Basic::hiasan_1(-10,38,-140,30,5,1,30,5,5);//hiasan
    kubahKecil(15,38,-137.5);
    pagerDepan(-10,18,-135,30,5,txtr);//tutup pagar
    tembokSamping(-30,0,-135,30,5,18,txtr);
    tembokSamping(-65,0,-136,45,3,15,txtr);
    pilarDalam(-70,0,-135,txtr);
    pilarDalam(70,0,-135,txtr);
    tembokSamping(40,0,-136,30,3,15,txtr);
    tembokSamping(10,0,-135,30,5,18,txtr);

    glPushMatrix();
    glScalef(1,1,1);
    Pohon::pohon(-45,0,-110);
    Pohon::pohon(45,0,-110);
    glPopMatrix();

    //depan
    pilarDalam(-70,0,-74,txtr);
    tembokSamping(-65,0,-75,45,3,15,txtr);
    tembokSamping(-30,0,-74,30,5,18,txtr);
    tembokSamping(-10,15,-74,30,5,15,txtr);
    kubahKecil(-5,30,-76.5);
    tembokSamping(0,30,-74,10,5,7,txtr);//menara tengah
    Basic::hiasan_1(0,37,-79,10,5,1,10,5,5);
    Basic::hiasan_1(-10,30,-79,30,5,1.5,20,4,5);
    kubahKecil(5,35,-76.5);
    kubahKecil(15,30,-76.5);
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

    glPushMatrix();
    glTranslatef(posX-1,posY+11,posZ-1);
    glRotatef(45,0,1,0);
    Basic::kerucut(0,0,5,6,6,360/4,5);
    glPopMatrix();
}
void Castle::letakGazebo(GLfloat posX,GLfloat posY, GLfloat posZ,GLuint *txtr){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glScalef(0.7,0.7,0.7);
    gazebo(0,0,0,txtr);
    glPopMatrix();
}
void Castle::rumah(GLfloat posX,GLfloat posY,GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX+2,posY,posZ-2);
    //tembokSamping(0,0,0,10,10,7);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX+7,posY+7,posZ-7);
    glRotatef(45,0,1,0);
    Basic::tabung(0,0,0,10,2,5,360/4,1,true,true,5);
    glPopMatrix();
}
void Castle::letakRumah1(GLuint *txtr){
    glPushMatrix();
    glTranslatef(180,0,0);
    //glRotatef(90,0,1,0);
    letakRumah(txtr);
    glPopMatrix();
}

void Castle::letakRumah(GLuint *txtr){
    rumah(-100,0,60);
    rumah(-80,0,80);
    rumah (-60,0,100);
    letakGazebo(-125,0,40,txtr);
    rumah(-115,0,95);
    rumah(-90,0,100);
    rumah(-70,0,50);
    Pohon::pohon(-55,0,65);
    Pohon::pohon(-120,0,100);
}
void Castle::jalan(GLuint *txtr){
    glPushMatrix();
    glColor3ub(148,124,124);
    Basic::kubus(-140,0,30,295,10,0.05,5);
    glPopMatrix();

    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    Basic::kubus(-90,0,-55,185,10,0.05,5);
    glBindTexture(GL_TEXTURE_2D, -1);

    Basic::kubus(-90,0,-65,10,95,0.05,5);
    Basic::kubus(85,0,-65,10,95,0.05,5);
    Basic::kubus(-80,0,-150,175,10,0.05,5);
    Basic::kubus(0,0,20,10,85,0.05,5);
    Basic::kubus(-140,0,110,10,90,0.05,5);
    Basic::kubus(-45,0,110,10,90,0.05,5);
    Basic::kubus(40,0,110,10,90,0.05,5);
    Basic::kubus(145,0,110,10,90,0.05,5);
    Basic::kubus(-140,0,120,295,10,0.05,5);
}
void Castle::alas(GLuint *txtr){
    glBindTexture(GL_TEXTURE_2D, txtr[1]);
    glPushMatrix();
    Basic::kubus(-350,0,350,700,700,0.02,5);
    glBindTexture(GL_TEXTURE_2D, -1);
    glPopMatrix();
}

void Castle::kastil(){
    glPushMatrix();
    Basic::kubus(-30,0,-95,25,25,25,5);
    glPopMatrix();

    glPushMatrix();
    Basic::kubus(20,0,-95,25,25,25,5);
    glPopMatrix();

    glPushMatrix();
    Basic::kubus(-30.5,25,-94.5,26,26,5,5);
    glPopMatrix();
}
