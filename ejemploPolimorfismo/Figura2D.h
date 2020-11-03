#pragma once

#ifndef FIGURA2D_H
#define FIGURA2D_H

//crear la definicion de clase abstracta (clase padre)

enum TipoFigura 
{
	tRectangulo, //0
	tTrianguloRectangulo, //1
	tCirculo, //2
	tCuadrado, //3
	tTrianguloIsosceles //4
};

//definicion de clase abstracta
class Figura2D 
{
public:
	//funcion virtual hace que la clase sea abstracta
	// = 0, obliga que la implementacion de esta funcion se haga
	// en la clases hijas
	virtual float getArea() = 0;
	virtual float getPerimetro() = 0;
	virtual void imprimirFigura() = 0;
	virtual TipoFigura getTipo() = 0;
};


#endif // !FIGURA2D_H
