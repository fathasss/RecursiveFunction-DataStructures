#include "pch.h"
#include <locale.h>
#include <iostream>
#include "libraryhas.h"
using namespace std;
void hanoi(int n, char key, char hedef, char ara) {
	setlocale(LC_ALL, "Turkish");
	if (n > 1) {
		hanoi(n - 1, key, ara, hedef);
		hanoi(1, key, hedef, ara);
		hanoi(n - 1, ara, hedef, key);
	}
	else {
		cout << "Üstteki diski taşı " << key << " 'den " << hedef << " 'e" << endl;
	}
}
int fibonacci(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
int fact(int n) {
	if (n == 0)
		return 1;
	return n * fact(n - 1);
}
double per(int x, int y) {
	int z, b, k;
	double per;
	if (x > y) {
		b = x; k = y;
	}
	else {
		b = y; k = x;
	}
	per = fact(b) / fact(b - k);
	return per;
}
double kom(int x, int y) {
	int z, b, k;
	double kom;
	if (x > y) {
		b = x;
		k = y;
	}
	else {
		b = y;
		k = x;
	}
	int prob = fact(k)*fact(b - k);
	kom = fact(b) / prob;
	return kom;
}
