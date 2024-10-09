//Realizar un Diagrama de Flujo que permita calcular el volumen del tronco de la pirámide
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float LB,Lb,ApB,Apb,AB,Ab,h,V;
	cout << "Lado mayor: "; cin >> LB;
	cout << "Lado menor: "; cin >> Lb;
	cout << "Apotema mayor: "; cin >> ApB;
	cout << "Apotema menor: "; cin >> Apb;
	cout << "Altura: "; cin >> h;
	AB = (LB * 6 * ApB / 2);
	Ab = (Lb * 6 * Apb / 2);
	V = h / 3 * ((Ab + Ab) + sqrt(AB * Ab));
	cout << "El volumen es: " << V;
	return 0;
}
