#include "DungeonGame.hpp"
#include <iostream>
#include <string>

bool isAlive = true;

//inventory
int potions = 2;
bool compass = true;
bool diary = false;

int main() {

    while (isAlive == true) {
        corridor();
        likeToDo();
    }
}
