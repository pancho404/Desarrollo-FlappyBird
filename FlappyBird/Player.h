#pragma once
#include "raylib.h"
class Player
{
private:
	Rectangle collider;
	Texture2D avatar;
	Vector2 pos;	
public:
	Player();
	~Player();
	void setPlayerAvatar(Texture2D avatar);
	void setPlayerPos(Vector2 pos);
	void setPlayerCollider(float x, float y, float width, float height);
	Texture2D getPlayerAvatar();
	Vector2 getPlayerPos();
	float getPlayerColliderX();
	float getPlayerColliderY();
	float getPlayerColliderWidth();
	float getPlayerColliderHeight();
	void movePlayer();
};

