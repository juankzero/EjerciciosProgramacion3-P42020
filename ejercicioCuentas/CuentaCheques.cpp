#include "CuentaCheques.h"

#include <iostream>
using namespace std;

CuentaCheques::CuentaCheques(double saldoInicial, double cuotaTrans)
	: Cuenta(saldoInicial), cuotaTransaccion(cuotaTrans)
{

	if (cuotaTrans >= 0)
		cuotaTransaccion = cuotaTrans;
	else
		throw invalid_argument("Cuota de transaccion debe ser >= 0.0");
}

void CuentaCheques::cargarCuotaTransaccion() 
{
	actualizarSaldo( obtenerSaldo() - cuotaTransaccion );
	cout << "L" << cuotaTransaccion << " cuota de transaccion cargada.\n";
}

//redefinicion de funcion abonar
void CuentaCheques::abonar(double cantidad) 
{
	Cuenta::abonar(cantidad);
	cargarCuotaTransaccion();
}

bool CuentaCheques::cargar(double cantidad) 
{
	bool resultado = Cuenta::cargar(cantidad);

	if (resultado)
	{
		cargarCuotaTransaccion();
		return true;
	}
	else
		return false;

}