#include <iostream>
#include "ctime.h"
using namespace std;
int main()
{
    ctime thoigian, kq;
    cin >> thoigian;

    int giay;
    cin >> giay;
    kq = thoigian + giay;
    cout << kq;
    thoigian++;
    cout << thoigian;
    thoigian--;
    cout << thoigian;
    return 0;
}