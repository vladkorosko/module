#include "Functions.h"
#include <iostream>
#include <cmath>

using namespace std;

void solution2()
{
	int clav;
	integercout();
	int poka = 0;
	cin >> clav;
	while (poka == 0)
	{
		if (clav == 10 || clav == 20 || clav == 29 || clav == 30)
			poka = 1;
		else
		{
			cout << "You have entered wrong number. Please enter number again." << endl;
			cin >> clav;
		}
	}

	knowcout();
	int know;
	cin >> know;
	if (know)
	{
		if (clav == 10)
		{
			cout << "Дано троьохзначне число.Вивести спочатку його останню цифру" << endl;
			cout << "(одиниці), а потім — його средню цифру(десятки)." << endl;
		}
		if (clav == 20)
		{
			cout << "З початку дня пройшло N секунд (N — ціле). Знайти кількість" << endl;
			cout << "повних годин, пройшовших з початку дня." << endl;
		}
		if (clav == 29)
		{
			cout << "Дано цілі додатні числа A, B, C. На прямокутнику розміром" << endl;
			cout << "A × B розміщено максимально можлива кількість квадратів зі" << endl;
			cout << "стороною C (без накладки). Знайти кількість квадратів, разміщених" << endl;
			cout << "на прямокутнику, а також площю незанятої частини прямокутника." << endl;
		}
		if (clav == 30)
		{
			cout << "Дано номер деякого року(ціле додатнє число).Визначте" << endl;
			cout << "відповідний йому номер століття, враховуючи те, що, початком" << endl;
			cout << "20 століття був 1901 рік." << endl;
		}
	}

	if (clav == 10)
	{
		cout << "Enter number" << endl;
		int a;
		cin >> a;
		int x = integer10(a);
		a /= 10;
		int y = integer10(a);
		cout << x << endl << y << endl;
	}

	if (clav == 20)
	{
		int x = integer20();
		cout << x << endl;
	}

	if (clav == 29)
	{
		cout << "Enter number A, B, C" << endl;
		int a, b, c;
		cin >> a >> b >> c;
		int x = integer29_1(a, b, c);
		int y = integer29_2(a, b, c, x);
		cout << x << endl << y << endl;
	}

	if (clav == 30)
	{
		int x = integer30();
		cout << x << endl;
	}
}

void solution1()
{
	int clav;
	begincout();
	int poka = 0;
	cin >> clav;
	while (poka == 0)
	{
		if (clav == 10 || clav == 20 || clav == 40 || clav == 30)
			poka = 1;
		else
		{
			cout << "You have entered wrong number. Please enter number again." << endl;
			cin >> clav;
		}
	}

	knowcout();
	int know;
	cin >> know;
	if (know)
	{
		if (clav == 10)
		{
			cout << "Дано два не нульових числа. Знайти суму, різницю, добуток і частку їх квадратів." << endl;
		}
		if (clav == 20)
		{
			cout << "Знайти відстань між двома точками з заданими координатами (x1;у1) і (х2;у2) на площині." << endl;
		}
		if (clav == 30)
		{
			cout << "Дано значенння кута α в радіанах (0 < α < 2·π). Визначити значення" << endl;
			cout << "цього кута в градусах, враховуючи, що 180° = π радіан. Значения π" << endl;
			cout << "використовувать 3,14." << endl;
		}
		if (clav == 40)
		{
			cout << "Знайти розв'язок системи лінійних рівнянь виду\n\nA1·x + B1·y = C1,\nA2·x + B2·y = C2,\n" << endl;
			cout << "заданої своїми коефіціентами A1, B1, C1, A2, B2, C2, якщо відомо, що" << endl;
			cout << "дано система має єдиний розв'язок." << endl;
		}
	}

	if (clav == 10)
	{
		begin10();
	}

	if (clav == 20)
	{
		int x = begin20();
		cout << x << endl;
	}

	if (clav == 30)
	{
		int a = begin30();
		cout << a << endl;
	}

	if (clav == 40)
	{
		cout << "Enter the coefficients a1, b1, c1, a2, b2, c2" << endl;
		double a1, b1, c1, a2, b2, c2;
		cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
		double x = begin40_1(a1, b1, c1, a2, b2, c2);
		double y = begin40_1(a1, b1, c1, a2, b2, c2);
		cout << x << endl << y << endl;
	}
}

void solution3()
{
	int clav;
	booleancout();
	int poka = 0;
	cin >> clav;
	while (poka == 0)
	{
		if (clav == 10 || clav == 20 || clav == 40 || clav == 39)
			poka = 1;
		else
		{
			cout << "You have entered wrong number. Please enter number again." << endl;
			cin >> clav;
		}
	}

	knowcout();
	int know;
	cin >> know;
	if (know)
	{
		if (clav == 10)
		{
			cout << "Дано два цілих числа: A, B. Перевірити правдивість висловлювання:\n«Рівно одне з чисел A і B непарне»." << endl;
		}
		if (clav == 20)
		{
			cout << "Дано трицифрове число. Перевірити правдивість вислову:\n«Всі цифри даного числа різні»." << endl;
		}
		if (clav == 39)
		{
			cout << "Дано координати двох різних клітинок шахматної дошки x1, y1," << endl;
			cout << "x2, y2 (цілі числа, які належать діапазону 1–8). Перевірити правдивість вислову:" << endl;
			cout << "«Ферзь за один хід може перейти з одного поля на друге»." << endl;
		}
		if (clav == 40)
		{
			cout << "Дано координати двох різних клітинок шахматної дошки x1, y1," << endl;
			cout << "x2, y2 (цілі числа, які належать діапазону 1–8). Перевірити правдивість вислову:" << endl;
			cout << "«Кінь за один хід може перейти з одного поля на друге»." << endl;
		}
	}

	switch (clav)
	{
	case 10:
		boolean10();
		break;
	case 20:
		boolean20();
		break;
	case 39:
		boolean39();
		break;
	case 40:
		boolean40();
		break;
	default:
		cout << "No such number of task" << endl;
		break;
	}
}

void solution4()
{
	int clav;
	ifcout();
	int poka = 0;
	cin >> clav;
	while (poka == 0)
	{
		if (clav == 10 || clav == 20 || clav == 30)
			poka = 1;
		else
		{
			cout << "You have entered wrong number. Please enter number again." << endl;
			cin >> clav;
		}
	}

	knowcout();
	int know;
	cin >> know;
	if (know)
	{
		if (clav == 10)
		{
			cout << "Дано дві змінні цілого типу: A і B. Якщо їх значення не рівні, то" << endl;
			cout << "присвоїти кожній змінній суму цих значень, а якщо рівні, то при-" << endl;
			cout << "своїти змінним нульові значення. Вивести нові значення змінних A і B." << endl;
		}
		if (clav == 20)
		{
			cout << "На числової осі розташовані три точки: A, B, C. Визначити, яка з" << endl;
			cout << "двох останніх точок (B або C) розташована ближче до A, і вивести цю точ-" << endl;
			cout << "ку і її відстань від точки A." << endl;
		}
		if (clav == 30)
		{
			cout << "Дано ціле число, яке лежить в діапазоні 1-999. Вивести його рядок-" << endl;
			cout << "опис виду «парне двозначне число», «непарне тризначне число»" << endl;
			cout << "і т.д." << endl;
		}
	}

	switch (clav)
	{
	case 10:
		if10();
		break;
	case 20:
		if20();
		break;
	case 30:
		if30();
		break;
	default:
		cout << "No such number of task" << endl;
		break;
	}
}
