#include <iostream>
#include "PhanSo.h"
using namespace std;

istream &operator>>(istream &is, PhanSo &ps)
{
	is >> ps.m_iTuSo;
	is >> ps.m_iMauSo;
	return is;
}
ostream &operator<<(ostream &os, PhanSo ps)
{
	os << ps.m_iTuSo << " / " << ps.m_iMauSo << endl;
	return os;
}
PhanSo PhanSo::operator+(const PhanSo &a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;

	c.m_iTuSo = this->m_iTuSo * a.m_iMauSo + a.m_iTuSo * this->m_iMauSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iMauSo;
	RutGon(c);
	return c;
}

PhanSo PhanSo::operator-(const PhanSo &a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;
	c.m_iTuSo = this->m_iTuSo * a.m_iMauSo - a.m_iTuSo * this->m_iMauSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iMauSo;
	RutGon(c);
	return c;
}

PhanSo PhanSo::operator*(const PhanSo &a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;

	c.m_iTuSo = this->m_iTuSo * a.m_iTuSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iMauSo;
	RutGon(c);
	return c;
}

PhanSo PhanSo::operator/(const PhanSo &a) //const se khong thay doi gia tri cua a (luc nay a la phanso truyen vao)
{
	PhanSo c;

	c.m_iTuSo = this->m_iTuSo * a.m_iMauSo;
	c.m_iMauSo = this->m_iMauSo * a.m_iTuSo;
	RutGon(c);
	return c;
}
bool PhanSo::operator==(const PhanSo &a)
{
	if (m_iTuSo == a.m_iTuSo && m_iMauSo == a.m_iMauSo)
		return 1;
	else
		return 0;
}
bool PhanSo::operator!=(const PhanSo &a)
{
	if (m_iTuSo == a.m_iTuSo && m_iMauSo == a.m_iMauSo)
		return 0;
	else
		return 1;
}
int UCLN(int a, int b)
{
	if (a % b != 0)
		return UCLN(b, a % b);
	else
		return b;
}
void PhanSo::RutGon(PhanSo &ps)
{
	int ucln = UCLN(ps.m_iTuSo, ps.m_iMauSo);
	ps.m_iTuSo /= ucln;
	ps.m_iMauSo /= ucln;
}
