#include <bits/stdc++.h>

// Neu khong có Hang::Hang(); thì //
using namespace std;

class NSX {
private:
	char tenNSX[30];
	char diaChiNSX[30];
public:
	void nhap();
	void xuat();	
	
//	friend class Tivi;
	friend class Hang;
};

void NSX::nhap() {
	cout<< "NHAP TEN NSX: ";
	fflush(stdin);
	gets(tenNSX);
	
	cout<< "NHAP DIA CHI NSX: ";
	fflush(stdin);
	gets(diaChiNSX);	
}

void NSX::xuat() {
	cout << "TEN NSX: " << tenNSX <<  endl;
	cout << "DIA CHI NSX: " << diaChiNSX << endl;	
}

class Hang {
protected:
	char tenHang[30];
	NSX x;
	float donGia;
public:
	void nhap();
	void xuat();
	Hang();	
};

void Hang::nhap() {
	cout << "NHAP TEN HANG: ";
	fflush(stdin);
	gets(tenHang);
	
	x.nhap();
	
	cout << "NHAP DON GIA: ";
	cin >> donGia;	
}

void Hang::xuat() {
	cout << "TEN HANG: " << tenHang << endl;
	
	x.xuat();
	
	cout << "DON GIA: " << donGia << endl;	
}

Hang::Hang() {
	strcpy(tenHang, "");
	strcpy(x.tenNSX, "");
	strcpy(x.diaChiNSX, "");
	donGia = 0;
}

class Date {
private:
	int d, m, y;	
public:
	void nhap();
	void xuat();
	
	friend class Tivi;
};

void Date::nhap() {
	cout << "DAY? ";
	cin >> d;
	
	cout << "MONTH? ";
	cin >> m;
	
	cout << "YEAR? ";
	cin >> y;	
}

void Date::xuat() {
	cout << "NGAY: " << d  << "/" << m << "/" << y << endl;
}

class Tivi : public Hang{
private:
	char kichThuoc[30];
	Date ngay;
public:
	void nhap();
	void xuat();
	
	Tivi();
		
};

void Tivi::nhap() {
	Hang::nhap();
	cout << "NHAP KICH THUOC: ";
	fflush(stdin);
	gets(kichThuoc);
	
	ngay.nhap();	
}

void Tivi::xuat() {
	Hang::xuat();
	
	cout << "KICH THUOC: " << kichThuoc << endl;
	
	ngay.xuat();	
}

Tivi::Tivi() : Hang() {
	strcpy(this->kichThuoc, "0x0");
	ngay.d = ngay.m = ngay.y = 0;
//	strcpy(tenHang, "");
//	strcpy(x.tenNSX, "");
//	strcpy(x.diaChiNSX, "");
//	donGia = 0;	
}

int main() {
	Tivi a;
	a.nhap();
	a.xuat();	
}
