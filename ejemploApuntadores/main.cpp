#include <iostream>
#include <conio.h>
#include <vector>

using std::cout;
using std::vector;

int main() 
{

	int numero = 21;
	//variable apuntador a un entero
	//almacena direccion de memoria
	int* numeroPtr = nullptr;

	//Operador &: Devuelve la direccion de memoria de su operando
	numeroPtr = &numero;

	cout << "Valor de numero: " << numero << "\n";
	cout << "Valor de numeroPtr: " << numeroPtr << "\n";

	cout << "\n";

	cout << "Direccion de memoria de numero: " << &numero << "\n";
	cout << "Direccion de memoria de numeroPtr: " << &numeroPtr << "\n";


	//Operador *: Devuelve el valor contenido en una direccion de memoria
	*numeroPtr = 8;

	cout << "\nNuevo valor de numero: " << numero << "\n";

	numero = 33;

	cout << "Valor depositado en la posicion de memoria: " << *numeroPtr << "\n";


	//Arrays

	//arreglo de tamaño fijo
	int notas[5];
	//arreglo dinamico
	vector<int> lista;

	//definicion de arreglo con apuntadores

	int* intArray = nullptr;
	intArray = new int[3];


	intArray[0] = 21;
	intArray[1] = 11;
	intArray[2] = 3;

	for (int i = 0; i < 4; i++) 
	{
		cout << "arrayInt[" << i << "]: { valor: " << intArray[i] << ", direccion: " << &intArray[i] << "}\n";
	}



	_getch();

}