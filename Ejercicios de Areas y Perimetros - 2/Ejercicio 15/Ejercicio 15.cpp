//Si ABCD es un cuadrado de lado “a” y además “N” es punto medio, realizar un programa que permita calcular el área de la región sombreada.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, A;
	cout << "Lado: "; cin >> a;
	A = a * a / 3;
	cout << "El area sombreada es: " << A << endl;
	return 0;
}
