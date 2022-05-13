#pragma once
#include"CakeMaker.h"

class CarouselOfCakes
{
private:
	Cake *storage[10];
	unsigned int maxCapacity = 10;
	unsigned int lowLimit = 3;

public:
	
	CarouselOfCakes() {
		for (int k = 0; k < maxCapacity; k++) {
			storage[k] = nullptr;
		}
	}

	bool addCake(Cake cake);
	Cake getCake(std::string _name);
	int getCurrentCapacity();
	void getCakesFromCarousel();//declared here to enable access to the storage; no idea how else to implement it and return Cake array
};

