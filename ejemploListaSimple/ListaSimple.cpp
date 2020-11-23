#include "ListaSimple.h"

#include <iostream>

using std::cout;

ListaSimple::ListaSimple() : primero(nullptr)
{
	cout << "Lista creada!\n";
}

bool ListaSimple::estaVacia() 
{
	return primero == nullptr;
}

void ListaSimple::agregarNodo(int _valor) 
{
	Nodo* nuevo = new Nodo(_valor, nullptr);

	if (estaVacia())
	{
		//se agrega el primer elemento de la lista
		primero = nuevo;
	}
	else
	{
		//recorrer la lista y ubicarme en el ultimo elemento
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr) 
		{
			actual = actual->getSiguiente();
		}

		//agregamos como siguiente del ultimo al nuevo nodo
		actual->setSiguiente(nuevo);

	}


	cout << "Nodo agregado!\n";
}

void ListaSimple::imprimirLista() 
{
	if (estaVacia())
		return;

	Nodo* actual = primero;

	do 
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != nullptr);

}