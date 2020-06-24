#pragma once
#include <iostream>
using namespace std;
class Nguoi
{
    protected:
        char Hoten[50];
        char ngay_sinh[10];
        char gioi_tinh[5];
    public:
        void nhap();
        void xuat();
};

void Nguoi::nhap()
{
    cout<<"Ho va ten: "<<endl;
    cin.ignore();
    cin.getline(Hoten, 49);
    cout<<"Ngay sinh: "<<endl;
    cin>> ngay_sinh;
    cout<<"Gioi tinh: "<<endl;
    cin>>gioi_tinh;
}

void Nguoi::xuat()
{
    cout << Hoten << endl;
    cout << ngay_sinh << endl;
    cout << gioi_tinh << endl;
}