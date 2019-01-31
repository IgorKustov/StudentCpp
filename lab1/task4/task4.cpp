// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, i, c;
	a = 0;
	b = 0;
	i = 0;
	c = 0;

	char d;
	d = { 'y' };
	while (d == 'y') {
		a = 0;
		b = 0;
		i = 0;
		cout << "Hello, my dear. What are the numbers?" << endl;
		cout << "Number 1: "; cin >> a; cout << " " << endl;
		cout << "Number 2: "; cin >> b; cout << " " << endl;
		cout << "What do you want to do?" << endl;
		cout << "1. +" << endl;
		cout << "2. -" << endl;
		cout << "3. *" << endl;
		cout << "4. /" << endl;
		cin >> i;



		if (i == 1) {
			c = a + b;
		}
		else {
			if (i == 2) {
				c = a - b;
			}


			else {
				if (i == 3) {
					c = a * b;
				}
				else {
					c = a / b;
				}
			}
		}
		cout << "Your answer: " << i << endl;
		cout << "Result: " << c << endl;

		cout << "Do you want to try again ? y / n " << endl;
		cin >> d;
	}

	system("pause");
}