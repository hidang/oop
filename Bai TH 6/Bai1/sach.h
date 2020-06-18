#pragma once

using namespace std;
class sach
{
protected:
    int tongsoluong;
    char tensach[50],  nhaxuatban[50], tacgia[50];
    int sotrang;
public:
    void Nhap();
    void Xuat();
};
//sach.cpp
void sach::Nhap(){
    cout<<"Nhap ten sach: ";
    cin.getline(tensach, 50);
    cin.ignore();
    cout<<"Nhap tac gia: ";
    cin.getline(tacgia, 50);
    cin.ignore();
    cout<<"Nhap nha xuat ban: ";
    cin.getline(nhaxuatban, 50);
    cin.ignore();
    cout<<"Nhap so trang: ";
    cin>>sotrang;
}
void sach::Xuat(){
    cout<<

}
