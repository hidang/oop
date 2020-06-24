#pragma once
#include "nhanvien.h"
#include <iostream>
using namespace std;

class NhanVienSanXuat: public NhanVien
{
    private:
        int luongcanban, sosanpham;
    public:
        NhanVienSanXuat(){};
        ~NhanVienSanXuat(){};
        void nhap();
        void xuat();
        float tinhluong();
};

void NhanVienSanXuat::nhap()
{
    NhanVien::nhap();
    cout<< "Nhap luong can ban: ";
    cin>> luongcanban;
    cout << "Nhap so san pham: ";
    cin >> sosanpham;
}

void NhanVienSanXuat::xuat()
{
    NhanVien::xuat();
}

float NhanVienSanXuat::tinhluong()
{
    luong = luongcanban + sosanpham * 5000;
    return luong;
}
