#pragma once
#include "Nguoi.h"
#include <iostream>
using namespace std;
class CaSi: public Nguoi
{
    private:
        int tien_cat_xe;
    public:
        void nhap();
        void xuat();
};

void CaSi::nhap()
{
    Nguoi::nhap();
    cout <<"Tien cat xe: "<<endl;
    cin>>tien_cat_xe;
}

void CaSi::xuat()
{
    Nguoi::xuat();
    cout << tien_cat_xe << endl;
}