#pragma once		 //giup cho file .h duoc bien dich 1 lan tranh viec bien dich nhieu lan
using namespace std; // khong co thi loi ps.m_iTuSo; ở PhanSo.cpp ...
class PhanSo
{
private:
	int m_iTuSo;
	int m_iMauSo;

public:
	friend istream &operator>>(istream &is, PhanSo &ps);
	friend ostream &operator<<(ostream &os, PhanSo ps);

	PhanSo operator+(const PhanSo &a);
	PhanSo operator-(const PhanSo &a);
	PhanSo operator*(const PhanSo &a);
	PhanSo operator/(const PhanSo &a);
	bool operator==(const PhanSo &a);
	bool operator!=(const PhanSo &a);
	void RutGon(PhanSo &ps);
};
