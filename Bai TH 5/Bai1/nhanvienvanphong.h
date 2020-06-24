#pragma once
#include "nhanvien.h"
#include <iostream>
using namespace std;
class NhanVienVanPhong: public NhanVien
{
    private:
        int songaylamviec;
    public:
        NhanVienVanPhong(){};
        ~NhanVienVanPhong(){};
        void nhap();
        void xuat();
        float tinhluong();
};

void NhanVienVanPhong::nhap()
{
    NhanVien::nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> songaylamviec;
}

void NhanVienVanPhong::xuat()
{
    NhanVien::xuat();
}

float NhanVienVanPhong::tinhluong()
{
    luong = songaylamviec * 100000;
    return luong;
}
