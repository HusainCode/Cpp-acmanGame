# 🟡 Pacman Game in Modern C++

A modern, modular, object-oriented implementation of the classic **Pacman** game written in **C++17**.  
Built with **SDL2** for graphics/input and **SDL2_mixer** for sound, this project demonstrates real-time game programming, pathfinding, and sprite-based animation in C++.

---

## 🧱 Features

- ⏱️ Real-time game loop with frame-rate control  
- 🎮 Keyboard input & smooth player movement  
- 🍒 Collectibles (dots, power pellets, bonus fruits)  
- 💥 Collision detection (walls, ghosts, pickups)  
- 🧱 Tile-based level design with custom map loader  
- 🗺️ External level configuration via JSON or custom format  
- 🔊 Sound effects and background music with **SDL2_mixer**  
- 📦 Clean, object-oriented architecture  

---

## 🔊 Audio System

The game provides a dedicated **Sound** class (`include/Sound.hpp`, `src/Sound.cpp`) responsible for:

- **Sound effects**: pellet eating, ghost defeat, power-up activation (`.wav`)  
- **Background music**: continuous looping arcade-style soundtrack (`.mp3`/`.ogg`)  
- **Automatic resource management** via RAII (loads, plays, and cleans up safely)  
- **Volume control & mixing** handled by `SDL2_mixer`  

---

## 🏗️ Project Structure

```bash
Pacman/
├── assets/              # Sprites, sounds, and levels
│   └── sounds/          # Audio files (wav, mp3, ogg)
├── include/             # Public headers
│   ├── Game.hpp
│   ├── Player.hpp
│   ├── Ghost.hpp
│   ├── Map.hpp
│   └── Sound.hpp
├── src/                 # Implementation files
│   ├── main.cpp
│   ├── Game.cpp
│   ├── Player.cpp
│   ├── Ghost.cpp
│   ├── Map.cpp
│   └── Sound.cpp
├── levels/              # Level definitions
│   └── level1.map
├── CMakeLists.txt       # Build system
└── README.md
```

### 🎵 Audio Assets
```
assets/sounds/
├── waka.wav          # pellet sound
├── powerup.wav       # power pellet sound
├── death.wav         # player death sound
└── background.mp3    # looping background music
```

---

# 🔊 How Sound Playback Works in SDL2_mixer

This diagram shows the **audio flow** when your game plays a sound:

<img width="298" height="417" alt="SDL2_mixer flow" src="https://github.com/user-attachments/assets/d397295b-27f1-4f05-91a6-db58ba65df9d" />

---

## 📄 Flow

1. **Game Code calls `Sound.play()`** → request to play audio  
2. **SDL2_mixer loads WAV/MP3 into memory**  
3. **`Mix_Chunk` / `Mix_Music` store raw samples** (effects vs music)  
4. **SDL2_mixer mixes multiple sounds** (overlapping effects + music)  
5. **Audio Driver (ALSA / DirectSound / CoreAudio)** receives audio data  
6. **Sound Card converts digital → analog signal**  
7. **Electrical signals travel to speakers/headphones**  
8. **Speakers vibrate air → sound waves**  
9. **Player hears the sound** 🎧  

---

## 🎯 Key Insight
Your game never talks directly to the sound card.  
Instead, **SDL2_mixer abstracts the audio pipeline** so you only need to call:

```cpp
Sound.play("waka.wav");
```

…and the full chain — loading, mixing, playback — happens automatically.
