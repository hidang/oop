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
    ctime kq = *this;
    if (kq.giay + giays >= 60)
    {
        if (giays > 60) //truong hop 60 x2 x3 x4...
        {
            while (giays >= 60)
            {
                if (kq.giay + giays > 60) //xet lai vì lần 2 (3) sẽ giay sẽ biến đổi
                {
                    int t = kq.giay;
                    kq.giay = kq.giay + giays - 60; //phat sinh truong hop >60s
                    if (kq.giay > 59)
                    {
                        kq.giay = t;
                    }

                    if (kq.phut < 59)
                        kq.phut++;
                    else if (kq.gio < 23)
                        kq.gio++;
                    else
                        kq.gio = 0;
                }
                else
                {
                    kq.giay += giays;
                }
                giays -= 60;
            }
        }
        else //truong hop 60 x1
        {
            kq.giay = kq.giay + giays - 60;
            if (kq.phut < 59)
                kq.phut++;
            else if (kq.gio < 23)
                kq.gio++;
            else
                kq.gio = 0;
        }
    }
    else
    {
        kq.giay += giays;
    }
    return kq;
}
ctime ctime::operator-(int giays) //cach operator+ ở trên làm hơi ngáo nhưng vẫn đúng nha T_T
{
    ctime kq = *this; //cho kq = voi thoigian hien tai(cua class hien tai)
    kq.giay = giay - giays;
    while (kq.giay < -59)
    {
        if (kq.phut != 0)
        {
            kq.phut--;
        }
        else
        {
            if (kq.gio != 0)
            {
                kq.phut = 0;
                kq.gio--;
            }
            else
            {
                kq.phut = 0;
                kq.gio = 23;
            }
        }

        kq.giay += 60;
    }
    if (kq.giay < 0)
    {
        /* code */
    }

    return kq;
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