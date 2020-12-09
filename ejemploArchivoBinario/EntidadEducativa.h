#pragma once

#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H


//estructura de tamaño fijo

struct alumno 
{
	int cuenta; // 4 bytes
	char nombre[20]; // 20 bytes
	float promedio; // 4 bytes
}; // sizeof = 28 bytes

class EntidadEducativa 
{
public:
	static void agregarAlumnos();
	static void consultarAlumnos();

};

#endif // !UNIVERSIDAD_H
