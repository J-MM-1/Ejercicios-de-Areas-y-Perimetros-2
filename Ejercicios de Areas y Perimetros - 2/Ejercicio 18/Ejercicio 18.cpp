//Realizar un DF que permita calcular el volumen y superficie del siguiente cuerpo geométrico.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float r, h, A, V, pi;
	cout << "Radio: "; cin >> r;
	cout << "Altura: "; cin >> h;
	pi = 3, 14;
	A = ((pi * r * r) + (2 * pi * r * h)) + (2 * pi * r * r);
	V = (pi * r * r * h) + (2 / 3 * pi * r * r * r);
	cout << "El area es: " << A << endl;
	cout << "El volumen es: " << V;
	return 0;
}
