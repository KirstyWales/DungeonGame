#pragma once
#include "DungeonGame.hpp"
#include "Room.hpp"

class Player {
   public:
    bool isAlive;
    std::string charName;
    int playerHealth;           // 100
    int playerArmor;            // 15;
    int playerAttackDamage;     // 30;
    int maxPlayerAttackDamage;  // 99;
    std::string playerWeapon;   // iron sword
};
