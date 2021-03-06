#include "SDL.h"

SDL_Window* win = 0;
SDL_Renderer* renderer = 0;

int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
    win = SDL_CreateWindow("SDL App", 0, 0, 640, 480, 0);
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    
    bool quit = false;
    while(!quit)
    {
        SDL_Event e;
        if(SDL_PollEvent(&e))
        {
            if(e.type == SDL_QUIT) {
                quit = true;
            }
        }
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);
    
    SDL_Quit();
    
    return 0;
}