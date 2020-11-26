
#include <conio.h>
#include "ListaCircular.h"

int main() 
{
	ListaCircular ls;

	ls.agregarNodo("Ana");
	ls.agregarNodo("Bob");
	ls.agregarNodo("Lee");

	ls.imprimirLista();


	_getch();
}