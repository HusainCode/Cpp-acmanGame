#pragma once
#include <SDL2/SDL.h>

class Player {
public:
    Player(int x, int y);
    void handleInput(const SDL_Event& e);
    void update();
    void render(SDL_Renderer* renderer);

private:
    int x, y;
    int speed;
};
