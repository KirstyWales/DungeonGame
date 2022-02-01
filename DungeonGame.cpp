#include "rooms.hpp"
#include <iostream>

bool isAlive = true;
std::string charName;

//inventory
int potions = 2;
bool compass = true;
bool diary = false;


void introduction() {
    std::cout << "Please enter your character's name:\n";
    std::getline(std::cin, charName);
    std::cout << "Well, shit on my nipples " << charName
         << " and call me a gnoll, you'd better get in there and clap some "
            "goblin cheeks.\n";
}

void roomA1() {
    if (roomA1visited == false) {
        std::cout << "You walk sideways down the stairs with a torch outstretched in your left hand so you can see as far into the dank dungeon as you can.\n";
    } else {

    }
    


}

int main() {

    while (isAlive == true) {
        introduction();
    }
}
