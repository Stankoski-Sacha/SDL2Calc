#include "pch.hpp"

int main(int argc, char** argv){
    init();

    SDL_Window* window = createWindow();

    SDL_Renderer* renderer = createRenderer(window);
    SDL_Event event;
    bool running = true;

    while (running){
        while (SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT){
                running = false;
            }
        }

        // Background color
        SDL_SetRenderDrawColor(renderer, 255,255,255,0);
        SDL_RenderClear(renderer);

        // Set the render
        SDL_RenderPresent(renderer);
    }

    // Destroy all
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}