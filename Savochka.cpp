// ConsoleApplication20.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
void output(int *a, int n);
int main()
{
	setlocale(0, "");
	int n;
	int sum, c;
	int max;
	sum = 0;
	max = 0;
	int ind;
	cout << "Введите количество чисел" << "  ";
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
		c = a[i]; sum = 0;
		while (c != 0) {
			sum = sum + (c % 10);
			c /= 10;
		}
		b[i] = sum;
	}	
	
	for (int i = 0; i < n; i++) {
		if (b[i] > max) {
			max = b[i];
			ind = i;
		}
	}
	output(a, n);
	output(b, n);
	cout << "max=" << max << endl;
	for (int i = 0; i < n; i++) {
		if (max == b[i]) {
			cout << a[i] << " " << "Его номер" << " " << i << '\n';
		}
	}



	return 0;
}
void output(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

