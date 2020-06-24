#include "Hinh_vuong.h"
#include <iostream>
using namespace std;
void Hinh_vuong::nhap()
{
    cout<<"Nhap do dai cac canh: "<<endl;
    cin>>AB>>BC>>CD>>AD;
}

void Hinh_vuong::xuat()
{
    cout<<"cac canh cua hinh se la: "<<endl;
    cout<<AB<<" "<<BC<<" "<<CD<<" "<<AD<<endl;
}
