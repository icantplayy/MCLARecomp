#pragma once
#include <stdafx.h>
#include <SDL3/SDL.h>

class GameWindow final
{
public:
    GameWindow(const uint32_t width, const uint32_t height, const std::string &title);
    ~GameWindow();

    void Update(bool *running);

private:
    SDL_Window *m_sdl_handle;
};