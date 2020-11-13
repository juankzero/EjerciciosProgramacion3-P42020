
#include <iostream>
#include <conio.h>

#include "Cadena.h"

using std::cout;


int main() 
{
	Cadena c1("Hola ");
	Cadena c2("Mundo!");

	Cadena c3 = c1 + c2;

	cout << "Resultado: " << c3;

	Cadena c4 = " desde Programacion 3";

	c3 += c4;

	cout << "\n\nResultado: " << c3; //Hola Mundo! desde Programacion 3

	_getch();
}