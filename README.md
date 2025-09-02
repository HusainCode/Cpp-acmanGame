# 🟡 Pacman Game in Modern C++

A modern, modular, object-oriented implementation of the classic Pacman game written in C++17. Built with SDL2 for graphics and input, this project is a fun, educational way to explore real-time game loops, pathfinding, and sprite-based animation in C++.

---

## 🧱 Features

- ⏱️ Real-time game loop with frame-rate control
- 🎮 Keyboard input & player movement
- 🍒 Collectibles (dots, power pellets, bonus fruits)
- 💥 Collision detection (walls, ghosts, pickups)
- 🧱 Tile-based level design with map loader
- 🗺️ External level configuration via JSON or custom format
- 🔊 Optional: sound effects with SDL_mixer
- 📦 Clean object-oriented structure

---

## 🏗️ Project Structure

```bash
Pacman/
├── assets/              # Sprites, sounds, and levels
├── include/             # Public headers
│   ├── Game.hpp
│   ├── Player.hpp
│   └── Ghost.hpp
├── src/                 # Implementation files
│   ├── main.cpp
│   ├── Game.cpp
│   ├── Player.cpp
│   └── Ghost.cpp
├── levels/              # Level definitions
│   └── level1.map
├── CMakeLists.txt       # Build system
└── README.md
