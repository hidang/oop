#include <iostream>
#include "GiaSuc.h"
#include "GiaSuc.cpp"

#include "ConBo.h"
#include "ConBo.cpp"

#include "ConCuu.h"
#include "ConCuu.cpp"

#include "ConDe.h"
#include "ConDe.cpp"
using namespace std;

int main()
{
    GiaSuc *GS[50];
    int n, chon;
    cout<<"Nhap so luong gia suc: "<<endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout<<"chon 1 de nhap Bo"<<endl;
        cout<<"chon 2 de nhap Cuu"<<endl;
        cout<<"chon 3 de nhap De"<<endl;
        cin>>chon;
        switch (chon)
        {
        case 1:
            GS[i] = new ConBo();
            break;
        
        case 2:
            GS[i] = new ConCuu();
            break;

        case 3:
            GS[i] = new ConDe();
            break;
        GS[i]->Cho_sua();
        GS[i]->Keu();
        GS[i]->Sinh_con();
    }
    return 0;
}

