#include "GiaSuc.h"

int GiaSuc::Sinh_con(){
    srand((unsigned)time(NULL));
    return rand() % 100;
}

int GiaSuc::Cho_sua(){
    srand((unsigned)time(NULL));
    return rand() % 20;
}

void GiaSuc::Keu(){
    cout<<"Khong xac dinh";
}