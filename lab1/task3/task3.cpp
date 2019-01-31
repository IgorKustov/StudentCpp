// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b, i;
	a = 125;
	b = 0;
	i = 1;
	cout << "Hi. Try to guess a number." << endl;
	while (a != b) {
		cout << i << " try: "; cin >> b;
		i++;
		if (b > a) {
			cout << " Answer: No. Less" << endl;
		}
		else {
			if (a == b) {}
			else {
				cout << " Answer: No. Greaterr" << endl;
			}
		}

	}
	cout << " Answer: YES" << endl;
	system("pause");
}