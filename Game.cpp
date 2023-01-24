#include "Game.h"
#include "GameState.h"
#include "Player.h"

std::vector<char> Game::gameData{ '1', '2', '3', '4', '5', '6', '7', '8', '9', };
bool Game::isOver{ 1};
int Game::mine{1};

bool Game::isDone()
{
    if ((gameData.at(0) == gameData.at(1) && gameData.at(1) == gameData.at(2) ||
        gameData.at(3) == gameData.at(4) && gameData.at(4) == gameData.at(5) ||
        gameData.at(6) == gameData.at(7) && gameData.at(7) == gameData.at(8)))
        isOver = 0;

    if ((gameData.at(0) == gameData.at(3) && gameData.at(3) == gameData.at(6) ||
        gameData.at(1) == gameData.at(4) && gameData.at(4) == gameData.at(7) ||
        gameData.at(2) == gameData.at(5) && gameData.at(5) == gameData.at(8)))
        isOver = 0;

    if ((gameData.at(0) == gameData.at(4) && gameData.at(4) == gameData.at(8) ||
        gameData.at(2) == gameData.at(4) && gameData.at(4) == gameData.at(6)))
        isOver = 0;

    return isOver;
}

void Game::setIsOver(bool _data)
{
    isOver = _data;
}

void Game::showTable()
{
        std::cout << " " << gameData.at(0)
        << " | " << gameData.at(1)
        << " | " << gameData.at(2) << std::endl
        << "-----------" << std::endl
        << " " << gameData.at(3)
        << " | " << gameData.at(4)
        << " | " << gameData.at(5) << std::endl
        << "-----------" << std::endl
        << " " << gameData.at(6)
        << " | " << gameData.at(7)
        << " | " << gameData.at(8) << std::endl;
}

Player Game::whichPlayer(Player& p1, Player& p2)
{
    if (p1.getData() == 1)
    {
        p1.setData(2);
        p2.setData(1);

        return p1;
    }

    else
    {
        p2.setData(2);
        p1.setData(1);

        return p2;
    }
}

void Game::placeData(Player*& pl, int _data)
{
    gameData.at(_data) = pl->getHolder();
}

int Game::getMine()
{
    return mine;
}

bool Game::isMinePressed(int placeHolder)
{
    if (getMine() == placeHolder)
        return 0;
    return 1;
}

Player Game::whoWon(Player& p1, Player& p2)
{
    if (p1.getData() == 2)
        return p1;
    return p2;
}
