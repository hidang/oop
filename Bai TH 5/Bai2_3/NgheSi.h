#pragma once
#include "Nguoi.h"
#include <iostream>
using namespace std;
class NgheSi: public Nguoi
{
    private:
        char tac_pham_nghe_thuat[50];
    public:
        void nhap();
        void xuat();
};

void NgheSi::nhap()
{
    Nguoi::nhap();
    cout <<"Nhap tac pham nghe thuat: "<<endl;
    cin.ignore();
    cin.getline(tac_pham_nghe_thuat, 49);
}

void NgheSi::xuat()
{
    Nguoi::xuat();
    cout << tac_pham_nghe_thuat << endl;
}
