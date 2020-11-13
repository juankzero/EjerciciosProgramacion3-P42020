#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta(string numeroCuenta, double saldoInicial) : saldo(0)
{
	if (saldoInicial >= 0)
		saldo = saldoInicial;
	else
		throw invalid_argument("Saldo Inicial no puede ser negativo");
}

//suma al saldo la cantidad a depositar en la cuenta
void Cuenta::abonar(double cantidad) 
{
	saldo = saldo + cantidad;
	//saldo += cantidad;
}

bool Cuenta::cargar(double cantidad) 
{
	if (cantidad > saldo)
	{
		cout << "Cargo a la cuenta excede el saldo actual.\n";
		return false;
	}
	else
	{
		saldo = saldo - cantidad;
		return true;
	}
}

double Cuenta::obtenerSaldo() 
{
	return saldo;
}

void Cuenta::actualizarSaldo(double saldoActualizado) 
{
	saldo = saldoActualizado;
}