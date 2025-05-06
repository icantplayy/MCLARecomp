#include <stdafx.h>
#include "game_window.h"

int main(int argc, char **argv)
{
    GameWindow window(1280, 720, "Midnight Club: Los Angeles");
    bool running = true;
    while (running)
    {
        window.Update(&running);
    }
    return 0;
}