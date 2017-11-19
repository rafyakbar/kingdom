//
// Created by Rafy on 19/11/2017.
//

#include "Castle.h"

void Castle::show() {
    kastilDepan();
    kastilBelakang();
    kastilKanan();
    kastilDalam();
}

void Castle::pilar(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 5, 5, 20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX + 2.5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    glColor3ub(242,44,44);
    Basic::tabung(0, 20, 0, 3.5, 6, 4, 360/4, 1, true, true);
    glPopMatrix();
}

void Castle::tembokSampingTengah(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 20, 20, 30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX + 10, posY, posZ - 10);
    glRotatef(45,0,1,0);
    glColor3ub(242,44,44);
    Basic::tabung(0, 30, 0, 14, 18, 3, 360/4, 1, true, true);
    glPopMatrix();
}

void Castle::pipa(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX+5, posY+17.5, posZ-2.5);
    glRotatef(90,1,0,0);
    Basic::pipa(0,0,0,0.3,0.3,5,360/20,1);
    glPopMatrix();
}

void Castle::tembokSampingPintuKiri(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 25, 5, 15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX + 5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    glColor3ub(242,44,44);
    Basic::tabung(0, 15, 0, 2, 2, 2.5, 360/360, 1, true, true);
    glPopMatrix();
}

void Castle::tembokSampingPintuKanan(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX+25, posY, posZ-5);
    glRotatef(180,0,1,0);
    tembokSampingPintuKiri(0,0,0);
    glPopMatrix();

}

void Castle::pagerDepan(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(0,0,0);
    Basic::kubus(0,0,0,panjang,lebar,10);
    glPopMatrix();

}

void Castle::tembokSamping(GLfloat posX, GLfloat posY, GLfloat posZ,GLfloat panjang, GLfloat lebar,GLfloat tinggi){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(0,0,128);
    Basic::kubus(0,0,0,panjang,lebar,tinggi);
    glPopMatrix();
}

void Castle::kastilDepan() {
    //kastil belakang
    pilar(-120,0,0);
    pagerDepan(-115,0,-1,60,3);
    pilar(-55,0,0);
    pagerDepan(-54,0,-5,3,30);
    pilar(-55,0,-35);
    pagerDepan(-50,0,-36,25,3);
    tembokSampingPintuKiri(-25,0,-35);
    pipa(-25,0,-35);
    pagerDepan(-10,15,-35,30,5);
    pipa(25,0,-35);
    tembokSampingPintuKanan(10,0,-35);
    pagerDepan(35,0,-36,20,3);
    pilar(55,0,-35);
    pagerDepan(56,0,-5,3,30);
    pilar(55,0,0);
    pagerDepan(60,0,-1,60,3);
    pilar(120,0,0);
}

void Castle::kastilKanan(){
    pagerDepan(121,0,-5,3,45);
    pilar(120,0,-50);
    pagerDepan(121,0,-55,3,20);
    tembokSamping(116,0,-75,9,20,24);
    tembokSampingTengah(105,0,-95);
    tembokSamping(116,0,-115,9,20,24);
    pagerDepan(121,0,-135,3,20);
    pilar(120,0,-155);
    pagerDepan(121,0,-160,3,45);
}

void Castle::kastilBelakang(){
    glPushMatrix();
    glTranslatef(5,0,-210);
    glRotatef(180,0,1,0);
    kastilKanan();
    kastilDepan();
    glPopMatrix();

    tembokSamping(-30,0,-168,65,10,40);
    tembokSamping(-12.5,40,-168,30,10,6);
}

void Castle::pilarDalam(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX, posY, posZ);
    glColor3ub(148,124,124);
    Basic::kubus(0, 0, 0, 5, 5, 24);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX + 2.5, posY, posZ - 2.5);
    glRotatef(45,0,1,0);
    glColor3ub(255,255,0);
    Basic::tabung(0, 24, 0, 3.5, 6, 4, 360/4, 1, true, true);
    glPopMatrix();
}

void Castle::kubahKecil(GLfloat posX, GLfloat posY, GLfloat posZ){
    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(100,100,100);
    Basic::tabung(0,0,0,2,1.5,3,360/10,1,true,true);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    glColor3ub(0,140,230);
    Basic::tabung(0,3,0,2,2,1,360/10,1,true,true);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(posX,posY,posZ);
    Basic::kerucut(0,4,0,2.5,3,360/10);
    glPopMatrix();

}

void Castle::kastilDalam(){
    //belakang
    kubahKecil(5,43,-137.5);
    kubahKecil(-5,38,-137.5);
    tembokSamping(0,38,-135,10,3,7);
    tembokSamping(-10,28,-135,30,5,10);//
    kubahKecil(15,38,-137.5);
    pagerDepan(-10,18,-135,30,5);//tutup pagar
    tembokSamping(-30,0,-135,30,5,18);
    tembokSamping(-65,0,-136,45,3,15);
    pilarDalam(-70,0,-135);
    pilarDalam(70,0,-135);
    tembokSamping(40,0,-136,30,3,15);
    tembokSamping(10,0,-135,30,5,18);
    //depan
    pilarDalam(-70,0,-74);
    tembokSamping(-65,0,-75,45,3,15);
    tembokSamping(-30,0,-74,30,5,18);
    tembokSamping(-10,15,-74,30,5,15);
    kubahKecil(-5,30,-76.5);
    tembokSamping(0,30,-74,10,5,7);//menara tengah
    kubahKecil(5,35,-76.5);
    kubahKecil(15,30,-76.5);
    tembokSamping(10,0,-74,30,5,18);
    tembokSamping(40,0,-75,30,3,15);
    pilarDalam(70,0,-74);
    //samping
    tembokSamping(71,0,-79,3,56,15);
    tembokSamping(-69,0,-79,3,56,15);
}