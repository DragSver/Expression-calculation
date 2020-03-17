// Expression calculation.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int x;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	cout << "Input d: ";
	cin >> d;
	cout << "Input e: ";
	cin >> e;
	__asm
	{
		MOV EAX, a;
		ADD EAX, b;
		MUL c;
		SUB EAX, d;
		DIV e;
		MOV x, EAX;
	}
	cout << x;
	cout << endl;
    return 0;
}

