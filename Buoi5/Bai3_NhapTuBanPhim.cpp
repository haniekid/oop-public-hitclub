#include <bits/stdc++.h>

using namespace std;

class HinhBinhHanh {
	float a, b, h;
public:
	double chuVi();
	double dienTich();
	void nhap();
	void xuat();
};

void HinhBinhHanh::nhap() {
	cout << "NHAP CHIEU DAI DAY: ";
	cin >> a;
	
	cout << "NHAP CHIEU DAI BEN: ";
	cin >> b;
	
	cout << "NHAP CHIEU CAO: ";
	cin >> h;	
}

double HinhBinhHanh::chuVi() {
	return (a + b) * 2;	
}

double HinhBinhHanh::dienTich() {
	return a * h;	
}

void HinhBinhHanh::xuat() {
	cout << "CHIEU DAI DAY: " << a << endl;
	cout << "CHIEU DAI BEN: " << b << endl;
	cout << "CHIEU CAO: " << h << endl;
	cout << "CHU VI: " << chuVi() << endl;
	cout << "DIEN TICH: " << dienTich() << endl;	
}

int main() {
	HinhBinhHanh a;
	HinhBinhHanh b;
	
	cout << "NHAP THONG TIN HBH a: " << endl;
	a.nhap();
	cout << "NHAP THONG TIN HBH b: " << endl;
	b.nhap();
	
	cout << "------------------------------" << endl;
	cout << "THONG TIN HBH a: " << endl;
	a.xuat();
	cout << "------------------------------" << endl;
	cout << "THONG TIN HBH b: " << endl;
	b.xuat();
	
	cout << "------------------------------" << endl;
	if (a.dienTich() > b.dienTich()) {
		cout << "HBH a CO DIEN TICH LON HON " << endl;
	} else if (a.dienTich() < b.dienTich()) {
		cout << "HBH b CO DIEN TICH LON HON " << endl; 
	} else {
		cout << "HAI HBH CO DIEN TICH BANG NHAU " << endl;
	}
}








