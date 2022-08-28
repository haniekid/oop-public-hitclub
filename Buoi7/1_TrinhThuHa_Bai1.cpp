#include<bits/stdc++.h>

using namespace std;

class Hang {
private:
	float trongLuong, giaTien, theTich;

	friend istream &operator>>(istream &is, Hang &a);
	friend ostream &operator<<(ostream &os, Hang a);
public:
	Hang();
	Hang(float trongLuong, float giaTien, float theTich);
	Hang operator+(Hang &a);
	bool operator==(Hang &a);
};

Hang::Hang() {
	trongLuong = 0;
	giaTien = 0;
	theTich = 0;
}

Hang::Hang(float trongLuong, float giaTien, float theTich){
	this->trongLuong = trongLuong;
	this->giaTien = giaTien;
	this->theTich = theTich;
}

Hang Hang::operator+(Hang &a){
	Hang c;
	c.trongLuong = this->trongLuong + a.trongLuong;
	c.giaTien = this->giaTien + a.giaTien;
	c.theTich = this->theTich + a.theTich;
	return c;
}

bool Hang::operator==(Hang &a){
	if(this->giaTien == a.giaTien && this->trongLuong == a.trongLuong){
		return true;
	}
	return false;
}

istream &operator>>(istream &is, Hang &a){
	cout << "\nNHAP TRONG LUONG: ";
	is >> a.trongLuong;

	cout << "NHAP GIA TIEN: ";
	is >> a.giaTien;

	cout << "NHAP THE TICH: ";
	is >> a.theTich;

	return is;
}

ostream &operator<<(ostream &os, Hang a){
	os << "\nTRONG LUONG: " << a.trongLuong << endl;
	os << "GIA TIEN: " << a.giaTien << endl;
	os << "THE TICH: " << a.theTich << endl;

	return os;
}

int main(){
	Hang a, b;
	Hang c;

	cout << "NHAP THONG TIN HANG a ";
	cin >> a;

	cout << "NHAP THONG TIN HANG b ";
	cin >> b;

	c = a + b;
	cout << "THONG TIN HANG c = a + b la: " << c << endl;

	if(a == b){
		cout << "HAI MAT HANG a VA b BANG NHAU VE GIA VA TRONG LUONG" << endl;
	}else {
		cout << "HAI MAT HANG a VA b KHONG BANG NHAU VE GIA VA TRONG LUONG" << endl;
	}

}




