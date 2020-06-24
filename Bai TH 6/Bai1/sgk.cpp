#include "sgk.h"//tieuthuyet.cpp
#include "sach.h"
#include "sach.cpp"
#include <iostream>//tieuthuyet.cpp
using namespace std;//tieuthuyet.cpp
void sgk::Nhap(){
    sach::Nhap();
    cout<<"Nhap lop: ";
    cin>> lop;
}
void sgk::Xuat(){
    sach::Xuat();
    cout<<lop<<endl;
}