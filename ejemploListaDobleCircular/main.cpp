
#include <conio.h>
#include "ListaCircular.h"

int main() 
{
	ListaCircular ls;

	ls.agregarNodo("Ana");
	ls.agregarNodo("Bob");
	ls.agregarNodo("Lee");
	ls.agregarNodo("Mark");

	ls.imprimirLista();
	ls.imprimirListaReversa();

	ls.eliminarNodo("Bob");
	ls.eliminarNodo("Ana");

	ls.imprimirLista();


	_getch();
}