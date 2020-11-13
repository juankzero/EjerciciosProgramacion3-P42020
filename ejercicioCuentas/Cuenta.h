#pragma once

#ifndef CUENTA_H
#define CUENTA_H

#include <string>

class Cuenta 
{
public:
	Cuenta(string, double);
	void abonar(double);
	bool cargar(double);
	double obtenerSaldo();
	void actualizarSaldo(double);

	//metodos sets y gets de numero de cuenta
	void establecerNumeroCuenta(string);
	string obtenernumeroCuenta();

private:
	string numeroCuenta; //CT-001
	double saldo;
};

#endif