// Khong co hinh thoi truoc, co hinh thoi sau
// Su dung lai code reuse trong quan he ket tap

#include <iostream>
#include<stdio.h>


using namespace std;

class tacgia
{
private:
    char tentg[30];
    char diachi[30];
public:
    void nhap();
    void xuat();
};
class nxb
{
private:
    char tennxb[30];
    char diachinxb[30];
    friend class sach;


};
void tacgia::nhap()
{
    cout<<"nhap ten tg:";       fflush(stdin);      gets(tentg);
    cout<<"nhap dia chi:";      fflush(stdin);      gets(diachi);

}
void tacgia::xuat()
{
    cout<<"ten tac gia:"<<tentg<<endl;
    cout<<"dia chi tac gia:"<<diachi<<endl;
}
class sach
{
private:
    char tensach[30];
    tacgia x;
    nxb y;
public:
    void nhap();
    void xuat();
};
void sach::nhap()
{
    cout<<"nhap ten sach:";         fflush(stdin);      gets(tensach);
    x.nhap();
    cout<<"nhap ten nxb:";          fflush(stdin);      gets(y.tennxb);
    cout<<"nhap dia chi nxb";       fflush(stdin);      gets(y.diachinxb);

}
void sach::xuat()
{
    cout<<"ten sach la:"<<tensach<<endl;
    x.xuat();
    cout<<"ten nxb la:"<<y.tennxb<<endl;
    cout<<"Dia chi nxb la:"<<y.diachinxb<<endl;
}
int main()
{
    sach a;
    a.nhap();
    a.xuat();
    return 0;
}



