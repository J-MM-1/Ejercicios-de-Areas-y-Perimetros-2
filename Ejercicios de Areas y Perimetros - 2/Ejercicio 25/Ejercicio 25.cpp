//Teniendo en cuenta las medidas señaladas, calcula el volumen de esta figura.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, h, Vp, Vc, Vt;
	cout << "Lado: "; cin >> a;
	cout << "Base menor: "; cin >> b;
	cout << "Altura del tronco: "; cin >> h;
	Vp = h / 3 * (a * a) + (b * b) + sqrt((a * a) * (b * b));
	Vc = a * a * a;
	Vt = Vp + Vc;
	cout << "El volumen es: "<<Vt;
	return 0;
}