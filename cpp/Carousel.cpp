#include "Carousel.h"

Cake CarouselOfCakes::getCake(std::string _name){
for (int i = 0; i < maxCapacity; i++) {
	if (storage[i] != nullptr) {
		if ((*storage[i]).getName().compare(_name) != 1) {
			Cake takeCake = *storage[i];
			delete storage[i];
			storage[i] = nullptr;
			return takeCake;
		}
	}
}
return Cake("");

}
bool CarouselOfCakes::addCake(Cake cake) {
	for (int j = 0; j < maxCapacity; j++) {
		if (storage[j] != nullptr) {
			
		}
		else {
			storage[j] = new Cake(cake.getName());
			return 1;
		}
	}
	return 0; 
}
int CarouselOfCakes::getCurrentCapacity() {
	unsigned int size = 0;
	for (int h = 0; h < maxCapacity; h++) {
		if (storage[h] != nullptr) {
			size++;
		}
	}
	return size;
}
void CarouselOfCakes::getCakesFromCarousel() {
	unsigned int i = 0, size = getCurrentCapacity();
	for (i = 0; i < size; i++)
		std::cout << storage[i]->getName()<<" ";
	
	std::cout << '\n';
}