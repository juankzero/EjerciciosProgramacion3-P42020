#include "CuentaAhorros.h"

#include <iostream>
using namespace std;

CuentaAhorros::CuentaAhorros(double saldoInicial, double _tasaInteres)
	: Cuenta(saldoInicial), tasaInteres(_tasaInteres)
{

	if (_tasaInteres >= 0)
		tasaInteres = _tasaInteres;
	else
		throw invalid_argument("Tasa de interes debe ser >= 0.0");
}

double CuentaAhorros::calcularInteres() 
{
	return obtenerSaldo() * tasaInteres;
}