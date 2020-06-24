#pragma once
#include "ellipse.h"
void ellipse::nhap()
{
    cout<<"Ban kinh dai: "<<endl;
    cin>>ban_kinh_dai;
    cout<<"Ban kinh rong: "<<endl;
    cin>>ban_kinh_rong;
    cout<<"Tam cua hinh: "<<endl;
    cin>>x_tam>>y_tam;
}

void ellipse::xuat()
{
    cout<<"Ban kinh dai: "<<endl;
    cout<<ban_kinh_dai<<endl;
    cout<<"Ban kinh rong: "<<endl;
    cout<<ban_kinh_rong<<endl;
    cout<<"Tam cua hinh: "<<endl;
    cout<<"("<<x_tam<<","<<y_tam<<")";
}
