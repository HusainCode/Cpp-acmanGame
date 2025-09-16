#pragma once

#include <SDL2/SDL_mixer.h>

class Sound
{
public:
    // Constructor
    Sound(const char *filePath);

    // Destructor
    ~Sound();

    void play();

private:
    Mix_Chunk *soundEffect;
};
