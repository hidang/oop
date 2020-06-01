#include <iostream>
#include "PhanSo.h"
#include "PhanSo.cpp"

int main()
{
	PhanSo a, b, c;
	cin >> a;
	cin >> b;
	if (a == b)
		cout << "hai phan so bang nhau " << endl;
	else
		cout << "hai phan so khac nhau" << endl;
	cout << "Tong: ";
	c = a + b;
	cout << c;
	cout << "Hieu: ";
	c = a - b;
	cout << c;
	cout << "Tich: ";
	c = a * b;
	cout << c;
	cout << "Thuong: ";
	c = a / b;
	cout << c;

	return 0;
}
