#pragma once
#include "Cake.h"
class CakeRecipe
{
private:
	std::string name;
	int time;
public:
	CakeRecipe() { name = "n/a"; time = -1; }
	CakeRecipe(std::string _name, int _time) { name = _name; time = _time; }

	std::string getName() { return name; }
	int getTime() { return time; }


};

