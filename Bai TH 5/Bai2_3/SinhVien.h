#pragma once
#include "Nguoi.h"
#include <iostream>
using namespace std;
class SinhVien: public Nguoi
{
    private:
        int MSSV;
        char nganh_hoc[50];
    public:
        void nhap();
        void xuat();
};

void SinhVien::nhap()
{
    Nguoi::nhap();
    cout <<"MSSV cua sinh vien nay la: "<<endl;
    cin >> MSSV;
    cout<<"Nganh dang theo hoc cua sinh vien nay la: "<<endl;
    cin.getline(nganh_hoc, 49);
}

void SinhVien::xuat()
{
    Nguoi::xuat();
    cout << MSSV << endl;
    cout<< nganh_hoc << endl;
}