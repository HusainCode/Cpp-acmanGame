#pragma once
#include <vector>
#include <string>

class Map {
public:
    Map(int width, int height);

    void loadFromFile(const std::string& filename);
    void draw() const;
    bool isWall(int x, int y) const;
    void setTile(int x, int y, char tile);
    char getTile(int x, int y) const;
    int getWidth() const;
    int getHeight() const;

private:
    int width;
    int height;
    std::vector<std::vector<char>> tiles;
};