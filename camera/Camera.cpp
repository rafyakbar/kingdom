//
// Created by Rafy on 19/11/2017.
//

#include <iostream>
#include "Camera.h"
Camera::Camera(GLfloat distance, GLfloat look_speed) {
    jarakAsli = distance;
    jarakXZ = jarakAsli * cos(derajatUpDown * PIper180);
    lookSpeed = look_speed;
}

void Camera::update(){
    gluLookAt(kameraX, kameraY + 1, kameraZ,
              (lookX + kameraX), (lookY + kameraY), lookZ + kameraZ,
              0, 1, 0.0
    );
}

void Camera::walkForward(){
    kameraZ += (cos(derajatLeftRight * PIper180));
    kameraX += (sin(derajatLeftRight * PIper180));
}

void Camera::walkBackward(){
    kameraZ -= (cos(derajatLeftRight * PIper180));
    kameraX -= (sin(derajatLeftRight * PIper180));
}

void Camera::walkLeftward(){
    kameraX += (cos(derajatLeftRight * PIper180));
    kameraZ -= (sin(derajatLeftRight * PIper180));
}

void Camera::walkRightward(){
    kameraX -= (cos(derajatLeftRight * PIper180));
    kameraZ += (sin(derajatLeftRight * PIper180));
}

void Camera::up(){
    kameraY++;
}

void Camera::down(){
    kameraY--;
}

void Camera::lookLeft(){
    derajatLeftRight += lookSpeed;
    lookX = jarakXZ * sin(derajatLeftRight * PIper180);
    lookZ = jarakXZ * cos(derajatLeftRight * PIper180);
}

void Camera::lookRight(){
    derajatLeftRight -= lookSpeed;
    lookX = jarakXZ * sin(derajatLeftRight * PIper180);
    lookZ = jarakXZ * cos(derajatLeftRight * PIper180);
}

void Camera::lookUp(){
    if (derajatUpDown < 89) {
        derajatUpDown += lookSpeed;
        jarakXZ = jarakAsli * cos(derajatUpDown * PIper180);
        lookX = jarakXZ * sin(derajatLeftRight * PIper180);
        lookY = jarakAsli * sin(derajatUpDown * PIper180);
        lookZ = jarakXZ * cos(derajatLeftRight * PIper180);
    }
}

void Camera::lookDown(){
    if (derajatUpDown > -89) {
        derajatUpDown -= lookSpeed;
        jarakXZ = jarakAsli * cos(derajatUpDown * PIper180);
        lookX = jarakXZ * sin(derajatLeftRight * PIper180);
        lookY = jarakAsli * sin(derajatUpDown * PIper180);
        lookZ = jarakXZ * cos(derajatLeftRight * PIper180);
    }
}