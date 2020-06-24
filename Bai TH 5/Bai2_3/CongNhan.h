#pragma once
#include "Nguoi.h"
#include <iostream>
using namespace std;
class CongNhan: public Nguoi
{
    private:
        int Ma_so_cong_nhan;
    public:
        void nhap();
        void xuat();
};

void CongNhan::nhap()
{
    Nguoi::nhap();
    cout<<"Nhap ma so cong nhan: " << endl;
    cin>>Ma_so_cong_nhan;
}

void CongNhan::xuat()
{
    Nguoi::xuat();
    cout << Ma_so_cong_nhan;
}