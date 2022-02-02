#include DungeonGame.hpp

class Room {
    public:
        bool northExit;
        bool eastExit;
        bool southExit;
        bool westExit;
        bool isVisited;
        std::string flavourText;
}


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

void corridor() {
    std::cout << "Please enter your character's name:\n";
    std::getline(std::cin, charName);
    std::cout
        << "Well, shit on my nipples " << charName
        << " and call me a gnoll, you'd better get in there and clap some "
           "goblin cheeks.\n";
}

void likeToDo() { std::cout << "What would you like to do?\n"; }

void roomA1() {
    std::cout << "\nYou find yourself in a dimly lit corridor. The only light "
                 "seems to be radiating from the stairs you came down.";
    std::cout << "\nYour eyes slowly adjust to the din, you spot some tree "
                 "roots, leaves, and dirt. Mostly debris that has blown in "
                 "from the stairs behind you.";
    std::cout << "\nYou shuffle forward apprehensively and notice some of the "
                 "mud is still damp and clumped together. Someone has come "
                 "this way recently.\n";
    lineBreak();
    likeToDo();
    lineBreak();
}
