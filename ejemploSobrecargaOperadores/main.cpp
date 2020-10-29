
#include <iostream>
#include <conio.h>

#include "Numero.h"

using namespace std;

int main() 
{
	Numero a(11);
	Numero b(3);
	Numero c;

	cout << "Valor de a: " << a << "\n";
	cout << "Valor de b: " << b << "\n";
	cout << "Valor de c: " << c << "\n";

	c = a + b;

	cout << "Valor de c: " << c << "\n";

	Numero d;
	d = c ^ 3; // exponenciacion

	cout << "valor de d: " << d << "\n";

	Numero e;
	cout << "Ingrese un valor: ";
	cin >> e;

	Numero f = e + a; // 4 + 11 = 15

	cout << "Valor de f: " << f << "\n"; // 15

	f++; //15

 	cout << "valor de f: " << f << "\n"; // 16
	cout << "valor de f aumentado: " << f << "\n"; //16
	
	/*if (a > b)
		cout << "A es mayor que b";*/

	cout << ((c > d) ? "C es mayor que D" : "D es mayor que C") << "\n";


	_getch();
}