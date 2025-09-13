#include "Player.h"

Player::Player(int startX, int startY) : x(startX), y(startY), speed(5) {}

void Player::handleInput(const SDL_Event& e) {
    if (e.type == SDL_KEYDOWN) {
        switch (e.key.keysym.sym) {
            case SDLK_w: y -= speed; break;
            case SDLK_s: y += speed; break;
            case SDLK_a: x -= speed; break;
            case SDLK_d: x += speed; break;
            default: break;
        }
    }
}

void Player::update() {
    // Screen boundaries
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    const int PLAYER_SIZE = 50;

    // Clamp X position
    if (x < 0) x = 0;
    if (x > SCREEN_WIDTH - PLAYER_SIZE) x = SCREEN_WIDTH - PLAYER_SIZE;

    // Clamp Y position
    if (y < 0) y = 0;
    if (y > SCREEN_HEIGHT - PLAYER_SIZE) y = SCREEN_HEIGHT - PLAYER_SIZE;
}


void Player::render(SDL_Renderer* renderer) {
    SDL_Rect rect = { x, y, 50, 50 }; // Render as 50x50 square
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Red
    SDL_RenderFillRect(renderer, &rect);
}
