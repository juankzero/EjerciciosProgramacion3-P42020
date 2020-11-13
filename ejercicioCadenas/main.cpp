
#include  <conio.h>

#include <string>
#include <iostream>

//using namespace std;

using std::string;
using std::cout;
using std::cin;

int main() 
{
	string nombre;
	string apellidos;

	nombre = "Teodoro";
	apellidos = "Rivas Lopez";

	string nombreCompleto = nombre + ' ' + apellidos; //TeodoroRivas Lopez

	cout << "Nombre: " << nombreCompleto << "\n";
	cout << "Longitud de la cadena: " << nombreCompleto.size() << "\n";

	//Forma de crear cadenas en C
	//Cadenas de tamaño fijo

	char nombreEmpleado[20];
	char apellidosEmpleado[20];

	cout << "Ingrese un nombre: ";
	cin >> nombreEmpleado;

	cout << "Ingrese sus apellidos: ";
	cin >> apellidosEmpleado;

	char nombreCompletoC[40];
	//nombreCompletoC = nombreEmpleado + apellidosEmpleado;// No es posible en C/C++
	strcpy_s(nombreCompletoC, strlen(nombreEmpleado) + 1, nombreEmpleado);
	strcat_s(nombreCompletoC, strlen(nombreCompletoC) + strlen(apellidosEmpleado) + 1,  apellidosEmpleado);


	cout << "Empleado ingresado: " << nombreCompletoC << "\n";

	//definir un arreglo dinamico de caracteres
	char* nombreCompletoC2; // variable apuntador a un char (almacena direccion de memoria)
	nombreCompletoC2 = new char[strlen(nombreEmpleado) + strlen(apellidosEmpleado) + 1];

	char espacio = ' ';

	strcpy_s(nombreCompletoC2, strlen(nombreEmpleado) + 1, nombreEmpleado);
	strcat_s(nombreCompletoC2, strlen(nombreCompletoC2) + 2, " ");
	strcat_s(nombreCompletoC2, strlen(nombreCompletoC2) + strlen(apellidosEmpleado) + 1
				, apellidosEmpleado);

	cout << "Nombre concatenado: " << nombreCompletoC2 << "\n";
	cout << "Longitud de cadena: " << strlen(nombreCompletoC2) << "\n";


	_getch();
}