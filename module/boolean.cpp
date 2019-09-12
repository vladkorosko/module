/*Boolean10
Дано два цілих числа: A, B. Перевірити правдивість висловлювання:
«Рівно одне з чисел A і B непарне».
*/

#include <iostream>
#include "Functions.h"
#include <cmath>

using namespace std;

void boolean10()
{
	cout << "Enter 2 numbers" << endl;
	int a, b;
	cin >> a >> b;
	if (a % 2 == 1 && b % 2 != 1 || a % 2 != 1 && b % 2 == 1)
		cout << "One of this number is odd." << endl;
	else
		cout << "Both of this numbers are odd or even." << endl;
}

/*Boolean20
Дано трицифрове число. Перевірити правдивість вислову:
«Всі цифри даного числа різні».
*/

void boolean20()
{
	cout << "Enter number" << endl;
	int n;
	cin >> n;
	int a = n % 10;
	n /= 10;
	int b = n % 10;
	n /= 10;
	if (a != b && b != n && a != n)
		cout << "All numbers are different." << endl;
	else
		cout << "There are the same numbers.";
}

/*Boolean39
Дано координати двох різних клітинок шахматної дошки x1, y1,
x2, y2 (цілі числа, які належать діапазону 1–8). Перевірити правдивість вислову:
«Ферзь за один хід може перейти з одного поля на друге».
*/

void boolean39()
{
	cout << "Enter the coordinates of first field" << endl;
	int x1, y1;
	cin >> x1 >> y1;
	cout << "Enter the coordinates of second field" << endl;
	int x2, y2;
	cin >> x2 >> y2;
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	if (a == 0 || b == 0 || a == b)
		cout << "Outstanding move." << endl;
	else
		cout << "This is imposible move." << endl;
}

/*Boolean40
Дано координати двох різних клітинок шахматної дошки x1, y1,
x2, y2 (цілі числа, які належать діапазону 1–8). Перевірити правдивість вислову:
«Кінь за один хід може перейти з одного поля на друге».
*/

void boolean40()
{
	cout << "Enter the coordinates of first field" << endl;
	int x1, y1;
	cin >> x1 >> y1;
	cout << "Enter the coordinates of second field" << endl;
	int x2, y2;
	cin >> x2 >> y2;
	int a = abs(x1 - x2);
	int b = abs(y1 - y2);
	if ((a == 2 && b == 1) || (a == 1 && b == 2))
		cout << "Outstanding move." << endl;
	else
		cout << "This is imposible move." << endl;
}
