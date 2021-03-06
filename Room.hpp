#pragma once
#include "DungeonGame.hpp"
#include "Player.hpp"

class Room {
   public:
    bool northExit;
    bool eastExit;
    bool southExit;
    bool westExit;
    bool isVisited;
    std::string roomText;
    std::string revisitText;
    std::string investigateText;
};