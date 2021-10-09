#pragma once
#include "button.h"
#include "sceneManager.h"

class Credits
{
private:
	sceneManager* manager;
	Button* backButton;
public:
	Credits();
	~Credits();
	void setSceneManager(sceneManager* manager);
	void creditsUpdate();
	void creditsDraw();	
};

