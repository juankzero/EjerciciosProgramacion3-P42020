#pragma once

#ifndef RECTANGULO_H
#define RECTANGULO_H

//definicion de clase en C++

class Rectangulo 
{
public:
	Rectangulo(); //prototipo de constructor
	Rectangulo(int, int); //prototipo de constructor con parametros

	void setBase(int);
	void setAltura(int);

	int getBase();
	int getAltura();

	int getArea();
	int getPerimetro();

private:
	int base, altura;
};


#endif // !RECNTAGULO_H

