#include <iostream>
#include <conio.h>

#include "Racional.h"

using std::cout;

int main()
{
	/*Este ejercicio simula operaciones
	matematicas con numeros Racionales (Fracciones)*/

	Racional r1(2, 3); // 2/3
	Racional r2(4, 3); // 4/3

	Racional resultado = r1.suma(r2);
	//Racional result = suma(r1, r2);

	cout << "R1: \n";
	r1.imprimirRacional();
	r1.imprimirDecimal();

	cout << "\n";

	cout << "R2: \n";
	r2.imprimirRacional();
	r2.imprimirDecimal();

	cout << "Resultado: \n";
	resultado.imprimirRacional();
	resultado.imprimirDecimal();



	_getch();
}