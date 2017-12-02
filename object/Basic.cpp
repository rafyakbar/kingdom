//
// Created by Rafy on 10/11/2017.
//

#include "Basic.h"

using namespace std;

void Basic::line(int panjang, int lebar, int detail) {
    for (int c = 0; c < panjang; c += detail) {
        glBegin(GL_LINES);
        glVertex3f(-panjang / 2, -0.1, (lebar / 2) - c);
        glVertex3f(panjang / 2, -0.1, (lebar / 2) - c);
        glEnd();
    }
    for (int c = 0; c < lebar; c += detail) {
        glBegin(GL_LINES);
        glVertex3f((panjang / 2) - c, -0.1, -lebar / 2);
        glVertex3f((panjang / 2) - c, -0.1, lebar / 2);
        glEnd();
    }
}

void Basic::lingkaran(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat detail,
                      GLfloat keutuhan, GLfloat texture_scale) {
    keutuhan = (keutuhan > 1) ? 1 : keutuhan;
    glBegin(GL_POLYGON);
    for (GLfloat sudut = -detail; sudut < 360 * keutuhan; sudut += detail) {
        GLfloat x = jari_jari * cos((sudut + detail) * M_PI / 180);
        GLfloat z = jari_jari * sin((sudut + detail) * M_PI / 180);
        glNormal3f(posX + x, posY, posZ + z);
        glTexCoord2f(x / texture_scale, z / texture_scale);
        glVertex3f(posX + x, posY, posZ + z);
    }
    glEnd();
}

void
Basic::kotakVertikalSamping(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar,
                            GLfloat texture_scale) {
    GLfloat vertices[][3] = {
            {posX, posY,         posZ},
            {posX, posY,         posZ + panjang},
            {posX, posY + lebar, posZ + panjang},
            {posX, posY + lebar, posZ}
    };

    glBegin(GL_POLYGON);
    glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
    for (int i = 0; i < 4; ++i) {
        glTexCoord2f(vertices[i][0] / texture_scale, vertices[i][1] / texture_scale);
        glVertex3fv(vertices[i]);
    }
    glEnd();
}

void Basic::kotakVertikalDepan(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar,
                               GLfloat texture_scale) {
    GLfloat vertices[][3] = {
            {posX,           posY,         posZ},
            {posX + panjang, posY,         posZ},
            {posX + panjang, posY + lebar, posZ},
            {posX,           posY + lebar, posZ}
    };

    glBegin(GL_POLYGON);
    glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
    for (int i = 0; i < 4; ++i) {
        glTexCoord2f(vertices[i][0] / texture_scale, vertices[i][1] / texture_scale);
        glVertex3fv(vertices[i]);
    }
    glEnd();
}

void
Basic::kotakHorizontal(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar,
                       GLfloat texture_scale) {
    GLfloat vertices[][3] = {
            {posX,           posY, posZ},
            {posX + panjang, posY, posZ},
            {posX + panjang, posY, posZ - lebar},
            {posX,           posY, posZ - lebar}
    };

    glBegin(GL_POLYGON);
    glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
    for (int i = 0; i < 4; ++i) {
        glTexCoord2f(vertices[i][0] / texture_scale, vertices[i][1] / texture_scale);
        glVertex3fv(vertices[i]);
    }
    glEnd();
}

using namespace std;

void
Basic::pipa(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari_bawah, GLfloat jari_jari_atas, GLfloat tinggi,
            GLfloat detail, GLfloat keutuhan, GLfloat texture_scale) {
    keutuhan = (keutuhan > 1) ? 1 : keutuhan;
    GLfloat Xsebelum = jari_jari_bawah;
    GLfloat Zsebelum = 0;
    int jumlahLooping = 0;
    for (GLfloat sudut = 0; sudut < 360 * keutuhan; sudut += detail) {
        GLfloat XsebelumAtas = jari_jari_atas * cos((sudut) * M_PI / 180);
        GLfloat ZsebelumAtas = jari_jari_atas * sin((sudut) * M_PI / 180);
        GLfloat Xsesudah = jari_jari_bawah * cos((sudut + detail) * M_PI / 180);
        GLfloat Zsesudah = jari_jari_bawah * sin((sudut + detail) * M_PI / 180);
        GLfloat XsesudahAtas = jari_jari_atas * cos((sudut + detail) * M_PI / 180);
        GLfloat ZsesudahAtas = jari_jari_atas * sin((sudut + detail) * M_PI / 180);
        GLfloat vertices[][3] = {
                {Xsebelum + posX,     posY,          Zsebelum + posZ},
                {Xsesudah + posX,     posY,          Zsesudah + posZ},
                {XsesudahAtas + posX, posY + tinggi, ZsesudahAtas + posZ},
                {XsebelumAtas + posX, posY + tinggi, ZsebelumAtas + posZ}
        };

        glBegin(GL_POLYGON);
        glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
        for (int i = 0; i < 4; ++i) {
            glTexCoord2f(vertices[i][0] / texture_scale, vertices[i][1] / texture_scale);
            glVertex3fv(vertices[i]);
        }
        glEnd();
        Xsebelum = Xsesudah;
        Zsebelum = Zsesudah;
        jumlahLooping++;
    }
}

void
Basic::tabung(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari_bawah, GLfloat jari_jari_atas,
              GLfloat tinggi, GLfloat detail, GLfloat keutuhan, bool tutup_atas, bool tutup_bawah, GLfloat texture_scale) {
    if (tutup_atas)
        Basic::lingkaran(posX, posY + tinggi, posZ, jari_jari_atas, detail, keutuhan, texture_scale);

    pipa(posX, posY, posZ, jari_jari_bawah, jari_jari_atas, tinggi, detail, keutuhan, texture_scale);

    if (tutup_bawah)
        Basic::lingkaran(posX, posY, posZ, jari_jari_bawah, detail, keutuhan, texture_scale);

    if (keutuhan < 1) {
        GLfloat vertices[][3] = {
                {posX + jari_jari_bawah,                                      posY,          posZ},
                {posX + (jari_jari_bawah * cos(360 * keutuhan * M_PI / 180)), posY,
                                                                                             posZ + (jari_jari_bawah *
                                                                                                     sin(360 *
                                                                                                         keutuhan *
                                                                                                         M_PI / 180))},
                {posX + (jari_jari_atas * cos(360 * keutuhan * M_PI / 180)),  posY + tinggi,
                                                                                             posZ + (jari_jari_atas *
                                                                                                     sin(360 *
                                                                                                         keutuhan *
                                                                                                         M_PI / 180))},
                {posX + jari_jari_atas,                                       posY + tinggi, posZ}
        };
        glBegin(GL_POLYGON);
        glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
        for (int i = 0; i < 4; ++i) {
            glTexCoord2f(vertices[i][0]/texture_scale, vertices[i][1]/texture_scale);
            glVertex3fv(vertices[i]);
        }
        glEnd();
    }
}

void
Basic::kerucut(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat tinggi, GLfloat detail, GLfloat texture_scale) {
    GLfloat Xsebelum = jari_jari;
    GLfloat Zsebelum = 0;
    for (GLfloat sudut = 0; sudut <= 360; sudut += detail) {
        GLfloat Xsesudah = jari_jari * cos((sudut + detail) * M_PI / 180);
        GLfloat Zsesudah = jari_jari * sin((sudut + detail) * M_PI / 180);
        glBegin(GL_POLYGON);
        glNormal3f(Xsebelum + posX, posY, Zsebelum + posZ);
        glTexCoord2f((Xsebelum + posX)/texture_scale, posY/texture_scale);
        glVertex3f(Xsebelum + posX, posY, Zsebelum + posZ);

        glNormal3f(Xsesudah + posX, posY, Zsesudah + posZ);
        glTexCoord2f((Xsesudah + posX)/texture_scale, posY/texture_scale);
        glVertex3f(Xsesudah + posX, posY, Zsesudah + posZ);

        glNormal3f(posX, posY + tinggi, posZ);
        glTexCoord2f(posX / texture_scale, (posY + tinggi)/texture_scale);
        glVertex3f(posX, posY + tinggi, posZ);
        glEnd();
        Xsebelum = Xsesudah;
        Zsebelum = Zsesudah;
    }
    Basic::lingkaran(posX, posY, posZ, jari_jari, detail, 1, texture_scale);
}

void Basic::kubus(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat tinggi, GLfloat texture_scale) {
    GLfloat vertices[][6][3] = {
            {//sisi bawah
                    {posX,           posY,          posZ},
                    {posX + panjang, posY,          posZ},
                    {posX + panjang, posY,          posZ - lebar},
                    {posX,           posY,          posZ - lebar},
            },
            {//sisi atas
                    {posX,           posY + tinggi, posZ},
                    {posX + panjang, posY + tinggi, posZ},
                    {posX + panjang, posY + tinggi, posZ - lebar},
                    {posX,           posY + tinggi, posZ - lebar},
            },
            {//sisi samping kiri
                    {posX,           posY,          posZ},
                    {posX,           posY,          posZ - lebar},
                    {posX,           posY + tinggi, posZ - lebar},
                    {posX,           posY + tinggi, posZ},
            },
            {//sisi samping kanan
                    {posX + panjang, posY,          posZ},
                    {posX + panjang, posY,          posZ - lebar},
                    {posX + panjang, posY + tinggi, posZ - lebar},
                    {posX + panjang, posY + tinggi, posZ},
            },
            {//sisi depan
                    {posX,           posY,          posZ},
                    {posX + panjang, posY,          posZ},
                    {posX + panjang, posY + tinggi, posZ},
                    {posX,           posY + tinggi, posZ},
            },
            {//sisi belakang
                    {posX,           posY,          posZ - lebar},
                    {posX + panjang, posY,          posZ - lebar},
                    {posX + panjang, posY + tinggi, posZ - lebar},
                    {posX,           posY + tinggi, posZ - lebar},
            }
    };
    for (int i = 0; i < 6; ++i) {
        glBegin(GL_POLYGON);
        glNormal3fv(Util::calculate_normal(vertices[i][0], vertices[i][1], vertices[i][2]));
        for (int j = 0; j < 4; ++j) {
            if (i == 0 || i == 1)
                glTexCoord2f(vertices[i][j][0]/texture_scale, vertices[i][j][2]/texture_scale);
            else if (i == 2 || i == 3)
                glTexCoord2f(vertices[i][j][2]/texture_scale, vertices[i][j][1]/texture_scale);
            else
                glTexCoord2f(vertices[i][j][0]/texture_scale, vertices[i][j][1]/texture_scale);
            glVertex3fv(vertices[i][j]);
        }
        glEnd();
    }
}

void Basic::bola(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat detail, GLfloat keutuhan,
                 bool tutup_bola, GLfloat texture_scale) {
    GLfloat derajat_mulai = 90 - (180 * ((keutuhan > 1) ? 1 : keutuhan));
    tutup_bola = (keutuhan == 1) ? false : tutup_bola;
    for (GLfloat c = derajat_mulai; c <= 90; c += detail) {
        GLfloat jarakX = jari_jari * cos(c * M_PI / 180);
        GLfloat jarakY = jari_jari * sin(c * M_PI / 180);
        for (GLfloat i = 0; i <= 360; i += detail) {
            glBegin(GL_POLYGON);

            GLfloat koordinatXbawahKiri = jarakX * cos(i * M_PI / 180);
            GLfloat koordinatZbawahKiri = jarakX * sin(i * M_PI / 180);
            glNormal3f(koordinatXbawahKiri + posX, posY + jarakY, posZ + koordinatZbawahKiri);
            glTexCoord2f((koordinatXbawahKiri + posX)/texture_scale, (posY + jarakY)/texture_scale);
            glVertex3f(koordinatXbawahKiri + posX, posY + jarakY, posZ + koordinatZbawahKiri);

            GLfloat jarakXatas = jari_jari * cos((c + detail) * M_PI / 180);
            GLfloat jarakYatas = jari_jari * sin((c + detail) * M_PI / 180);

            GLfloat koordinatXatasKiri = jarakXatas * cos(i * M_PI / 180);
            GLfloat koordinatZatasKiri = jarakXatas * sin(i * M_PI / 180);
            glNormal3f(koordinatXatasKiri + posX, posY + jarakYatas, posZ + koordinatZatasKiri);
            glTexCoord2f((koordinatXatasKiri + posX)/texture_scale, (posY + jarakYatas)/texture_scale);
            glVertex3f(koordinatXatasKiri + posX, posY + jarakYatas, posZ + koordinatZatasKiri);

            GLfloat koordinatXatasKanan = jarakXatas * cos((i + detail) * M_PI / 180);
            GLfloat koordinatZatasKanan = jarakXatas * sin((i + detail) * M_PI / 180);
            glNormal3f(koordinatXatasKanan + posX, posY + jarakYatas, posZ + koordinatZatasKanan);
            glTexCoord2f((koordinatXatasKanan + posX)/texture_scale, (posY + jarakYatas)/texture_scale);
            glVertex3f(koordinatXatasKanan + posX, posY + jarakYatas, posZ + koordinatZatasKanan);

            GLfloat koordinatXbawahKanan = jarakX * cos((i + detail) * M_PI / 180);
            GLfloat koordinatZbawahKanan = jarakX * sin((i + detail) * M_PI / 180);
            glNormal3f(koordinatXbawahKanan + posX, posY + jarakY, posZ + koordinatZbawahKanan);
            glTexCoord2f((koordinatXbawahKanan + posX)/texture_scale, (posY + jarakY)/texture_scale);
            glVertex3f(koordinatXbawahKanan + posX, posY + jarakY, posZ + koordinatZbawahKanan);

            glEnd();
        }
    }
    if (tutup_bola) {
        Basic::lingkaran(posX, posY + (jari_jari * sin(derajat_mulai * M_PI / 180)), posZ,
                         jari_jari * cos(derajat_mulai * M_PI / 180), detail, 1, texture_scale);
    }
}

void Basic::kristal(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari, GLfloat tinggi, GLfloat detail, GLfloat texture_scale) {
    Basic::kerucut(posX, posY, posZ, jari_jari, tinggi / 2, detail, texture_scale);
    Basic::kerucut(posX, posY, posZ, jari_jari, -(tinggi / 2), detail, texture_scale);
}

void Basic::hiasan_0(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat jari_jari_bawah, GLfloat jari_jari_atas,
                     GLfloat tinggi, GLfloat jumlah_sisi, GLfloat texture_scale) {
    GLfloat detail = 360.0f / jumlah_sisi / 2;
    GLfloat Xsebelum = jari_jari_bawah;
    GLfloat Zsebelum = 0;
    int jumlahLooping = 0;
    for (GLfloat sudut = 0; sudut <= 360; sudut += detail) {
        GLfloat XsebelumAtas = jari_jari_atas * cos((sudut) * M_PI / 180);
        GLfloat ZsebelumAtas = jari_jari_atas * sin((sudut) * M_PI / 180);
        GLfloat Xsesudah = jari_jari_bawah * cos((sudut + detail) * M_PI / 180);
        GLfloat Zsesudah = jari_jari_bawah * sin((sudut + detail) * M_PI / 180);
        GLfloat XsesudahAtas = jari_jari_atas * cos((sudut + detail) * M_PI / 180);
        GLfloat ZsesudahAtas = jari_jari_atas * sin((sudut + detail) * M_PI / 180);
        if (jumlahLooping % 2 == 0) {
            GLfloat vertices[][3] = {
                    {Xsebelum + posX,     posY,          Zsebelum + posZ},
                    {Xsesudah + posX,     posY,          Zsesudah + posZ},
                    {XsesudahAtas + posX, posY + tinggi, ZsesudahAtas + posZ},
                    {XsebelumAtas + posX, posY + tinggi, ZsebelumAtas + posZ}
            };

            glBegin(GL_POLYGON);
            glNormal3fv(Util::calculate_normal(vertices[0], vertices[1], vertices[2]));
            for (int i = 0; i < 4; ++i) {
                glTexCoord2f(vertices[i][0]/texture_scale, vertices[i][1]/texture_scale);
                glVertex3fv(vertices[i]);
            }
            glEnd();
        }
        Xsebelum = Xsesudah;
        Zsebelum = Zsesudah;

        jumlahLooping++;
    }
}

void Basic::hiasan_1(GLfloat posX, GLfloat posY, GLfloat posZ, GLfloat panjang, GLfloat lebar, GLfloat tinggi,
                     GLfloat jumlah_sisi_panjang, GLfloat jumlah_sisi_lebar, GLfloat texture_scale) {
    // sisi depan
    GLfloat panjang_kotak = panjang / ((jumlah_sisi_panjang * 2) - 1);
    for (int i = 0; i < (jumlah_sisi_panjang * 2) - 1; ++i) {
        if ((i + 1) % 2 != 0) {
            kotakVertikalDepan(posX + (panjang_kotak * i), posY, posZ, panjang_kotak, tinggi, texture_scale);
            kotakVertikalDepan(posX + (panjang_kotak * i), posY, posZ + lebar, panjang_kotak, tinggi, texture_scale);
        }
    }
    //sisi samping
    panjang_kotak = lebar / ((jumlah_sisi_lebar * 2) - 1);
    for (int i = 0; i < (jumlah_sisi_lebar * 2) - 1; ++i) {
        if ((i + 1) % 2 != 0) {
            kotakVertikalSamping(posX, posY, posZ + (panjang_kotak * i), panjang_kotak, tinggi, texture_scale);
            kotakVertikalSamping(posX + panjang, posY, posZ + (panjang_kotak * i), panjang_kotak, tinggi, texture_scale);
        }
    }
}