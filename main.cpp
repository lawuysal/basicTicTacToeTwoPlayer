#include <iostream>
#include "GameState.h"
#include "Game.h"
#include "Player.h"

int main()
{
	Player p1("Player1", 1, 'X');
	Player p2("Player2", 2, 'O');
	GameState::runGame(p1, p2);
	Game::showTable();
	system("pause");

	return 0;
}