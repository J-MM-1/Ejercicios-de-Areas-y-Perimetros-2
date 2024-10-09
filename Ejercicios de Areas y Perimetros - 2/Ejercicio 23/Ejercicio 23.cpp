// Teniendo en cuenta las medidas señaladas, calcula el volumen de esta figura
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float r,h,pi,V;
	cout << "Radio: "; cin >> r;
	cout << "Altura: "; cin >> h;
	pi = 3, 14;
	V = (pi * r * r * h / 3) + (2 / 3 * pi * r * r * r);
	cout << "El volumen es: " << V;
	return 0;
}
