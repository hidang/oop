#pragma once
#include <iostream>
#include "diem.h"
using namespace std;
class DaGiac
{
    protected:
        diem A[100];
        int SoLuongDiem;
    public: 
    virtual void nhap();
    virtual void xuat();
    virtual void Tinh_tien();
    virtual void Quay();
    virtual void phongto_thunho();
};

void DaGiac::nhap()
{
    cin>>SoLuongDiem;
    for (int i = 0; i < SoLuongDiem; i++)
    {
        A[i].nhap();
    }
    
}

void DaGiac::xuat()
{
    for (int i = 0; i< SoLuongDiem; i++){
        A[i].xuat();
    }
}
void DaGiac::Tinh_tien()
{
    cout << "Tinh tien theo vec to: ";
    double a, b;
    cin >> a >> b;
    cout << "Da giac sau khi tinh tien: " << endl;

    for (int i = 0; i < this->SoLuongDiem; i++)
    {
        cout << "Dinh "
             << "thu " << i + 1 << endl;
        A[i].TinhTien(a, b);
    }
}

void DaGiac::Quay()
{
    cout << "Goc quay:  ";
    double rad;
    cin >> rad;
    cout << "Da giac sau khi quay: " << endl;
    for (int i = 0; i < this->SoLuongDiem; i++)
    {
        cout << "Dinh "
             << "thu " << i + 1 << endl;
        A[i].Quay(rad);
    }
}

void DaGiac::phongto_thunho()
{
    cout << "He so thu phong:  ";
    double k;
    cin >> k;
    if (k > 0)
        cout << "Da giac sau khi Phong To: " << endl;
    else
    {
        cout << "Da giac sau khi Thu Nho: " << endl;
        k = -k;
    }

    for (int i = 0; i < SoLuongDiem; i++)
    {
        cout << "Dinh "
             << "thu " << i + 1 << endl;
        A[i].ThuPhong(k);
    }
}


