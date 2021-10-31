#pragma once
#include "raylib.h"
#include "assets.h"
class Player
{
private:
	Rectangle collider;
	Texture2D avatar;		
	float speed;
public:
	Player(float x, float y, float width, float height, float speed);
	~Player();
	void setPlayerAvatar();	
	void setPlayerCollider(float x, float y, float width, float height);
	void setPlayerSpeed(float speed);
	Texture2D getPlayerAvatar();	
	Rectangle getPlayerRectangle();
	float getPlayerColliderX();
	float getPlayerColliderY();
	float getPlayerColliderWidth();
	float getPlayerColliderHeight();
	float getPlayerSpeed();
	void movePlayer();
	void drawPlayer();
};

