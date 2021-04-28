#pragma once
#include <SDL.h>
#include "WindowRender.h"
#include <iostream>

class WindowRender
{
public:
	WindowRender(const char* title, int width, int height);
	void CleanUp();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};
