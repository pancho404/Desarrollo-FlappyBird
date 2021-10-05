#include "sceneManager.h"

sceneManager::sceneManager()
{
	currentScene = Scene::MainMenu;
}
sceneManager::~sceneManager()
{

}
Scene sceneManager::getCurrentScene()
{
	return currentScene;
}
void sceneManager::changeScene(Scene scene)
{
	currentScene = scene;
}