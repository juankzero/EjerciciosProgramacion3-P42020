
#include <iostream>
#include <conio.h>

/*
* Este programa suma dos numeros enteros
*/

int main()
{
	//int numero1, numero2, suma;

	/*int numero1 = 0;
	int numero2 = 0;
	int suma = 0;*/

	int numero1, numero2, suma;
	numero1 = numero2 = suma = 0;

	std::cout << "Ingrese numero 1: ";
	std::cin >> numero1;
	std::cout << "Ingrese numero 2: ";
	std::cin >> numero2;

	suma = numero1 + numero2;

	std::cout << "La suma es: " << suma << std::endl;

	_getch();
}