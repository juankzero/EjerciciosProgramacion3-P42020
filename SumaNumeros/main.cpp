
#include <iostream>
#include <conio.h>

//using std::cout;
//using std::cin;
//using std::endl;

using namespace std;

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

	cout << "Ingrese numero 1: ";
	cin >> numero1;
	cout << "Ingrese numero 2: ";
	cin >> numero2;

	suma = numero1 + numero2;

	cout << "La suma es: " << suma << endl;

	_getch();
}