#pragma once

#include <SDL2/SDL_mixer.h>
#include <string>
#include <unordered_map>

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
