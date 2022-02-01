#include <iostream>
#include "rooms.hpp"

// Character Name
std::string charName;

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

std::string introduction() {
    std::cout << "Please enter your character's name:\n";
    std::getline(std::cin, charName);
    std::cout << "Well, shit on my nipples " << charName
         << " and call me a gnoll, you'd better get in there and clap some "
            "goblin cheeks.\n";
}

void roomA1() {
    if (roomA1Visited == false) {
        std::cout << "You walk sideways down the stairs with a torch outstretched in your left hand so you can see as far into the dank dungeon as you can.\n";
    } else {

    }
}