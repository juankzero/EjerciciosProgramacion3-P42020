
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