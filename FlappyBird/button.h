#pragma once
#include <iostream>
#include "raylib.h"

class Button
{
private:
	Rectangle buttonRec;
	Color buttonColor;
	Color secondaryColor;
public:
	Button(float width, float height, int x, int y, Color buttonColor, Color secondaryColor);
	~Button();
	Rectangle getButtonRec();	
	float getButtonWidth();
	float getButtonHeight();
	int getButtonX();
	int getButtonY();
	Color getButtonColor();
	void drawButton();
	bool isMouseOnButton();
	bool isButtonPressed();	
};

