// Lab_03_4.cpp
// Горбачов Богдан
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; 
	double y; 
	double R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (x < 0 && y > 0) 
		if ((x >= sqrt(2 * y * R - pow(y, 2)) - R) && (x >= -R) && (y <= R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	else if (x > 0 && y < 0)
		if ((x <= -sqrt(-2 * y * R - pow(y, 2)) + R) && (y >= -R) && (x <= R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	else
		if ((-R <= x && x <= R) && (-R < y && y < R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	system("pause");
}