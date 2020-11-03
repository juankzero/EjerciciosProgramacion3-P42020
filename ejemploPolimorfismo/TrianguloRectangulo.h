#pragma once

#ifndef TRIANGULO_RECT_H
#define TRIANGULO_RECT_H

#include "Figura2D.h"

class TrianguloRectangulo : public Figura2D
{
public:
	TrianguloRectangulo();
	TrianguloRectangulo(int, int);

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();
	float getHipotenusa();

	//definiciones de las funciones heredadas
	float getArea();
	float getPerimetro();
	void imprimirFigura();
	TipoFigura getTipo();
	

private:
	int base, altura, hipotenusa;
};

#endif // !TRIANGULO_RECT_H
