#include <iostream>

bool isAlive = true;
std::string charName;

void introduction() {
    std::cout << "Please enter your character's name:\n";
    std::getline(std::cin, charName);
    std::cout << "Well, shit on my nipples " << charName
         << " and call me a gnoll, you'd better get in there and clap some "
            "goblin cheeks.\n";
}

int main() {
    while (isAlive == true) {
        introduction();
    }
}
