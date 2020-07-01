#pragma once
#include "sach.h"
#include <iostream>
using namespace std;

class tapchi:public sach
{
private:
    char ngayramat[50];
public:
    void Nhap();
    void Xuat();    
};
