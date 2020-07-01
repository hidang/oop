#pragma once
#include "sach.h"//tieuthuyet.cpp
#include <iostream>//tieuthuyet.cpp
using namespace std;//tieuthuyet.cpp

class tieuthuyet:public sach
{
private:
    char theloai[50];

public:
    void Nhap();
    void Xuat();
};
