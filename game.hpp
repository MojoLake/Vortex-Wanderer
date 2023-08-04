#ifndef game_hpp
#define game_hpp

#include "SDL2/SDL.h"
#include <stdio.h>
#include <iostream>

class Game {
public:
    Game();
    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);


    void handleEvents();
    void update();
    void render(); 
    void clean();

    bool running();

private:
    bool isrunning();
    SDL_Window *window;
    SDL_Renderer *renderer;
};




#endif /*game_hpp*/ 