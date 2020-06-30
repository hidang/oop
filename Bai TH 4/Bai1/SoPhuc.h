#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
private:
	float a1, a2;
	int *n;
public:

	//void Nhap();
	friend istream &operator>>(istream &is, SoPhuc &sp);
	//void Xuat();
	friend ostream &operator<<(ostream &os, SoPhuc sp);

	SoPhuc operator+(const SoPhuc &a);
	SoPhuc operator-(const SoPhuc &a);
	SoPhuc operator*(const SoPhuc &a);
	SoPhuc operator/(const SoPhuc &a);
	float Geta1();
	float Geta2();
	void Seta1(float ane);
	void Seta2(float bne);
	
};
