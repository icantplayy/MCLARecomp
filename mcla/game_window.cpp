#include "game_window.h"
#include <iostream>

GameWindow::GameWindow(const uint32_t width, const uint32_t height, const std::string &title)
{
    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        std::cerr << "SDL Init failed: " << SDL_GetError() << "\n";
        _Exit(1);
    }

    m_sdl_handle = SDL_CreateWindow(title.c_str(), width, height, 0);

    if (!m_sdl_handle)
    {
        std::cerr << "Window creation failed: " << SDL_GetError() << "\n";
        _Exit(1);
    }
}

GameWindow::~GameWindow()
{
    SDL_DestroyWindow(m_sdl_handle);
    SDL_Quit();
}

void GameWindow::Update(bool *running)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_EVENT_QUIT:
                *running = false;
        }
    }
}
