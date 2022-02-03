OBJS	= DungeonGame.o Enemy.o Game.o Item.o Player.o Room.o
SOURCE	= DungeonGame.cpp Enemy.cpp Game.cpp Item.cpp Player.cpp Room.cpp
HEADER	= DungeonGame.hpp
OUT	= a.out
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

DungeonGame.o: DungeonGame.cpp
	$(CC) $(FLAGS) DungeonGame.cpp 

Enemy.o: Enemy.cpp
	$(CC) $(FLAGS) Enemy.cpp 

Game.o: Game.cpp
	$(CC) $(FLAGS) Game.cpp 

Item.o: Item.cpp
	$(CC) $(FLAGS) Item.cpp 

Player.o: Player.cpp
	$(CC) $(FLAGS) Player.cpp 

Room.o: Room.cpp
	$(CC) $(FLAGS) Room.cpp 


clean:
	rm -f $(OBJS) $(OUT)
