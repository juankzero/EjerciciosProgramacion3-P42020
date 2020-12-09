
#include "Empresa.h"

#include <fstream> //hacer uso de archivos en c++
#include <iostream>

using namespace std;

void Empresa::agregarEmpleados() 
{
	//formatos para manipular archivos
	// lectura   -> ifstream
	// escritura -> ofstream

	ofstream archivoEmpleados("empleados.dat", ios::app);

	//valida si el archivo existe o hubo un problema al abrirlo
	if (!archivoEmpleados)
	{
		cout << "Error al intentar abrir archivo .dat\n";
		return;
	}

	int cantidadEmpleados = 0;
	cout << "Ingrese cantidad de empleados a agregar: ";
	cin >> cantidadEmpleados;

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "\n\n *** I N G R E S O  D E  E M P L E A D O S ***\n\n";

	for (int i = 0; i <cantidadEmpleados; i++) 
	{
		cout << "Empleado " << (i + 1) << ": \n";

		cout << "Ingrese codigo de Empleado: ";
		cin >> codigoEmpleado;

		cout << "Ingrese nombre de Empleado: ";
		cin >> nombreEmpleado;

		cout << "Ingrese salario de Empleado: ";
		cin >> salarioEmpleado;

		archivoEmpleados << codigoEmpleado << ' ' << nombreEmpleado << ' ' << salarioEmpleado << '\n';

		cout << "Empleado almacenado!\n";
	}

	archivoEmpleados.close();
}

void Empresa::imprimirEmpleados() 
{
	//lectura de un archivo de texto
	ifstream archivoEmpleados("empleados.dat", ios::in);

	if (!archivoEmpleados)
	{
		cout << "Error al intentar abrir el archivo .dat\n";
		return;
	}

	cout << "\n\n *** C O N S U L T A  D E  E M P L E A D O S ***\n\n";

	int codigoEmpleado;
	char nombreEmpleado[20];
	float salarioEmpleado;

	cout << "Codigo\tNombre\tSalario\n";

	while (archivoEmpleados >> codigoEmpleado >> nombreEmpleado >> salarioEmpleado) 
	{
		cout << codigoEmpleado << '\t' << nombreEmpleado << '\t' << salarioEmpleado << '\n';
	}

	archivoEmpleados.close();

}