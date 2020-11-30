
#include "ListaCircular.h"
#include <iostream>

using std::cout;

ListaCircular::ListaCircular() : primero(nullptr), ultimo(nullptr)
{}

bool ListaCircular::estaVacia() 
{
	return primero == nullptr;
}

void ListaCircular::agregarNodo(const char* _valor) 
{

	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);
	
	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}

	cout << "Nodo agregado!\n";
}

void ListaCircular::imprimirLista() 
{
	
	if (estaVacia())
		return;

	Nodo* actual = primero;


	do 
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);

	cout << std::endl;

}

void ListaCircular::imprimirListaReversa() 
{
	if (estaVacia())
		return;

	Nodo* actual = ultimo;

	do 
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();
	} while (actual != ultimo);

	cout << "\n";
}

void ListaCircular::eliminarNodo(const char* _valor) 
{
	if (estaVacia())
		return;

	Nodo* actual = primero;

	do 
	{
		if (strcmp(actual->getValor(), _valor) == 0) // las cadenas son iguales
		{
			if (actual == primero)
			{
				primero = actual->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);
			}
			else if (actual == ultimo) 
			{
				ultimo = ultimo->getAnterior();
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);
			}
			else //eliminacion en medio
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}

			delete actual;
			return;
		}
		actual = actual->getSiguiente();
	} while (actual != primero);


}