#include "Ghost.hpp"
#include <SDL2/SDL.h>
#include <iostream> // For debugging/logs

// Constructor
Ghost::Ghost(GhostType type, int startX, int startY)
    : type(type)
{
    position.gridx = startX;
    position.gridy = startY;

    // Set ghost color based on type
    switch (type)
    {
    case Blinky:
        color = {255, 0, 0, 255}; // Red
        break;
    case Pinky:
        color = {255, 184, 255, 255}; // Pink
        break;
    case Inky:
        color = {0, 255, 255, 255}; // Cyan
        break;
    case Clyde:
        color = {255, 165, 0, 255}; // Orange
        break;
    }
}

// Update ghost logic (stubbed)
void Ghost::update()
{
    // TODO: implement basic AI movement
    // Example: move right every update
    position.gridx += 1;
}

// Render the ghost (placeholder)
void Ghost::render()
{
   
    std::cout << "Rendering Ghost at ("
              << position.gridx << ", "
              << position.gridy << ") of type "
              << getType() << std::endl;
}

// Getters
Ghost::Position Ghost::getPosition() const
{
    return position;
}

Ghost::GhostType Ghost::getType() const
{
    return type;
}

// Set position manually
void Ghost::setPosition(int x, int y)
{
    position.gridx = x;
    position.gridy = y;
}
