#include <iostream>
#include "SoPhuc.h"
#include "SoPhuc.cpp"

using namespace std;

int main()
{
	SoPhuc A, B, KQ;
	cin >> A;
	cin >> B;

	KQ = A + B;
	cout << KQ;
	KQ = A - B;
	cout << KQ;
	KQ = A * B;
	cout << KQ;
	KQ = A / B;
	cout << KQ;

	return 0;
}
