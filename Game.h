#pragma once

#include "Player.h"
#include "GameState.h"
#include <vector>
#include <iostream>

class Game
{
protected:
	 static std::vector<char> gameData;
	 static bool isOver;
	 static int mine;
public:
	static bool isDone();
	static int getMine();
	static void setIsOver(bool);
	static bool isMinePressed(int);
	static void showTable();
	static Player whichPlayer(Player&, Player&);
	static Player whoWon(Player&, Player&);
	static void placeData(Player*&, int);
};

