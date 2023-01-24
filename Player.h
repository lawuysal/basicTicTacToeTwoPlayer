#pragma once

#include <string>

class Player
{
private:
	int data;
	char holder;
	std::string name;

public:
	Player(std::string, int, char);
	
	void setData(int);
	void setName(std::string);
	
	int getData() const;
	std::string getName() const;
	char getHolder() const;
};

