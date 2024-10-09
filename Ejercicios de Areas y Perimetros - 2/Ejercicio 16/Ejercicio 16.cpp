//Realizar un programa que permita calcular el área de la región sombreada, si ABCD es un cuadrado de lado “2a”.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, pi, Aens, As;
	cout << "Lado: "; cin >> a;
	pi = 3, 14;
	Aens = (2 * a * 2 * a) - (pi * 2 * a * 2 * a);
	As = (pi * 2 * a * 2 * a) - Aens;
	cout << "El area sombreada es: " << As << endl;
	return 0;
}
