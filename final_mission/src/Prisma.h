//
// Created by luis-elementary on 11/1/17.
//

#ifndef FINAL_PROJECT_PRISMA_H
#define FINAL_PROJECT_PRISMA_H

#include "Texture.h"
#include "GL/glut.h"
#include "Color.h"
#include <stdio.h>

class Prisma {
private:
    CTexture textures[6];
    float x, y, z;
    Color color;
public:

    Prisma(float width=0.0f, float height=0.0f, float depth=0.0f, Color color=Color(), CTexture textures[6]=NULL);
    void draw();
    void draw(float w, float h, float d);
    void draw(float w, float h, float d, CTexture t);
    void draw(float w, float h, float d, CTexture *t);
    void draw(CTexture *t);
    void draw(CTexture t);
    void draw(float *size, CTexture *t);
    void draw(float *size, CTexture t);
    void draw(Color color);
    void setSize(float width, float height, float depth);
    void setSize(float size[3]);
    void setTexture(CTexture t[6]);
    void setTexture(CTexture t);
    void setColor(Color color);
    void toDebug();
};


#endif //FINAL_PROJECT_PRISMA_H