#include "game.h"

void playGame()
{
	sceneManager* manager =  new sceneManager();
	bool playing = true;

	while (playing)
	{
		switch (manager->getCurrentScene())
		{
		case Scene::MainMenu:

			break;
		case Scene::Credits:
			break;
		case Scene::Play:
			break;
		default:
			break;
		}
	}
}