/*If10
Дано дві змінні цілого типу: A і B. Якщо їх значення не рівні, то
присвоїти кожній змінній суму цих значень, а якщо рівні, то при-
своїти змінним нульові значення. Вивести нові значення змінних A і B.
*/

#include <iostream>
#include <cmath>

using namespace std;

void if10()
{
	cout << "Enter 2 numbers" << endl;
	int a, b;
	cin >> a >> b;
	if (a == b)
		a = 0;
	else
		a += b;
	b = a;
	cout << a << endl << b << endl;
}

/*If20
На числової осі розташовані три точки: A, B, C. Визначити, яка з
двох останніх точок (B або C) розташована ближче до A, і вивести цю точ-
ку і її відстань від точки A.
*/

void if20()
{
	cout << "Enter coordinates of poins A, B and C." << endl;
	int a, b, c;
	cin >> a >> b >> c;
	bool t = (abs(a - b) > abs(a - c));
	if (t)
		cout << "C" << endl << abs(a - c) << endl;
	else
		cout << "B" << endl << abs(a - b) << endl;
}

/*If20
Дано ціле число, яке лежить в діапазоні 1-999. Вивести його рядок-
опис виду «парне двозначне число», «непарне тризначне число»
і т.д.
*/

void if30()
{
	cout << "Enter number." << endl;
	int a;
	cin >> a;
	int par = a % 2;
	int k = 0;
	while (a > 0)
	{
		k++;
		a /= 10;
	}
	if (par)
		cout << "Odd";
	else
		cout << "Even";
	switch (k)
	{
	case 1:
		cout << " number" << endl;
		break;
	case 2:
		cout << " double-digit number" << endl;
		break;
	case 3:
		cout << " three-digit number" << endl;
		break;
	default:
		break;
	}

}
