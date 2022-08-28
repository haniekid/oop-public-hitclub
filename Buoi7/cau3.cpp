#include <bits/stdc++.h>

using namespace std;


class Hang
{
private:
    float trongLuong, giaTien, theTich;
    friend istream &operator>>(istream &is, Hang &a);
    friend ostream &operator<<(ostream &os, Hang a);
public:
    Hang();
    Hang(float, float, float);
    Hang operator+(Hang &a);
    bool operator==(Hang &a);

};

Hang::Hang()
{
    trongLuong = theTich = giaTien = 0;
}

Hang::Hang(float a, float b, float c)
{
    trongLuong  =a;
    giaTien = b;
    theTich = c;
}

Hang Hang::operator+(Hang &a)
{
    Hang b;
    b.trongLuong = this->trongLuong + a.trongLuong;
    b.giaTien = this-> giaTien + a.giaTien;
    b.theTich = this->theTich + a.theTich;
    return b;
}

bool Hang::operator==(Hang &a)
{
    if(this->trongLuong == a.trongLuong && this->giaTien == a.giaTien && this->theTich == a.theTich)
        return true;
    return false;
}

istream &operator>>(istream &is, Hang &a)
{
    cout<<"Nhap trong luong: "; is>>a.trongLuong;
    cout<<"Nhap gia tien: "; is>>a.giaTien;
    cout<<"Nhap the tich: "; is>>a.theTich;
    return is;
}

ostream &operator<<(ostream &os, Hang a)
{
    os<<"Trong luong: "<<a.trongLuong<<endl;
    os<<"Gia tien: "<<a.giaTien<<endl;
    os<<"The tich: "<<a.theTich<<endl;
    return os;
}
int main()
{
    Hang a, b, c;
    cout<<"Nhap a: "<<endl; cin>>a;
    cout<<"Nhap b: "<<endl;
    cin>>b;
    c = a + b;
    cout<<"Thong tin c: "<<endl<<c<<endl;
    if(a == b)
    {
        cout<<"a = b"<<endl;
    }
    else
        cout<<" a khong bang b"<<endl;
}

