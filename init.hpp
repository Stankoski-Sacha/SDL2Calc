#ifndef INIT_HPP
#define INIT_HPP
#include "pch.hpp"

void init();
SDL_Window* createWindow();
SDL_Renderer* createRenderer(SDL_Window* window);

#endif