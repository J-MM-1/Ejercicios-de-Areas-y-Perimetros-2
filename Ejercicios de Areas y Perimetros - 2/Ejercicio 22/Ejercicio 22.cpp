//Realizar un Diagrama de Flujo que permita calcular el volumen del tronco del cono
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float r, h, pi, V, R;
	cout << "Radio mayor: "; cin >> R;
	cout << "Radio menor: "; cin >> r;
	cout << "Altura: "; cin >> h;
	pi = 3, 14;
	V = h * pi / 3 * ((R * R) + (r * r) + R * r);
	cout << "El volumen es: " << V;
	return 0;
}
