
#include "ArbolBinario.h"
#include <iostream>

using std::cout;

ArbolBinario::ArbolBinario() : raiz(nullptr)
{}

void ArbolBinario::agregarNodo(int _valor) 
{
	//llamada a funcion recursiva de insertar
	raiz = agregarNodoRec(raiz, _valor);
}

NodoArbol* ArbolBinario::agregarNodoRec(NodoArbol* _raizTmp, int _valor) 
{
	//caso base

	if (_raizTmp == nullptr)
	{
		NodoArbol* nuevo = new NodoArbol(_valor, nullptr, nullptr);
		_raizTmp = nuevo;
	}
	else if (_valor > _raizTmp->getValor()) //enviar el nodo a la derecha
	{
		_raizTmp->setHijoDerecho(agregarNodoRec(_raizTmp->getHijoDerecho(), _valor));
	}
	else if (_valor < _raizTmp->getValor()) //enviar el nodo a la izquierda
	{
		_raizTmp->setHijoIzquierdo(agregarNodoRec(_raizTmp->getHijoIzquierdo(), _valor));
	}

	return _raizTmp;
}

void ArbolBinario::imprimirArbol() 
{
	imprimirRec(raiz);
	cout << "\n";
}

//preorden
void ArbolBinario::imprimirRec(NodoArbol* _raizTmp) 
{
	if (_raizTmp == nullptr)
		return;

	cout << "[ " << _raizTmp->getValor() << " ] ";
	imprimirRec(_raizTmp->getHijoIzquierdo());
	imprimirRec(_raizTmp->getHijoDerecho());

}