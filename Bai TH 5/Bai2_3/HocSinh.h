#pragma once
#include "Nguoi.h"
#include <iostream>
using namespace std;
class HocSinh: public Nguoi
{
    private:
        char truong[100];
        int lop;
    public:
        void nhap();
        void xuat();
};

void HocSinh::nhap()
{
    Nguoi::nhap();
    cout<<"Nhan ten truong hoc: "<<endl;
    cin.ignore();
    cin.getline(truong, 40);
    cout<<"Lop: "<<endl;
    cin>>lop;
}

void HocSinh::xuat()
{
    Nguoi::xuat();
    cout<< truong << endl;
    cout<< lop << endl;
}