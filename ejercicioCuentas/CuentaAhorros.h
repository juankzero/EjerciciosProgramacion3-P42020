#pragma once

#ifndef CUENTA_AHORROS_H
#define CUENTA_AHORROS_H

#include "Cuenta.h"

// Cuenta Ahorros hereda atributos/metodos publicos de Cuenta
class CuentaAhorros : public Cuenta
{
public:
	CuentaAhorros(double, double);
	double calcularInteres();

private:
	double tasaInteres;

};

#endif
