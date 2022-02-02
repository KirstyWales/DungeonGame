#include "rooms.hpp"

#include <iostream>

// Character Name
std::string charName;

// Player Variables
int playerHealth;           // 100
int playerArmor;            // 15;
int playerAttackDamage;     // 30;
int maxPlayerAttackDamage;  // 99;
std::string playerWeapon;   // iron sword

// item variables
int ironArmor = 5;
int steelArmor = 10;
int elvenArmor = 15;
int ironRing = 3;
int steelRing = 5;
int elvenRing = 8;
int ironSword = 15;
int steelSword = 35;
int elvenSword = 55;

// potion variables
int numHealthPotions = 3;
int maxNumHealthPotions = 9;
int healthPotionHealAmount = 69;

// game variables
int amountMonstersKilled = 0;
int numRoomsExplored = 0;
int choice;
int roomOneCage = 1;
int roomOneTable = 1;

// Room Exits
bool northExit;
bool eastExit;
bool southExit;
bool westExit;

// Has room been visited
bool roomA1Visited;
bool roomA2Visited;
bool roomA3Visited;
bool roomA4Visited;
bool roomA5Visited;
bool roomA6Visited;

bool roomB1Visited;
bool roomB2Visited;
bool roomB3Visited;
bool roomB4Visited;
bool roomB5Visited;
bool roomB6Visited;

bool roomC1Visited;
bool roomC2Visited;
bool roomC3Visited;
bool roomC4Visited;
bool roomC5Visited;
bool roomC6Visited;

bool roomD1Visited;
bool roomD2Visited;
bool roomD3Visited;
bool roomD4Visited;
bool roomD5Visited;
bool roomD6Visited;

void lineBreak() {
    std::cout << "-------------------------------------------------------------"
                 "------------------";
}

std::string corridor() {
    std::cout << "Please enter your character's name:\n";
    std::getline(std::cin, charName);
    std::cout
        << "Well, shit on my nipples " << charName
        << " and call me a gnoll, you'd better get in there and clap some "
           "goblin cheeks.\n";
}

std::string likeToDo() { std::cout << "What would you like to do?\n"; }

std::string roomA1() {
    std::cout << "\nYou find yourself in a dimly lit corridor. The only light "
                 "seems to be radiating from the stairs you came down.";
    std::cout << "\nYour eyes slowly adjust to the din, you spot some tree "
                 "roots, leaves, and dirt. Mostly debris that has blown in "
                 "from the stairs behind you.";
    std::cout << "\nYou shuffle forward apprehensively and notice some of the "
                 "mud is still damp and clumped together. Someone has come "
                 "this way recently.";
    likeToDo();
}
