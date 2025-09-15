#pragma once
#include <SDL2/SDL.h>
#include "Entity.hpp"

class Ghost : public Entity
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
        int gridx;
        int gridy;
    };

    Ghost(GhostType type, int startX, int startY);

    void update(); // update ghost state (movement, AI, etc.)
    void render(); // draw ghost on screen

    // Getters
    Position getPosition() const;
    GhostType getType() const;

    // Movement
    void setPosition(int x, int y);

private:
    GhostType type;
    Position position;
    SDL_Color color;
};
