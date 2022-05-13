#pragma once
#include "CakeRecipe.h"
class CakeMaker
{
public:
	CakeMaker(){}
	Cake takeCommand(CakeRecipe _recipe) {

		std::string _string = _recipe.getName();
		int _time = _recipe.getTime();

		Cake aux = Cake(_string);
		std::cout << "Baking...\n";
		delay(5000);
		std::cout << "Cake ready!\n";
		delay(200);
		return aux;
	}

};

