#pragma once
#include <iostream>
#include <math.h>
using namespace std;

class diem
{
private:
    int x, y;    
public:
    void nhap();
    void xuat();
    void TinhTien(int a, int b);
    void Quay(double radian);
    void ThuPhong(int k);
    
};

void diem::nhap()
{
    cout<<"diem x la: "<<endl;
    cin>> x;
    cout<<"diem y la: "<<endl;
    cin>>y;
}

void diem::xuat()
{
    cout<<x<<" "<<y<<endl;
}

void diem::TinhTien(int a, int b)
{
    x = x + a;
    y = y + b;
}

void diem::Quay(double radian)
{
    x = x * cos(radian) + y * sin(radian);
    y = x * sin(radian) + y * cos(radian);
}

void diem::ThuPhong(int k)
{
    if(k>=1){
        x = x*k;
        y = y*k;
    }
    else{
        x = x*(1/k);
        y = y*(1/k);
    }
}