//
// Created by Rafy on 21/11/2017.
//

#include <GL/glut.h>
#include <cstdio>
#include <afxres.h>
#include "Util.h"
#include "math.h"
#include "cmath"

#define GL_GENERATE_MIPMAP 0x8191

void Util::doNormalize(float *v) {
    float length = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);

    for (int i = 0; i < 3; i++) {
        v[i] = v[i] / length;
    }
}

float *Util::cross_product(float *a, float *b) {
    float result[] = {a[1] * b[2] - a[2] * b[1], -(a[0] * b[2] - a[2] * b[0]), a[0] * b[1] - a[1] * b[0]};
    doNormalize(result);

    return result;
}

float *Util::calculate_normal(float *a, float *b, float *c) {
    float x[] = {b[0] - a[0], b[1] - a[1], b[2] - a[2]};
    float y[] = {c[0] - a[0], c[1] - a[1], c[2] - a[2]};

    float *result = cross_product(x, y);

    return result;
}

GLuint Util::loadBmpFile(const char *fileName) {
    GLuint texture_id;
    unsigned char * pBitmapData;
    int	width, height,bpp;

    FILE				* fp;
    BITMAPFILEHEADER	bmpFH;
    BITMAPINFOHEADER	bmpIH;
    unsigned char		temp;

    fp = fopen( fileName, "rb" ); // rb = read binary
    if( fp == NULL )
        return( -1 );
    // read in the file header
    fread( ( void * )&bmpFH, sizeof( BITMAPFILEHEADER ), 1, fp );
    if( bmpFH.bfType != 0x4D42 ) {
        fclose( fp );
        return( -1 );
    }

    // read in the info header
    fread( ( void * )&bmpIH, sizeof( BITMAPINFOHEADER ), 1, fp );
    // move the file stream to teh start of the image data
    fseek( fp, bmpFH.bfOffBits, SEEK_SET );
    // set size in bytes
    bmpIH.biSizeImage = bmpIH.biHeight * bmpIH.biWidth * ( bmpIH.biBitCount / 8 );
    // allocate mem for the image data
    pBitmapData = new unsigned char[ bmpIH.biSizeImage ];
    if( pBitmapData == NULL ){
        // if there was trouble allocating the mem
        fclose( fp );
        return( -1 );
    }
    // read from the stream ( 1 byte at a time, biSizeImage times )
    fread( ( void * )pBitmapData, 1, bmpIH.biSizeImage, fp );
    if( pBitmapData == NULL ) {
        fclose( fp );
        return( -1 );
    }
    for( int c = 0; c < bmpIH.biSizeImage; c += 3 ) {
        // swap the red and blue bytes
        temp					= pBitmapData[ c ];
        pBitmapData[ c ]		= pBitmapData[ c + 2 ];
        pBitmapData[ c + 2 ]	= temp;
    }

    fclose( fp );

    width	= bmpIH.biWidth;
    height	= bmpIH.biHeight;
    bpp		= bmpIH.biBitCount;

    glGenTextures( 1, &texture_id );
    // bind and pass texure data into openGL
    glBindTexture( GL_TEXTURE_2D, texture_id );
    // set parameters to make mipmaps
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR );
    glTexParameteri( GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_TRUE);
    // create the textures
    glTexImage2D( GL_TEXTURE_2D, 0,
                  GL_RGB, width, height, 0,
                  GL_RGB, GL_UNSIGNED_BYTE, pBitmapData );

    return texture_id;
}