#include"diem.h"
#include"DaGiac.h"


class HinhChuNhat : public DaGiac
{
    public :
    void nhap();
    void xuat();
};

void HinhChuNhat::nhap()
{
    SoLuongDiem = 4;
    DaGiac::A[0].nhap();
    DaGiac::A[1].nhap();
    DaGiac::A[2].nhap();
    DaGiac::A[3].nhap();
}

void HinhChuNhat::xuat()
{
    DaGiac::xuat();
}

