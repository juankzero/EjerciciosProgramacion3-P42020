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
	if (existeNodo(_valor))
		return;

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

	cout << std::endl;
}

void ListaSimple::eliminarNodo(int _valor) 
{
	if (estaVacia())
		return;

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	do
	{
		if (actual->getValor() == _valor)
		{
			if (actual == primero)
			{
				primero = actual->getSiguiente();
				delete actual;
			}
			else
			{
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
			}

			cout << "Nodo eliminado!\n";
			return;
		}

		anterior = actual;
		actual = actual->getSiguiente();


	} while (actual != nullptr);

}

bool ListaSimple::existeNodo(int _valor) 
{

	if (estaVacia())
		return false;

	Nodo* actual = primero;

	while (actual != nullptr) 
	{
		if (actual->getValor() == _valor)
			return true;

		actual = actual->getSiguiente();
	}

	return false;
}

//Deveulve la cantidad de elementos en la lista
int ListaSimple::obtenerTamanio() 
{
	if (estaVacia())
		return 0;

	int cantidad = 0;
	Nodo* actual = primero;

	do 
	{
		cantidad++;
		actual = actual->getSiguiente();


	} while (actual != nullptr);

	return cantidad;
}

Nodo* ListaSimple::obtenerPosNodo(int _posicion) 
{
	if (estaVacia())
		return nullptr;
	
	Nodo* actual = primero;
	int posActual = 0;

	do
	{
		if (posActual == _posicion)
			return actual;

		posActual++;
		actual = actual->getSiguiente();

	} while (actual != nullptr);

	return nullptr;

}

//Se ordena la lista mediante el algoritmo Bubble Sort
void ListaSimple::ordenarElementos() 
{
	int n = obtenerTamanio();
	
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			Nodo* a = obtenerPosNodo(j);
			Nodo* b = obtenerPosNodo(j + 1);

			if (a->getValor() > b->getValor())
				intercambio(a, b);
		}
	}
}

void ListaSimple::intercambio(Nodo* a, Nodo* b) 
{
	int temp = a->getValor();
	a->setValor(b->getValor());
	b->setValor(temp);
}