
#include"CommandPanel.h"

int main() {
	CommandPanel menu = CommandPanel();
	int input, n;
	std::string buffer;
	do {
		std::cout << "Bine ati venit la Caruselul cu Prajituri!\n1.Afisati Produse\n2.Alegeti o Prajitura\n3.Comanda Multipla\n4.Carusel\n0.Iesire\n";
		delay(500);
		std::cin >> input;
		if (!std::cin) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Va rugam introduceti input valid.";
			input = -1;
		}
		switch (input) {
		case 1:
			menu.ShowProducts();
			break;
		case 2:std::cout << "Ce prajitura ati dorii sa comandati?\n";
			getchar();
			std::getline(std::cin, buffer);
			//std::cout << "Pregatim prajitura: " << buffer<<"\n";
			menu.SelectProduct(buffer);
			break;
		case 3:std::cout << "Ce prajitura ati dorii sa comandati?\n";
			getchar();
			std::getline(std::cin, buffer);
			std::cout << "Cate bucati ati dorii sa comandati?\n";
			std::cin >> n;
			if (!std::cin){
				std::cin.clear(); 
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 
				std::cout << "Va rugam introduceti input valid.";
				
			}

			else
				menu.SelectProduct(buffer, n);
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
				
			break;
		case 4:menu.showProductsInCarousel();
			break;
		case 0:std::cout<<"Mai veniti pe la noi!\n";
			break;
		default:std::cout << "Alegeti o optiune valida.\n";
			break;
		}
	
	
	} while (input != 0);
	return 0;
}