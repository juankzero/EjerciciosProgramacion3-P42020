
#include "Racional.h"
#include <iostream>

using std::cout;

Racional::Racional() : numerador(1), denominador(1)
{}

Racional::Racional(int _num, int _den) : numerador(_num), denominador(_den)
{}

void Racional::imprimirRacional() // 3/4
{
	if (numerador == 0 && denominador == 0)
	{
		cout << "Resultado indefinido\n";
		return;
	}
	else if (denominador == 0)
	{
		cout << "No se puede dividir por cero\n";
		return;
	}

	cout << numerador << "/" << denominador << "\n";
}

void Racional::imprimirDecimal() // 0.75
{
	if (numerador == 0 && denominador == 0)
	{
		cout << "Resultado indefinido\n";
		return;
	}
	else if (denominador == 0)
	{
		cout << "No se puede dividir por cero\n";
		return;
	}

	cout << (float(numerador) / float(denominador)) << "\n";
	
}

Racional Racional::suma(Racional r2) 
{

	//cuando ambos denominadores sean iguales
	if (this->denominador == r2.denominador)
		return Racional(this->numerador + r2.numerador, r2.denominador);

	return Racional();


}