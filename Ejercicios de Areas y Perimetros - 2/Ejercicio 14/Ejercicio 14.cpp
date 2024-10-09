//Realizar un programa que permita calcular el volumen de una esfera.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float pi,r, V;
	cout << "Radio: "; cin >> r;
	pi = 3, 14;
	V = 4 / 3 * pi * r * r * r;
	cout << "El volumen de la esfera es: " << V << endl;
	return 0;
}
