#include <iostream>
#include "GameState.h"
#include "Game.h"
#include "Player.h"

void GameState::runGame(Player& p1, Player& p2)
{
	std::cout << p1.getName() << ", \nPlease Enter a Name: ";
	std::string nameHolder{};
	std::getline(std::cin, nameHolder);
	p1.setName(nameHolder);

	std::cout << p2.getName() << ", \nPlease Enter a Name: ";
	std::getline(std::cin, nameHolder);
	p2.setName(nameHolder);

	int placeHolder{};

	while (Game::isDone())
	{
		system("cls");
		Game::showTable();
		Player* tempPlayer = new Player{ Game::whichPlayer(p1, p2) };
		
		std::cout << tempPlayer->getName() << ", please choose a place: ";
		std::cin >> placeHolder;
		Game::placeData(tempPlayer, placeHolder-1);
		//if (!(Game::isMinePressed(placeHolder - 1)))
		//{
		//	Game::setIsOver(0);
		//	std::cout << "\n"  << tempPlayer->getName() << " steeped a mine and has lost the game.\n.";
		//	Game::isDone();
		//}

	}

	std::cout << "\n" << Game::whoWon(p1, p2).getName() << " has won the game!\n";
}