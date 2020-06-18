#pragma once
#include "sach.h"
#include <iostream>
using namespace std;
class sgk:public sach
{
private:
    int lop;
    
public:
    virtual void Xuat();
    virtual void Nhap();
};
//sgk.cpp
void sgk::Nhap(){
    sach::Nhap();
    cin>> lop;
}
void sgk::Xuat(){
    sach::Xuat();
    cout<<lop<<endl;
}

