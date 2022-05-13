#pragma once
#include "Carousel.h"
class CommandTaker
{private:
	CakeRecipe CarouselRecipe;
	CakeMaker maker;
	CarouselOfCakes carousel;

public:
	CommandTaker() {}
	CommandTaker(CakeRecipe _recipe) { CarouselRecipe = _recipe; }
	Cake TakeCommand(CakeRecipe _recipe);
	Cake* TakeCommand(CakeRecipe _recipe, int amount);
	Cake TakeCommand(std::string _name);
	void getCakesFromCarousel();
	bool checkCarouselOfCakes();//verificare sa fie itemi in numar de peste 3?
	bool refillCarousel();

};

