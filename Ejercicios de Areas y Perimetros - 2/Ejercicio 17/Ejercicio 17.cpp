//Realizar un programa que permita calcular el área de la región sombreada, sabiendo que los lados del hexágono regular son diámetros.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, pi, As;
	cout << "Lado: "; cin >> a;
	pi = 3, 14;
	As = pi * a * a;
	cout << "El area sombreada es: " << As << endl;
	return 0;
}
