#include <conio.h>
#include <vector> //arreglo dinamico (ArrayList en java)

#include "Figura2D.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

#include <iostream>

using namespace std;

int main() 
{
	//crear un arreglo de apuntadoras a Figuras2D de tamaño 4
	//estructura de tamaño fijo

	Figura2D* figuras[4];
	
	figuras[0] = new Rectangulo(4, 1);
	figuras[1] = new TrianguloRectangulo(5, 3);
	figuras[2] = new Rectangulo(4, 2);
	figuras[3] = new TrianguloRectangulo(6, 2);

	for (int i = 0; i < 4; i++) 
	{
		figuras[i]->imprimirFigura();
	}

	std::cout << "Se imprime posicion 0 del arreglo: ";

	//casteo a una instancia de Rectangulo
	((Rectangulo*)figuras[0])->setBase(5);
	((Rectangulo*)figuras[0])->setAltura(3);
	((Rectangulo*)figuras[0])->imprimirFigura();
	
	//Crear un arreglo dinamico de objetos de Figura2D

	cout << "\n\nElementos en Arreglo Dinamico\n\n";

	vector<Figura2D*> listaFiguras;

	listaFiguras.push_back(new Rectangulo(8, 3));
	listaFiguras.push_back(new TrianguloRectangulo(9, 4));

	cout << "Cantidad de elementos en lista de Figuras: " << listaFiguras.size() << "\n";

	for (int i = 0; i < listaFiguras.size(); i++) 
	{
		listaFiguras[i]->imprimirFigura();
	}

	//se elimina el primer elemento
	listaFiguras.erase(listaFiguras.begin());
	cout << "Se elimina el elemento inicial del vector";

	cout << "Cantidad de elementos en lista de Figuras: " << listaFiguras.size() << "\n";

	for (int i = 0; i < listaFiguras.size(); i++)
	{
		listaFiguras[i]->imprimirFigura();
	}

	/*Modificar todas las intancias de TrianguloRectangulo y que su base se aumente +6
	* y su altura + 2
	*/

	//determine con codigo cuentos instancias de TrianguloRectangulo existen

	int cantidadTR = 0;
	for (int i = 0; i < 4; i++) 
	{
		if (figuras[i]->getTipo() == TipoFigura::tTrianguloRectangulo)
		{
			cantidadTR++;
			TrianguloRectangulo* tr = (TrianguloRectangulo*)figuras[i];
			tr->setBase(tr->getBase() + 6);
			tr->setAltura(tr->getAltura() + 2);

			//((TrianguloRectangulo*)figuras[i])->setBase(((TrianguloRectangulo*)figuras[i])->getBase() + 6);
			//((TrianguloRectangulo*)figuras[i])->setAltura(((TrianguloRectangulo*)figuras[i])->getAltura() + 2);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		figuras[i]->imprimirFigura();
	}

	cout << "Cantidad de TrianguloRectangulos: " << cantidadTR << "\n";

	_getch();
}