#include "JCHeaderGraphics.h"

int main()
{
	int i = 0;

	SDL_Window		*win;
	SDL_Renderer	*ren;
	SDL_Surface		*frame_screen_shot_1;
	SDL_Surface		*load_surf;
	SDL_Texture		*bmp_text;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		return (1);
	win = SDL_CreateWindow("Testing", 10, 40, 1425, 800, SDL_WINDOW_SHOWN);
	if (win == NULL)
	{
		printf("testing  123");
		getchar();
		return (1);
	}
	
	ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren == NULL)
		return (1);
	SDL_SetRenderDrawColor(ren, 0, 0, 255, 0);

	SDL_RenderPresent(ren);
	SDL_RenderClear(ren);
	SDL_Delay(10000);
	SDL_DestroyWindow(win);
	SDL_Quit();
	getchar();
	return (0);
}