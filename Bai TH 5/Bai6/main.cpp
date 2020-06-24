#include <iostream>
#include "GiaSuc.h"
#include "GiaSuc.cpp"
#include "Con_bo.h"
#include "Con_bo.cpp"
#include "Con_cuu.h"
#include "Con_de.h"
#include "Con_cuu.cpp"
#include "Con_de.cpp"
using namespace std;

int main()
{
    int Bo, Cuu, De;
    Con_bo B[50];
    Con_cuu C[50];
    Con_de D[50];
    cout<<"Nhap so Bo: ";
    cin>>Bo;
    cout<<"Nhap so Cuu: ";
    cin>>Cuu;
    cout<<"Nhap so De: ";
    cin>>De;
    for (int i =0 ; i < Bo ; i++)
    {
        B[i].Keu();
    }
    for (int i =0 ; i < Cuu ; i++)
    {
        C[i].Keu();
    }
    for (int i =0 ; i < De ; i++)
    {
        D[i].Keu();
    }

    int TongBo=0 , Sua_bo = 0, TongCuu = 0, Sua_cuu=0, TongDe = 0, Sua_de=0;

    for (int i =0 ; i < Bo ; i++)
    {
        Sua_bo += B[i].Cho_sua();
    }
    for (int i =0 ; i < Bo ; i++)
    {
        TongBo += B[i].Sinh_con();
    }

    cout<<"Tong luong Sua Bo: "<< Sua_bo<<endl;
    cout<<"Tong Con Bo sinh ra: "<<TongBo<<endl;


    for (int i =0 ; i < Cuu ; i++)
    {
        Sua_cuu += C[i].Cho_sua();
    }
    for (int i =0 ; i < Cuu ; i++)
    {
        TongCuu += B[i].Sinh_con();
    }
    cout<<"Tong luong sua cuu: "<< Sua_cuu<<endl;
    cout<<"Tong cuu con sinh ra: "<<TongCuu<<endl;


    for (int i =0 ; i < De ; i++)
    {
        Sua_de += C[i].Cho_sua();
    }
    for (int i =0 ; i < De ; i++)
    {
        TongDe += B[i].Sinh_con();
    }
    cout<<"Tong luong sua de: "<< Sua_de<<endl;
    cout<<"Tong de con sinh ra: "<<TongDe<<endl;

}
