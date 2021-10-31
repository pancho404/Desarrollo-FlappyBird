#include "Player.h"

Player::Player(float x, float y, float width, float height, float speed)
{
	setPlayerCollider(x, y, width, height);
	avatar = LoadTexture("res/kanna1.png");
	setPlayerAvatar();		
	setPlayerSpeed(speed);
}
Player::~Player()
{
	UnloadTexture(avatar);
}
void Player::setPlayerAvatar()
{
	
	avatar.width = collider.width;
	avatar.height = collider.height;
}
void Player::setPlayerCollider(float x, float y, float width, float height)
{
	this->collider.x = x;
	this->collider.y = y;
	this->collider.width = width;
	this->collider.height = height;
}
void Player::setPlayerSpeed(float speed)
{
	this->speed = speed;
}
Texture2D Player::getPlayerAvatar()
{
	return avatar;
}
Rectangle Player::getPlayerRectangle()
{
	return collider;
}
float Player::getPlayerColliderX()
{
	return collider.x;
}
float Player::getPlayerColliderY()
{
	return collider.y;
}
float Player::getPlayerColliderWidth()
{
	return collider.width;
}
float Player::getPlayerColliderHeight()
{
	return collider.height;
}
float Player::getPlayerSpeed()
{
	return speed;
}
void Player::movePlayer()
{
	if (IsKeyDown(KEY_SPACE))
	{
		collider.y -= speed * GetFrameTime();
	}
	else
	{
		collider.y += speed * GetFrameTime();
	}
}
void Player::drawPlayer()
{
	DrawRectangleRec(collider, BLUE);
	//DrawTexture(avatar, collider.x, collider.y, WHITE);
	DrawTextureRec(avatar, collider, { collider.x, collider.y }, WHITE);
}
