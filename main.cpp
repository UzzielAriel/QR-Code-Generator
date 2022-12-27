#include <iostream>
#include <vector>
#include "src/main.hpp"
#include <SDL2/SDL.h>

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[]) {

	std::vector<int> encoded_data = encode_data(::data);

	// std::vector<std::vector<int>> qr_code = generate_qr_code(encoded_data);

	// output_qr_code(qr_code);

	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window *window = nullptr;
	SDL_Renderer *renderer = nullptr;

	SDL_CreateWindowAndRenderer(::WIDTH, ::HEIGHT, 0, &window, &renderer);

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255 ,255);
	SDL_RenderDrawPoint(renderer, ::WIDTH/2, ::HEIGHT/2);

	SDL_RenderPresent(renderer);

	if (NULL == window)
	{
		std::cout << "Coult not create window: " << SDL_GetError() << std::endl;
		return 1;
	}

	return 0;
}