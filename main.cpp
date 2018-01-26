#include "Figura.h"
#include "Trojkat.h"
#include "Kwadrat.h"
#include "Kolo.h"
#include <iostream>

using namespace std;

int main(){
	
	int bok=0;
	int wysokosc=0;
	std::cout << "Podaj dlugosc podstawy/promienia (dla Kwadratu - bok, Kolo - promien, Trojkat - podstawa): " ;
	std::cin >> bok;
	std::cout << "Podaj dlugosc wysokosci (Dla Trojkata): " ;
	std::cin >> wysokosc;
	
	Kwadrat kwadrat(bok);
	Kolo kolo(bok);
	Trojkat trojkat(bok, wysokosc);

	std::cout << "=======================" << std::endl;
	std::cout << "Pole kwadratu rowna sie: " << kwadrat.calculate_area() << std::endl;
	std::cout << "Pole kola rowna sie: " << kolo.calculate_area() << std::endl;
	std::cout << "Pole Trojkata rowna sie: " << trojkat.calculate_area() << std::endl;
	
	return 0;
}
