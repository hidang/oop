#pragma once //giup cho file .h duoc bien dich 1 lan tranh viec bien dich nhieu lan
#include <iostream>
using namespace std;
class ctime
{
private:
    int gio, phut, giay;

public:
    friend istream &operator>>(istream &is, ctime &ps);
    friend ostream &operator<<(ostream &os, ctime &ps);
    ctime operator+(int giays);
    ctime operator-(const ctime &a);
};

ctime ctime::operator+(int giays)
{
    if (giay + giays >= 60)
    {
    }
}