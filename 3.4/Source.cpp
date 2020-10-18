// Lab_03_4.cpp
// Горбачов Богдан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3

#include <iostream>
using namespace std;

int brous()
{
	double x;
	double y;
	double R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (((-R <= x && x <= R) && (-R <= y && y <= R)) && (y <= -sqrt(-2 * x * R - pow(x, 2)) + R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
}