#include "stdafx.h"
#include "fract.h"
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	fract f1;
	fract f2;
	std::cin >> f1;
	std::cin >> f2;
	char ch;
	do
	{
		system("cls");
		std::cout << "Меню:\n";
		std::cout << "1 - Сложить\n";
		std::cout << "2 - Вычесть\n";
		std::cout << "3 - Умножить\n";
		std::cout << "4 - Разделить\n";
		std::cout << "esc Выход\n";
		ch = _getch();
		switch (ch)
		{
		case '1': std::cout << f1 + f2; break;
		case '2': std::cout << f1 - f2; break;
		case '3': std::cout << f1 * f2; break;
		case '4': std::cout << f1 / f2; break;
		}
	} while (ch != 27);
}