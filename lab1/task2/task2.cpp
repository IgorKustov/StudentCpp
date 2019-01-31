// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{

	int b, c, d;
	char a[20] = "";
	cout << "enter name - ";  cin >> a; cout << " " << endl;
	cout << "enter day - ";   cin >> b; cout << " " << endl;
	cout << "enter month - "; cin >> c; cout << " " << endl;
	cout << "enter years - ";  cin >> d; cout << " " << endl;

	cout << "Hello, ";
	cout << a << " You're " << b << ". " << c << ". " << d << ". " << " years old" << endl;

	system("pause");
}