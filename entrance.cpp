#include "DungeonGame.hpp"
#include "Room.hpp"

int entrance() {
    Room entrance;
    entrance.eastExit = true;
    entrance.roomText =
        "You shuffle slowly down the steps with your torch outstretched in "
        "your arm. The room you find yourself in smells dank but sweet, you're "
        "unsure if this is just moss or thaumaturgy.\nA preliminary scan of "
        "the room tells you that there isnt much in here aside from what looks "
        "like a corridor on the East wall.";
    entrance.revisitText =
        "You find yourself back in the room that you first entered. It still "
        "smells dank, and there's still a staircase leading out. Who would "
        "have thought? You should probably be going deeper into the dungeon, "
        "not trying to run away!";
    entrance.investigateText =
        "You raise your torch high above your head to have a really good look "
        "at the room. You spot some hay in a corner, the sound of some small "
        "animal skittering around. You also spot a half burnt, upturned "
        "bucket. There really isnt much going on here.";

        return 0;
}