#pragma once
#include <iostream>
using namespace std;
class NhanVien
{
    protected:
      char Hoten[50];
      char Ngaysinh[10];
      float luong;
    public:
        NhanVien(){};
        ~NhanVien(){};
        void nhap();
        void xuat();
        float tinhluong();
};

void NhanVien::nhap()
{
    cout <<"Ho va ten: ";
    cin.ignore();
    cin.getline(Hoten, 49);
    cout <<"ngay sinh: ";
    cin>> Ngaysinh;
}

void NhanVien::xuat()
{
    cout << "Ho va ten: " << " " << Hoten << endl;
    cout << "Ngay sinh: "<< " " << Ngaysinh<<endl;
    cout << "Luong: " << luong << endl;
}

float NhanVien::tinhluong()
{
    return 0.0f;
}