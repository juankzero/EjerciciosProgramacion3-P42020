#pragma once

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple 
{
public:
	ListaSimple();

	bool estaVacia();
	void agregarNodo(int);
	void eliminarNodo(int);

	void imprimirLista();

private:
	//primer elemento de la lista
	Nodo* primero;
};

#endif // !LISTASIMPLE_H
