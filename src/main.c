#include "config.h"

#include "SDL.h"

int main(int argc, char* argv[]) {
	printf("%s version %s\n",PACKAGE_NAME, PACKAGE_VERSION);

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		char *error = SDL_GetError();
		printf("Error: %s\n",error);
		return -1;
	}

	SDL_Quit();

	return 0;
}
