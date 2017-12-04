//
// Created by Rafy on 11/11/2017.
//

#include "Material.h"
#include <GL/glut.h>

void Material::defaultMaterial() {
    float MatAmbient[] = { 0.2f,0.2f,0.2f,1.0f};
    float MatDiffuse[] = { 0.8f,0.8f,0.8f,1.0f  };
    float MatSpecular[] = { 0.0f,0.0f,0.0f,1.0f  };
    float MatShininess = 0.0f;
    float black[] = {0.0f,0.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, MatAmbient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, MatDiffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, MatSpecular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, MatShininess);
    glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, black);
}

void Material::yellowLamp() {
    float MatSpecular[] = { 1.0, 1.0, 1.0, 1.0  };
    float MatShininess = 50.0f;
    float yellow[] = {1.0f,1.0f,0.0f,1.0f};
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, MatSpecular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, MatShininess);
    glMaterialfv(GL_FRONT_AND_BACK, GL_EMISSION, yellow);
}

void Material::emerald() {
    GLfloat amb[]={0.0215f,0.1745f,0.0215f,1.0f};
    GLfloat diff[]={0.07568f,0.61424f,0.07568f,1.0f};
    GLfloat spec[]={0.633f,0.727811f,0.633f,1.0f};
    GLfloat shine=76.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::jade() {
    GLfloat amb[]={0.135f,0.2225f,0.1575f,1.0f};
    GLfloat diff[]={0.54f,0.89f,0.63f,1.0f};
    GLfloat spec[]={0.316228f,0.316228f,0.316228f,1.0f};
    GLfloat shine=12.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::obsidian() {
    GLfloat amb[]={0.05375f,0.05f,0.06625f,1.0f};
    GLfloat diff[]={0.18275f,0.17f,0.22525f,1.0f};
    GLfloat spec[]={0.332741f,0.328634f,0.346435f,1.0f};
    GLfloat shine=38.4f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::pearl() {
    GLfloat amb[]={0.05375f,0.05f,0.06625f,1.0f};
    GLfloat diff[]={0.18275f,0.17f,0.22525f,1.0f};
    GLfloat spec[]={0.332741f,0.328634f,0.346435f,1.0f};
    GLfloat shine=38.4f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::ruby() {
    GLfloat amb[]={0.1745f,0.01175f,0.01175f,1.0f};
    GLfloat diff[]={0.61424f,0.04136f,0.04136f,1.0f};
    GLfloat spec[]={0.727811f,0.626959f,0.626959f,1.0f};
    GLfloat shine=76.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::turquoise() {
    GLfloat amb[]={0.1f,0.18725f,0.1745f,1.0f};
    GLfloat diff[]={0.396f,0.74151f,0.69102f,1.0f};
    GLfloat spec[]={0.297254f,0.30829f,0.306678f,1.0f};
    GLfloat shine=12.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::brass() {
    GLfloat amb[]={0.329412f,0.223529f,0.027451f,1.0f};
    GLfloat diff[]={0.780392f,0.568627f,0.113725f,1.0f};
    GLfloat spec[]={0.992157f,0.941176f,0.807843f,1.0f};
    GLfloat shine=27.8974f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::bronze() {
    GLfloat amb[]={0.2125f,0.1275f,0.054f,1.0f};
    GLfloat diff[]={0.714f,0.4284f,0.18144f,1.0f};
    GLfloat spec[]={0.393548f,0.271906f,0.166721f,1.0f};
    GLfloat shine=25.6f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::chrome() {
    GLfloat amb[]={0.25f,0.25f,0.25f,1.0f};
    GLfloat diff[]={0.4f,0.4f,0.4f,1.0f};
    GLfloat spec[]={0.774597f,0.774597f,0.774597f,1.0f};
    GLfloat shine=76.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::copper() {
    GLfloat amb[]={0.19125f,0.0735f,0.0225f,1.0f};
    GLfloat diff[]={0.7038f,0.27048f,0.0828f,1.0f};
    GLfloat spec[]={0.256777f,0.137622f,0.086014f,1.0f};
    GLfloat shine=12.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::gold() {
    GLfloat amb[]={0.24725f,0.1995f,0.0745f,1.0f};
    GLfloat diff[]={0.75164f,0.60648f,0.22648f,1.0f};
    GLfloat spec[]={0.628281f,0.555802f,0.366065f,1.0f};
    GLfloat shine=51.2f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::silver() {
    GLfloat amb[]={0.19225f,0.19225f,0.19225f,1.0f};
    GLfloat diff[]={0.50754f,0.50754f,0.50754f,1.0f};
    GLfloat spec[]={0.508273f,0.508273f,0.508273f,1.0f};
    GLfloat shine=51.2f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::blackPlastic() {
    GLfloat amb[]={0.0f,0.0f,0.0f,1.0f};
    GLfloat diff[]={0.01f,0.01f,0.01f,1.0f};
    GLfloat spec[]={0.5f,0.5f,0.5f,1.0f};
    GLfloat shine=32.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::cyanPlastic() {
    GLfloat amb[]={0.0f,0.1f,0.06f,1.0f};
    GLfloat diff[]={1.0f,0.509804f,0.509804f,1.0f};
    GLfloat spec[]={0.501961f,0.501961f,1.0f,1.0f};
    GLfloat shine=32.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::greenPlastic() {
    GLfloat amb[]={0.0f,0.0f,0.0f,1.0f};
    GLfloat diff[]={0.1f,0.35f,0.1f,1.0f};
    GLfloat spec[]={0.45f,0.55f,0.45f,1.0f};
    GLfloat shine=32.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::redPlastic() {
    GLfloat amb[]={0.0f,0.0f,0.0f,1.0f};
    GLfloat diff[]={0.5f,0.0f,0.0f,1.0f};
    GLfloat spec[]={0.7f,0.6f,0.6f,1.0f};
    GLfloat shine=32.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::whitePlastic() {
    GLfloat amb[]={0.0f,0.0f,0.0f,1.0f};
    GLfloat diff[]={0.55f,0.55f,0.55f,1.0f};
    GLfloat spec[]={0.7f,0.7f,0.7f,1.0f};
    GLfloat shine=32.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::yellowPlastic() {
    GLfloat amb[]={0.0f,0.0f,0.0f,1.0f};
    GLfloat diff[]={0.5f,0.5f,0.0f,1.0f};
    GLfloat spec[]={0.6f,0.6f,0.5f,1.0f};
    GLfloat shine=32.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::blackRubber() {
    GLfloat amb[]={0.02f,0.02f,0.02f,1.0f};
    GLfloat diff[]={0.01f,0.01f,0.01f,1.0f};
    GLfloat spec[]={0.4f,0.4f,0.4f,1.0f};
    GLfloat shine=10.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::cyanRubber() {
    GLfloat amb[]={0.0f,0.05f,0.05f,1.0f};
    GLfloat diff[]={0.4f,0.5f,0.5f,1.0f};
    GLfloat spec[]={0.04f,0.7f,0.7f,1.0f};
    GLfloat shine=10.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::greenRubber() {
    GLfloat amb[]={0.0f,0.05f,0.0f,1.0f};
    GLfloat diff[]={0.4f,0.5f,0.4f,1.0f};
    GLfloat spec[]={0.04f,0.7f,0.04f,1.0f};
    GLfloat shine=10.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::redRubber() {
    GLfloat amb[]={0.05f,0.0f,0.0f,1.0f};
    GLfloat diff[]={0.5f,0.4f,0.4f,1.0f};
    GLfloat spec[]={0.7f,0.04f,0.04f,1.0f};
    GLfloat shine=10.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::whiteRubber() {
    GLfloat amb[]={0.05f,0.05f,0.05f,1.0f};
    GLfloat diff[]={0.5f,0.5f,0.5f,1.0f};
    GLfloat spec[]={0.7f,0.7f,0.7f,1.0f};
    GLfloat shine=10.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::yellowRubber() {
    GLfloat amb[]={0.05f,0.05f,0.0f,1.0f};
    GLfloat diff[]={0.5f,0.5f,0.4f,1.0f};
    GLfloat spec[]={0.7f,0.7f,0.04f,1.0f};
    GLfloat shine=10.0f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::brightWhite() {
    GLfloat amb[]={0.2f,0.2f,0.2f,1.0f};
    GLfloat diff[]={1.0f,1.0f,1.0f,1.0f};
    GLfloat spec[]={0.8f,0.8f,0.8f,1.0f};
    GLfloat shine=51.2f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::lessBrightWhite() {
    GLfloat amb[]={0.2f,0.2f,0.2f,1.0f};
    GLfloat diff[]={0.8f,0.8f,0.8f,1.0f};
    GLfloat spec[]={0.5f,0.5f,0.5f,1.0f};
    GLfloat shine=44.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::warmWhite() {
    GLfloat amb[]={0.3f,0.2f,0.2f,1.0f};
    GLfloat diff[]={1.0f,0.9f,0.8f,1.0f};
    GLfloat spec[]={0.4f,0.2f,0.2f,1.0f};
    GLfloat shine=44.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}

void Material::coolWhite() {
    GLfloat amb[]={0.2f,0.2f,0.3f,1.0f};
    GLfloat diff[]={0.8f,0.9f,1.0f,1.0f};
    GLfloat spec[]={0.2f,0.2f,0.4f,1.0f};
    GLfloat shine=44.8f;
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,amb);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diff);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,spec);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,shine);
}