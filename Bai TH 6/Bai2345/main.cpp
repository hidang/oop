#include <iostream>
#include "TamGiac.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"

using namespace std;
int main()
{
    DaGiac *Hinh[50];
    int n, chon;
    cout<<"Nhap so luong hinh: "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout<<"chon 1 de chon hinh tam giac"<<endl;
        cout<<"chon 2 de chon hinh binh hanh"<<endl;
        cout<<"chon 3 de chon hinh chu nhat"<<endl;
        cout<<"chon 4 de chon hinh vuong "<<endl;
        cin>>chon;
        switch (chon)
        {
        case 1:
            Hinh[i] = new TamGiac();
            break;
        
        case 2:
            Hinh[i] = new HinhBinhHanh();
            break;

        case 3:
            Hinh[i] = new HinhChuNhat();
            break;
        

        case 4:
            Hinh[i] = new HinhVuong();
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        Hinh[i]->nhap();
        Hinh[i]->Tinh_tien();
        Hinh[i]->phongto_thunho();
        Hinh[i]->Quay();
        Hinh[i]->xuat();
    }
    
    return 0;
}