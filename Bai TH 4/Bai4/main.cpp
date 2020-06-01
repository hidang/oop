#include <iostream>
#include "ctime.h"
using namespace std;
int main()
{
    ctime thoigian, kq;
    cin >> thoigian;

    int giay;
    cout << "Nhap so giay can +: ";
    cin >> giay;
    kq = thoigian + giay;
    cout << kq;
    cout << "Nhap so giay can -: ";
    cin >> giay;
    kq = thoigian - giay;
    cout << kq;

    cout << endl;
    //thoigian++; loi nha
    ++thoigian; //phai dat operator ở trước
    cout << thoigian;
    //thoigian--;
    --thoigian;
    cout << thoigian;
    return 0;
}