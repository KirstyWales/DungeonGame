#pragma once
#include "DungeonGame.hpp"
#include "Player.hpp"
#include "Room.hpp"

bool isAlive = true;

int introduction() {
    bool validCharName = false;
    return 0;

outer:
    while (validCharName = false) {
        std::cout << "Please enter your name\n";
        std::cin >> charName;
        std::cout << "The name you have entered is " << charName
                  << " is this correct?";

        char c;

        while (true) {
            std::cout << "Please enter Y or N";
            std::cin >> c;
            if (c == 'n') {
                goto outer;
            } else if (c == 'y') {
                validCharName = true;
                break;
            }
        }
    }
}

int DungeonGame() {
    while (isAlive == true) {
        introduction();
    }
    return 0;
}
