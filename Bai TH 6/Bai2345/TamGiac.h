#include "DaGiac.h"
#include "diem.h"

class TamGiac : public DaGiac
{
    public :
        void nhap();
        void xuat();
        void Tinh_Tien();
        void Thu_phong();
        void Quay();

};

void TamGiac::nhap()
{
    SoLuongDiem = 3;
    DaGiac::A[0].nhap();
    DaGiac::A[1].nhap();
    DaGiac::A[2].nhap();
}

void TamGiac::xuat()
{
    DaGiac::xuat();
}

void TamGiac::Tinh_Tien()
{
    DaGiac::Tinh_tien();
}

void TamGiac::Thu_phong()
{
    DaGiac::phongto_thunho();
}

void TamGiac::Quay()
{
    DaGiac::Quay();
}
