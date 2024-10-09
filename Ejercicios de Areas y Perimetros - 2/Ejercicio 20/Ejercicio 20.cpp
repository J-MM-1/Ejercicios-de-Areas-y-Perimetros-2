//Realizar un programa que permita calcular el volumen y superficie del siguiente cuerpo geométrico.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, hpa, hpi, ht, A, V;
	cout << "Base del paralelepipedo: "; cin >> a;
	cout << "Altura del paralelepipedo: "; cin >> hpa;
	cout << "Altura del piramide: "; cin >> hpi;
	ht = sqrt((a / 2) * (a / 2) + (hpi * hpi));
	A = ((a * hpa * 4) + (a * a) + (a * ht / 2) * 4);
	V = (a * a * hpa) - (a * a * hpi / 3);
	cout << "El area es: " << A << endl;
	cout << "El volumen es: " << V;
	return 0;
}
