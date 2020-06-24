#pragma once
#include "sach.h"//tieuthuyet.cpp
#include <iostream>//tieuthuyet.cpp
using namespace std;//tieuthuyet.cpp

class tapchi:public sach
{
private:
    char ngayramat[50];
public:
    virtual void Nhap();
    virtual void Xuat();    
};
//tapchi.h
void tapchi::Nhap(){
    sach::Nhap();
    cin.ignore();
    cin.getline(ngayramat, 50);
}
void tapchi::Xuat(){
    sach::Xuat();
    cout<<"Ngay ra mat: "<<ngayramat<<endl;
}