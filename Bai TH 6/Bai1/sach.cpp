#include "sach.h"
void sach::Nhap(){
    cout<<"Nhap ten sach: ";
    cin.ignore();
    cin.getline(tensach,50);

    cout<<"Nhap tac gia: ";
    cin.ignore();
    cin.getline(tacgia,50);
    

    cout<<"Nhap nha xuat ban: ";
    cin.ignore();
    cin.getline(nhaxuatban,50);
    
    cout<<"Nhap so trang: ";
    cin>>sotrang;

}
void sach::Xuat(){
    cout<<"Ten sach: "<<tensach<<endl;
    cout<<"Tac gia: "<<tacgia<<endl;
    cout<<"Nha xuat ban: "<<nhaxuatban<<endl;
    cout<<"So trang: "<<sotrang<<endl;
}
