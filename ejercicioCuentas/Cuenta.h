#pragma once

#ifndef CUENTA_H
#define CUENTA_H

class Cuenta 
{
public:
	Cuenta(double);
	void abonar(double);
	bool cargar(double);
	double obtenerSaldo();
	void actualizarSaldo(double);

private:
	double saldo;
};

#endif