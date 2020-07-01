#include "tieuthuyet.h"
void tieuthuyet::Nhap(){
    sach::Nhap();
    cin.ignore();
    cin.getline(theloai, 50);
}
void tieuthuyet::Xuat(){
    sach::Xuat();
    cout<<theloai<<endl;
}