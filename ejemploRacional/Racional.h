#pragma once

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional 
{
public:
	Racional();
	Racional(int, int);

	void imprimirRacional(); // 17/6
	void imprimirDecimal();  // 2.8333

	Racional suma(Racional r2);

private:
	int numerador, denominador;
	void simplificar();
};

// prototipo de funcion externa (clase) de suma
Racional suma(Racional, Racional);

#endif