#include <iostream>
#include "Hinh_vuong.h"
#include "Hinh_vuong.cpp"
#include "Hinh_chu_nhat.h"
#include "Hinh_chu_nhat.cpp"
#include "Hinh_thang.h"
#include "Hinh_thang.cpp"
#include "Hinh_binh_hanh.h"
#include "Hinh_binh_hanh.cpp"
using namespace std;

int main()
{
    Hinh_vuong a;
    Hinh_chu_nhat b;
    Hinh_binh_hanh c;
    Hinh_thang d;
    int chon;
    cout<<"Chon 1 de nhap hinh vuong"<<endl;
    cout<<"Chon 2 de nhap hinh chu nhat"<<endl;
    cout<<"Chon 3 de nhap hinh thang"<<endl;
    cout<<"Chon 4 de nhap hinh binh hanh"<<endl;
    cin>>chon;
    switch(chon)
    {
        case 1: a.nhap();
                a.xuat();
                break;
        case 2: b.nhap();
                b.xuat();
                break;
        case 3: c.nhap();
                c.xuat();
                break;
        case 4: d.nhap();
                d.xuat();
                break;
    }
    return 0;
}
