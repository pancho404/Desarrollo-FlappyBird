#include "game.h"

void playGame()
{
	const int windowWidth = 1280;
	const int windowHeight = 720;
	sceneManager* manager =  new sceneManager();
	Credits* creditsScene = new Credits();	
	bool MainMenuInited = false;
	bool CreditsInited = false;
	bool PlayInited = false;
	manager->changeScene(Scene::Credits);

	InitWindow(windowWidth, windowHeight, "Flappy Bird");
	while (!WindowShouldClose())
	{
		switch (manager->getCurrentScene())
		{
		case Scene::MainMenu:
			break;
		case Scene::Credits:
			if (!CreditsInited)
			{
				creditsScene->setSceneManager(manager);
				CreditsInited = true;
			}
			creditsScene->creditsUpdate();
			BeginDrawing();
			creditsScene->creditsDraw();
			EndDrawing();
			break;
		case Scene::Play:
			break;
		default:
			break;
		}
	}
	delete manager;
	delete creditsScene;
}