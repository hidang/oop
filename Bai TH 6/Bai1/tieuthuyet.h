#pragma once
#include "sach.h"//tieuthuyet.cpp
#include <iostream>//tieuthuyet.cpp
using namespace std;//tieuthuyet.cpp

class tieuthuyet:public sach
{
private:
    char theloai[50];

public:
    virtual void Nhap();
    virtual void Xuat();
};
//tieuthuyet.cpp
void tieuthuyet::Nhap(){
    sach::Nhap();
    cin.ignore();
    cin.getline(theloai, 50);
}
void tieuthuyet::Xuat(){
    sach::Xuat();
    cout<<theloai<<endl;
}