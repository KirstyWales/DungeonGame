#include "DungeonGame.hpp"
#include "Player.hpp"
#include "Room.hpp"
#include "Game.hpp"

bool isAlive = true;

void introduction() {
    bool validCharName = false;
    Player mainPlayer;
    

outer:
    while (validCharName = false) {
        std::cout << "Please enter your name\n";
        std::cin >> mainPlayer.charName;
        std::cout << "The name you have entered is " << mainPlayer.charName
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

int main() {
    while (isAlive == true) {
        introduction();
    }
    return 0;
}
