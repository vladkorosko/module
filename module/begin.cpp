/*Begin10
Дано два не нульових числа. Знайти суму, різницю, добуток і частку їх квадратів.
*/

#include "Functions.h"
#include <iostream>
#include <cmath>

using namespace std;

void begin10()
{
	cout << "Enter two not zero numbers" << endl;
	double n, k;
	cin >> n >> k;
	double sum = n * n + k * k;
	double ris = n * n - k * k;
	double dob = n * n * k * k;
	double cha = (n * n) / (k * k);
	cout << sum << endl << ris << endl << dob << endl << cha << endl;
}

/*Begin 20
Знайти відстань між двома точками з заданими координатами (x1;у1) і (х2;у2) на площині.
*/

using namespace std;

int begin20()
{
	cout << "Enter coordinates (x1;y1) and (x2;y2)" << endl;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int vid = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return vid;
}

/*Begin 30
Дано значенння кута α в радіанах (0 < α < 2·π). Визначити значення
цього кута в градусах, враховуючи, що 180° = π радіан. Значения π
використовувать 3,14.
*/

double begin30()
{
	cout << "Enter the angle value in radians" << endl;
	double a;
	cin >> a;
	a = a * 180.0 / 3.14;
	return a;
}

/*Begin 40
Знайти розв'язок системи лінійних рівнянь виду

A1·x + B1·y = C1,
A2·x + B2·y = C2,

заданої своїми коефіціентами A1, B1, C1, A2, B2, C2, якщо відомо, що
дано система має єдиний розв'язок.
*/

double begin40_1(double a1, double b1, double c1, double a2, double b2, double c2)
{
	double x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
	return x;
}

double begin40_2(double a1, double b1, double c1, double a2, double b2, double c2)
{
	double y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	return y;
}
