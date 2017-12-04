//
// Created by Rafy on 19/11/2017.
//

#ifndef KINGDOM_CAMERA_H
#define KINGDOM_CAMERA_H

#include <GL/glut.h>
#include "math.h"

class Camera {
public:
    Camera(GLfloat distance, GLfloat look_speed);
    void update();
    void walkForward();
    void walkBackward();
    void walkLeftward();
    void walkRightward();
    void up();
    void down();
    void lookLeft();
    void lookRight();
    void lookUp();
    void lookDown();
    float getLookX();
    float getLookY();
    float getLookZ();
    float getPosX();
    float getPosY();
    float getPosZ();

protected:
    GLfloat derajatUpDown = -1, derajatLeftRight = -180;
    GLfloat jarakAsli = 50, jarakXZ = 0;
    GLfloat lookX = 0, lookY = 0, lookZ = -jarakAsli;
    GLfloat kameraX = 0, kameraY = 0, kameraZ = jarakAsli;
    GLfloat lookSpeed = 1;

private:
    GLfloat PIper180 = M_PI / 180.0;

};


#endif //KINGDOM_CAMERA_H
