#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include "WindowRender.h"

int main(int argc, char* args[])
{
	if (SDL_Init(SDL_INIT_VIDEO) > 0)
	{
		std::cout << "HEY, SDL_INIT FAILED!" << SDL_GetError() << std::endl;
	}

	WindowRender window("GAME v1.0", 1280, 720);

	bool gameRunning = true;
	SDL_Event event;

	while (gameRunning)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				gameRunning = false;
			}
		}
	}

	window.CleanUp();
	SDL_Quit();

	return 0;
}

