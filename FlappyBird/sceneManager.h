#pragma once

enum class Scene {MainMenu, Credits, Play};

class sceneManager
{
private:
	Scene currentScene;
public:
	sceneManager();
	~sceneManager();
	Scene getCurrentScene();
	void changeScene(Scene scene);
};

