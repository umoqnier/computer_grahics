#ifndef FINAL_PROJECT_PLANE_H
#define FINAL_PROJECT_PLANE_H

#include "Texture.h"
#include "GL/glut.h"
#include "Vertex.h"
#include "Color.h"
#include <stdio.h>

class Plane {
	CTexture texture;
	Color color;
	float axisARep;
	float axisBRep;
	float offsetY;
	Vertex v[4];
public:
	Plane();
	Plane(Vertex v1, Vertex v2, Vertex v3, Vertex v4, CTexture t);
	void setTexture(CTexture t);
	void setColor(Color c);
	void setVertex(Vertex v1, Vertex v2, Vertex v3, Vertex v4);
	void draw();
	void draw(float offsetY);
	void drawInverse();
	void toString();
	void calculateRepetitions(float repAxisA, float repAxisB);
	void noRepetition();
};

#endif
