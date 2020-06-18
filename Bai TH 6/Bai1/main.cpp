// 1.	Xây dựng các loại đối tượng sách, sách giáo khoa, tiểu thuyết, tạp chí. 
// Viết chương trình cho phép quản lý một danh sách các loại đối tượng kể trên.
#include <iostream>
#include "sach.h"
#include "sgk.h"
#include "tieuthuyet.h"
#include "tapchi.h"
using namespace std;
int main(){

    sach *DS[50];//khoi tao mang con tro DS co 50 doi tuong 
    int soluongsach, chon;
    cout << "Nhap so luong sach: ";
    cin >> soluongsach;
    for(int i = 0; i<soluongsach;i++)
    {
        cout<<"Chon 1 de nhap sach giao khoa"<<endl;
        cout<<"Chon 2 de nhap tieu thuyet"<<endl;
        cout<<"Chon 3 de nhap tap chi"<<endl;
        cin>>chon;
        switch (chon)
        {
        case 1:
            DS[i] = new sgk();
            break;
        case 2:
            DS[i] = new tieuthuyet();
            break;
        case 3:
            DS[i] = new tapchi();
            break;
        }
        DS[i]->Nhap();
    }
    

    
    return 0;
}