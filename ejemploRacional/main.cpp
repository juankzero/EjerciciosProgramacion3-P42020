#include <iostream>
#include <conio.h>

#include "Racional.h"

using std::cout;

int main()
{
	/*Este ejercicio simula operaciones
	matematicas con numeros Racionales (Fracciones)*/

	Racional r1(1, 3); // 1/3
	Racional r2(4, 2); // 4/2
	Racional r3(5, 4);

	Racional resultado = r1.multiplicacion(r2).suma(r3).potencia(3);
	//Racional result = suma(r1, r2);

	cout << "R1: \n";
	r1.imprimirRacional();
	r1.imprimirDecimal();

	cout << "\n";

	cout << "R2: \n";
	r2.imprimirRacional();
	r2.imprimirDecimal();

	cout << "\n";

	cout << "R3: \n";
	r3.imprimirRacional();
	r3.imprimirDecimal();

	cout << "\n";

	cout << "Resultado: \n";
	resultado.imprimirRacional();
	resultado.imprimirDecimal();



	_getch();
}