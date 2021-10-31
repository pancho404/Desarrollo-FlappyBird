#pragma once
#include "sceneManager.h"
#include "Player.h"

class Play
{
private:
	sceneManager* manager;
	Player* player;
public:
	Play();
	~Play();
	void setSceneManager(sceneManager* manager);
	void playUpdate();
	void playDraw();
};

