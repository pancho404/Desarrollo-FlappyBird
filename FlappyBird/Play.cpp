#include "Play.h"

Play::Play()
{	
	player = new Player(10.0f, GetScreenHeight() / 2, 30.0f, 50.0f, 250.0f);	
}
Play::~Play()
{
	delete player;
}
void Play::setSceneManager(sceneManager* manager)
{
	this->manager = manager;
}
void Play::playUpdate()
{
	player->movePlayer();
}
void Play::playDraw()
{	
	BeginDrawing();
	ClearBackground(DARKBLUE);
	player->drawPlayer();
	EndDrawing();
}