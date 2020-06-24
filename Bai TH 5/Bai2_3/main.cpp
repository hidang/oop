#include <iostream>
//#include "Nguoi.h"
#include "HocSinh.h"
#include "SinhVien.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaiSi.h"
using namespace std;
int main()
{
    HocSinh a[50];
    SinhVien b[50];
    CongNhan c[50];
    NgheSi d[50];
    CaSi e[50];
    int n, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
    cout <<"Nhap so nguoi: ";
    cin >> n;
    for ( int i = 0; i < n; i++){
        int chon = 0;
        cout <<"Nhap nguoi thu "<< i+1 << endl;
        cout <<"Chon 1 de nhap vao hoc sinh "<<endl;
        cout <<"Chon 2 de nhap vao sinh vien "<<endl;
        cout <<"Chon 3 de nhap vao cong nhan "<<endl;
        cout <<"Chon 4 de nhap vao nghe si "<<endl;
        cout <<"Chon 5 de nhap vao ca si "<<endl;
        cin >> chon;
        switch (chon)
        {
            case 1: a[n1].nhap();
                    n1++;
                    break;
            case 2: b[n2].nhap();
                    n2++;
                    break;
            case 3: c[n3].nhap();
                    n3++;
                    break;
            case 4: d[n4].nhap();
                    n4++;
                    break;
            case 5: e[n5].nhap();
                    n5++;
                    break;
        }
    }
    for ( int i = 0; i < n1; i++){
        a[i].xuat();
    }
    for ( int i = 0; i < n2; i++){
        b[i].xuat();
    }
    for ( int i = 0; i < n3; i++){
        c[i].xuat();
    }
    for ( int i = 0; i < n4; i++){
        d[i].xuat();
    }
    for ( int i = 0; i < n5; i++){
        e[i].xuat();
    }
}
