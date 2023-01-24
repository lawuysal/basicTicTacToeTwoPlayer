#include "Player.h"

Player::Player(std::string _name, int _data, char _holder)
	:name{ _name }, data{ _data }, holder{_holder}
{

}

void Player::setName(std::string _name)
{
	name = _name;
}

std::string Player::getName() const
{
	return name;
}

void Player::setData(int _data)
{
	data =_data;
}

int Player::getData() const
{
	return data;
}

char Player::getHolder() const
{
	return holder;
}

