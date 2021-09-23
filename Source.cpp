// Lab_02.cpp
// Дякун Богдан
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	double a; // aльфа
	cout << "a = "; cin >> a;
	z1 = (sin(a) + sin(5 *a)-sin(3*a))/(cos(a) - cos(3*a) + cos(5*a));
	z2 = tan(3*a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	return 0;
}