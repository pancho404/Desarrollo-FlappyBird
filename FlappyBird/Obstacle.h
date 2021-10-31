#pragma once
#include "raylib.h"
class Obstacle
{
private:
	Rectangle upperRec;
	Rectangle lowerRec;
	Rectangle gap;
public:
	Obstacle();
	~Obstacle();
	void setRec(Rectangle rec, float x, float y, float width, float height);

};

