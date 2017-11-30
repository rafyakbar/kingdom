#include <GL/glut.h>
#include <math.h>
#include <iostream>

#include "camera/Camera.h"
#include "material/Material.h"
#include "object/Basic.h"
#include "object/Batu.h"
#include "object/Pohon.h"
#include "object/Castle.h"
#include "object/WindMill.h"
#include "object/Catapult.h"
#include "other/R2.h"
#include "other/R1.h"

using namespace std;

GLfloat PIper180 = M_PI / 180.0;

GLfloat rotasiX = 0, rotasiY = 0;
GLfloat derajatMatahari = 0, matahariX = 0, matahariY = 0, matahariZ = 50, tinggiMatahari = 75;
GLfloat kecepatan = 0;

Camera camera(50, 1.5);
R2 r2;
R1 r1;

GLuint wood, rock;

constexpr float operator "" _deg(long double d) {
    return d * M_PI / 180;
}

void init() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_TEXTURE_2D);

    glColorMaterial(GL_FRONT_AND_BACK, GL_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);

    glClearColor(1.0, 1.0, 1.0, 1.0);

    wood = Util::loadBmpFile("../texture/wood.bmp");

    glBindTexture(GL_TEXTURE_2D, -1);
}

GLfloat posMatX;
GLfloat posMatY;
GLfloat posMatZ;

void setlight() {
    GLfloat light_ambient[] = {0.0, 0.0, 0.0, 1.0};
    GLfloat light_diffuse[] = {1.0, 1.0, 1.0, 1.0};
    GLfloat light_specular[] = {1.0, 1.0, 1.0, 1.0};
    posMatX = (GLfloat)matahariX + (tinggiMatahari * cos(derajatMatahari * PIper180));
    posMatY = (GLfloat)matahariY + (tinggiMatahari * sin(derajatMatahari * PIper180));
    posMatZ = (GLfloat)matahariZ;
    GLfloat light_position[] = {posMatX, posMatY, posMatZ};
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    camera.update();

    Basic::line(500, 500, 5);

    setlight();

    r1.show();
    r2.show(rotasiX, wood);

    glFlush();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(45, (GLfloat) w / (GLfloat) h, 1.0, 5000.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void keys(unsigned char key, int x, int y) {
    if (key == 'w' || key == 'W') { ;
        camera.walkForward();
    }

    if (key == 's' || key == 'S') {
        camera.walkBackward();
    }

    if (key == 'a' || key == 'A') {
        camera.walkLeftward();
    }
    if (key == 'd' || key == 'D') {
        camera.walkRightward();
    }

    if (key == 'e' || key == 'E')
        camera.up();
    if (key == 'q' || key == 'Q')
        camera.down();

    if (key == 'i' || key == 'I')
        matahariY++;
    if (key == 'k' || key == 'K')
        matahariY--;
    if (key == 'j' || key == 'J')
        matahariX--;
    if (key == 'l' || key == 'L')
        matahariX++;
    if (key == 'u' || key == 'U')
        matahariZ--;
    if (key == 'o' || key == 'O')
        matahariZ++;

    if (key == '=' || key == '+')
        tinggiMatahari += 1;
    if (key == '-' || key == '_')
        tinggiMatahari -= 1;

    if (key == '.' || key == '>')
        kecepatan += 0.1;
    if (key == ',' || key == '<')
        kecepatan -= 0.1;
}

void specialkeys(int key, int x, int y) {
    switch (key) {

        case GLUT_KEY_UP:
            camera.lookUp();
            break;
        case GLUT_KEY_DOWN:
            camera.lookDown();
            break;
        case GLUT_KEY_RIGHT:
            camera.lookRight();
            break;
        case GLUT_KEY_LEFT:
            camera.lookLeft();
            break;
    }
}

void idle() {
    rotasiY += 0.5 + kecepatan;
    rotasiX += 0.5 + kecepatan;
    derajatMatahari -= 0.1 + kecepatan;
    glutPostRedisplay();
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - 700) / 2, (glutGet(GLUT_SCREEN_HEIGHT) - 700) / 2);
    glutInitWindowSize(700, 700);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Kingdom");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keys);
    glutSpecialFunc(specialkeys);
    glutIdleFunc(idle);
    glutMainLoop();

    return 0;
}
