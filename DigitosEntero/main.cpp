
#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;

/*
* Este programa solicita un numero al usuario
* y lo divide en digitos individuales
*/

int main()
{
	cout << "Ingrese un numero de 5 digitos: ";
	int numero = 0;
	cin >> numero;

	/*int digito1 = numero / 10000;
	int digito2 = (numero % 10000) / 1000;
	int digito3 = ((numero % 10000) % 1000) / 100;
	int digito4 = (((numero % 10000) % 1000) % 100) / 10;
	int digito5 = (((numero % 10000) % 1000) % 100) % 10;

	cout << "digitos{ " << digito1 << "   " << digito2 << "   " << digito3 <<
		"   " << digito4 << "   " << digito5 << " }\n";*/

	//Solucion 2 (Ciclo for)

	int divisor = 10000;

	int numeros[5];

	int temp = numero;
	for (int i = 0; i < 5; i++)
	{
		numeros[i] = numero / divisor;
		numero = numero % divisor;
		divisor = divisor / 10;
	}

	cout << "digitos{ ";
	for (int i = 0; i < 5; i++)
	{
		cout << numeros[i] << "   ";
	}
	cout << " }\n";

	_getch();
}
