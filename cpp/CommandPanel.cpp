#include "CommandPanel.h"

void CommandPanel::ShowProducts() {
	std::list<CakeRecipe>::iterator it;
	for (it = menu.begin(); it != menu.end(); ++it)
		std::cout << it->getName() << "\n";
}
void CommandPanel::SelectProduct(std::string _name) {
	bool ok = 0;
	std::list<CakeRecipe>::iterator it;
	for (it = menu.begin(); it != menu.end(); ++it)
		if (it->getName() == _name)
			ok = 1;

	if (ok == 0)
		std::cout << "Nu vindem aceasta prajitura, ne pare rau!\n";
	else
		commandTaker.TakeCommand(_name);

}
void CommandPanel::SelectProduct(std::string _name, int _amount) {
	bool ok = 0;
	std::list<CakeRecipe>::iterator it;
	for (it = menu.begin(); it != menu.end(); ++it)
		if (it->getName() == _name)
			ok = 1;

	if (ok == 0)
		std::cout << "Nu vindem aceasta prajitura, ne pare rau!\n";
	
	else if (1<=_amount && _amount<=20){
	
		CakeRecipe aux=CakeRecipe(_name, 5);
		commandTaker.TakeCommand(aux, _amount);
	
	
	}
	else 
		std::cout << "Ne cerem scuze, dar aparatul poate produce pana la 20 de bucati.\n";
}
void CommandPanel::showProductsInCarousel() {
	commandTaker.getCakesFromCarousel();
}