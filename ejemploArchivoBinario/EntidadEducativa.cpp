#include "EntidadEducativa.h"

#include <fstream>
#include <iostream>

using namespace std;

void EntidadEducativa::agregarAlumnos() 
{
	ofstream alumnosFile("alumnos.bin", ios::out | ios::app | ios::binary);

	if (!alumnosFile)
	{
		cout << "Error al intentar abrir el archivo .bin\n";
		return;
	}

	cout << "*** I N G R E S O  D E  A L U M N O S ***\n\n";

	cout << "Indique cantidad de alumnos a ingresar: ";
	int cantidadAlumnos = 0;
	cin >> cantidadAlumnos;

	alumno nuevo;

	for (int i = 0; i < cantidadAlumnos; i++) 
	{
		cout << "Alumno " << (i + 1) << ": \n";
		
		cout << "Indique numero de Cuenta: ";
		cin >> nuevo.cuenta;

		cout << "Ingrese nombre: ";
		cin >> nuevo.nombre;

		nuevo.promedio = 0;

		alumnosFile.write(reinterpret_cast<const char*>(&nuevo), sizeof(alumno));

	}

	alumnosFile.close();

}