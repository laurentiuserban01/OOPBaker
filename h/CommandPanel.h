#pragma once
#include "CommandTaker.h"
#include<list>
class CommandPanel
{private:
	std::list<CakeRecipe> menu;
	CommandTaker commandTaker;
public:
	CommandPanel() {
		CakeRecipe c0 = CakeRecipe("Tiramisu", 5);
		CakeRecipe c1 = CakeRecipe("Amandina", 5);
		CakeRecipe c2 = CakeRecipe("Savarina", 5);
		menu.push_back(c0);
		menu.push_back(c1);
		menu.push_back(c2);
		commandTaker = CommandTaker(c0);
		if(commandTaker.checkCarouselOfCakes()==0)
			commandTaker.refillCarousel();//random fill would be neat here
	}
	void ShowProducts();
	void SelectProduct(std::string _name);
	void SelectProduct(std::string _name, int _amount);
	void showProductsInCarousel();


};

