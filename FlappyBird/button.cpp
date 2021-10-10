#include "button.h"

Button::Button(float width, float height, int x, int y, Color buttonColor, Color secondaryColor)
{
	this->buttonRec.width = width;
	this->buttonRec.height = height;
	this->buttonRec.x = x;
	this->buttonRec.y = y;
	this->buttonColor = buttonColor;
	this->secondaryColor = secondaryColor;
}

Button::~Button()
{

}

Rectangle Button::getButtonRec()
{
	return buttonRec;
}

float Button::getButtonWidth()
{
	return buttonRec.width;
}

float Button::getButtonHeight()
{
	return buttonRec.height;
}

float Button::getButtonX()
{
	return buttonRec.x;
}

float Button::getButtonY()
{
	return buttonRec.y;
}

Color Button::getButtonColor()
{
	return buttonColor;
}

void Button::drawButton()
{
	if (!isMouseOnButton())
	{
		DrawRectangle(buttonRec.x, buttonRec.y, buttonRec.width, buttonRec.height, buttonColor);
	}
	else
	{
		DrawRectangle(buttonRec.x, buttonRec.y, buttonRec.width, buttonRec.height, secondaryColor);

	}
}

bool Button::isMouseOnButton()
{
	if (CheckCollisionPointRec(GetMousePosition(), buttonRec))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Button::isButtonPressed()
{
	if (isMouseOnButton() && IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
	{
		return true;
	}
}

