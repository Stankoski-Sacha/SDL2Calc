#include "pch.hpp"

void init(){
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0){
        std::cerr << "Error loading : " << SDL_GetError() << '\n';
        exit(1);
    }

    if (TTF_Init() != 0){
        std::cerr << "Error loading : " << TTF_GetError() << '\n';
        exit(1);
    }
}

SDL_Window* createWindow(){
    return SDL_CreateWindow(
        "Calculator",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        600,
        800,
        SDL_WINDOW_SHOWN
    );
}

SDL_Renderer* createRenderer(SDL_Window* window){
    return SDL_CreateRenderer(
        window,
        -1,
        SDL_RENDERER_ACCELERATED
    );
}