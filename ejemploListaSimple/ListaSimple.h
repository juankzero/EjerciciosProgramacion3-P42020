#pragma once

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple 
{
public:
	ListaSimple();

	void agregarNodo(int);
	void eliminarNodo(int);
	void ordenarElementos(); //ordenar los elementos en la lista haciendo uso del algoritmo
							// de ordenamiento burbuja
	void imprimirLista();

	int obtenerTamanio();
	

private:
	//primer elemento de la lista
	Nodo* primero;
	bool estaVacia();
	bool existeNodo(int);

	Nodo* obtenerPosNodo(int);
	void intercambio(Nodo*, Nodo*);
};

#endif // !LISTASIMPLE_H
