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
    ctime operator-(int giays);
    ctime operator++();
    ctime operator--();
};
istream &operator>>(istream &is, ctime &ps)
{
    is >> ps.gio >> ps.phut >> ps.giay;
    return is;
}
ostream &operator<<(ostream &os, ctime &ps)
{
    os << ps.gio << ":" << ps.phut << ":" << ps.giay << endl;
    return os;
}
ctime ctime::operator+(int giays)
{
    if (giay + giays >= 60)
    {
        if (giays > 60) //truong hop 60 x2 x3 x4...
        {
            while (giays <= 60)
            {
                if (giay + giays > 60) //xet lai vì lần 2 (3) sẽ giay sẽ biến đổi
                {
                    giay = giay + giays - 60;
                    if (phut < 59)
                        phut++;
                    else if (gio < 23)
                        gio++;
                    else
                        gio = 0;
                }
                else
                {
                    giay += giays;
                }
                giays -= 60;
            }
        }
        else //truong hop 60 x1
        {
            giay = giay + giays - 60;
            if (phut < 59)
                phut++;
            else if (gio < 23)
                gio++;
            else
                gio = 0;
        }
    }
    else
    {
        giay += giays;
    }
    return (*this);
}
ctime ctime::operator-(int giays) //tamthoichuaxong
{
    if (giay - giays >= 0)
    {
        giay -= giays;
    }
    else
    {
        giay = 0;
        if (phut != 0)
    }
    return (*this);
}
ctime ctime::operator++()
{
    if (giay < 59)
    {
        giay++;
    }
    else
    {
        giay = 0;
        if (phut < 59)
            phut++;
        else if (gio < 23)
            gio++;
        else
        {
            gio = 0;
        }
    }
    return (*this);
}

ctime ctime::operator--()
{
    if (giay != 0)
        giay--;
    else
    {
        giay = 59;
        if (phut != 0)
            phut--;
        else
        {
            phut = 59;
            if (gio != 0)
                gio--;
            else
            {
                gio = 23;
            }
        }
    }
    return (*this);
}