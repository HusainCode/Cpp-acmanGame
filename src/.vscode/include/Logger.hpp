#pragma once

#include <string>

class Logger
{
public:
    // Levels class
    enum class Level
    {
        INFO,
        WARNING,
        ERROR,
        CRITICAL,
        DEBUG,
        TRACE
    };

    static void init(const std::string &filename = "game.log");
    static void shutdown();

    // Set minium level (default = INFO)
    static void setLevel(Level level);

    // Log message
    static void log(Level level, const std::string &msg);

private:
    static std::string levelToString(Level level);
    static Level currentLevel;
};