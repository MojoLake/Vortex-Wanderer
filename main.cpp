#include "SDL2/SDL.h"
#include <iostream>

int main(){

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Hi mom", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_SetRenderDrawColor(renderer, 95, 150, 56, 255);

    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);

    SDL_Delay(3000);



}