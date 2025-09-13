#pragma once
#include <SDL2/SDL.h>
#include "Entity.hpp"

class Ghost
{
public:
    enum GhostType
    {
        Blinky,
        Pinky,
        Inky,
        Clyde
    };

    struct Position
    {
        int gridx, gridy;
    }; // STOPPD HERE

    void update();
    void render();
};