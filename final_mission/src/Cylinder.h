#ifndef FINAL_PROJECT_CYLINDER_H
#define FINAL_PROJECT_CYLINDER_H

#include "Texture.h"
#include "Color.h"

class Cylinder {
	static constexpr float PI = 3.1415926535897;
	static constexpr float resolution = 30;
	float radioTop, radioBottom, height;
	float scale;
	CTexture texture;
	Color color;
public:
	Cylinder();
	Cylinder(float radio, float height, CTexture texture);
	Cylinder(float radioTop, float radioBottom, float height, CTexture texture);
	void draw();
	void draw(float radio, float height, CTexture texture);
	void draw(float radio, float height);
	void draw(float radioTop, float radioBottom, float height, CTexture texture);
	void draw(float radioTop, float radioBottom, float height);
	void setRadioTop(float r);
	void setRadioBottom(float r);
	void setHeight(float h);
	void setColor(Color c);
	void setTexture(CTexture t);
};

#endif
