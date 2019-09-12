/*Integer10
Дано троьохзначне число. Вивести спочатку його останню цифру
(одиниці), а потім — його средню цифру (десятки).
*/

#include <iostream>
#include "Functions.h"

using namespace std;

int integer10(int a)
{
	int x = a % 10;
	return x;
}

/*Integer29
Дано цілі додатні числа A, B, C. На прямокутнику розміром
A × B розміщено максимально можлива кількість квадратів зі
стороною C (без накладки). Знайти кількість квадратів, разміщених
на прямокутнику, а також площю незанятої частини прямокутника.
*/

int integer29_1(int a, int b, int c)
{
	int n = (a / c) * (b / c);
	return n;
}

int integer29_2(int a, int b, int c, int n)
{
	int s = a * b - n * c * c;
	return s;
}

/*Integer 20
З початку дня пройшло N секунд (N — ціле). Знайти кількість
повних годин, пройшовших з початку дня.
*/

int integer20()
{
	cout << "Enter the number of seconds" << endl;
	int a;
	cin >> a;
	int x = a / 3600;
	return x;
}

/* Integer30
Дано номер деякого року(ціле додатнє число).Визначте
відповідний йому номер століття, враховуючи те, що, початком
20 століття був 1901 рік.
*/


int integer30()
{
	cout << "Enter the number of year" << endl;
	int a;
	cin >> a;
	int n = (a - 1) / 100 + 1;
	return n;
}
