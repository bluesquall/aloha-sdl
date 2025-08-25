#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include <SDL3/SDL.h>

#define WINDOW_DEFAULT_TITLE "Aloha, SDL!"
#define WINDOW_DEFAULT_WIDTH 320
#define WINDOW_DEFAULT_HEIGHT 240

int main(int argc, char **argv) {
  SDL_Window *window;
  SDL_Renderer *renderer;
  SDL_Event event; // union of Uint32

  if (!SDL_Init(SDL_INIT_VIDEO)) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Could not initialize SDL: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  if (!SDL_CreateWindowAndRenderer(WINDOW_DEFAULT_TITLE, WINDOW_DEFAULT_WIDTH, WINDOW_DEFAULT_HEIGHT, SDL_WINDOW_RESIZABLE, &window, &renderer)) {
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Could not create window and renderer: %s", SDL_GetError());
    return SDL_APP_FAILURE;
  }

  printf("Aloha from SDL2!\n");

  while (true) {
    SDL_PollEvent(&event);
    if (event.type == SDL_EVENT_QUIT) {
      break;
    }
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  SDL_Quit();

  return EXIT_SUCCESS;
}
