//Una piscina tiene forma de prisma rectangular de dimensiones 25m x 15m x 3m.¿Cuántos litros de agua son necesarios para llenar los 4 / 5 de su volumen ? .
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c, V, li;
	cout << "Lado 1: "; cin >> a;
	cout << "Lado 2: "; cin >> b;
	cout << "Lado 3: "; cin >> c;
	V = a * b * c * 4 / 5;
	li = V * 1000;
	cout << "Son necesarios " << li << " litros para llenar los 4/5 de la piscina";
	return 0;
}
