#include <iostream>
#include "nhanvien.h"
#include "nhanvienvanphong.h"
#include "nhanviensanxuat.h"
using namespace std;

int main()
{
    NhanVienSanXuat a[50];
    NhanVienVanPhong b[50];
    int n, n1 = 0, n2 = 0;
    cout <<"Nhap so luong nhan vien: ";
    cin >> n;
    for ( int i = 0; i < n; i++){
        int chon = 0;
        cout <<"Nhap vao nhan vien thu "<< i+1 << endl;
        cout <<"Chon 1: Nhan vien san xuat "<<endl;
        cout <<"Chon 2: Nhan vien van phong "<<endl;
        cin >> chon;
        switch (chon)
        {
            case 1: a[n1].nhap();
                    n1++;
                    break;
            case 2: b[n2].nhap();
                    n2++;
                    break;
        }
    }

    float tongluong = 0;
    for ( int i = 0; i < n1; i++){
        tongluong += a[i].tinhluong();
    }
    for ( int i = 0; i < n2; i++){
        tongluong += b[i].tinhluong();
    }
    cout <<"Tong luong la: " << tongluong << endl;

    for ( int i = 0; i < n1; i++){
        a[i].xuat();
    }
    for ( int i = 0; i < n2; i++){
        b[i].xuat();
    }
}
