#include"diem.h"
#include"DaGiac.h"


class HinhBinhHanh : public DaGiac
{
    public :
    void nhap();
    void xuat();
};

void HinhBinhHanh::nhap()
{
    so_luong_diem = 4;
    DaGiac::A[0].nhap();
    DaGiac::A[1].nhap();
    DaGiac::A[2].nhap();
    DaGiac::A[3].nhap();
}

void HinhBinhHanh::xuat()
{
    DaGiac::xuat();
}
