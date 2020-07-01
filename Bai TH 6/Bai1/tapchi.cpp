#include "tapchi.h"

void tapchi::Nhap(){
    sach::Nhap();
    cin.ignore();
    cin.getline(ngayramat, 50);
}
void tapchi::Xuat(){
    sach::Xuat();
    cout<<"Ngay ra mat: "<<ngayramat<<endl;
}