#include <bits/stdc++.h>

using namespace std;

class HinhBinhHanh {
	float a, b, h;
public:
	double chuVi();
	double dienTich();
	HinhBinhHanh(float a, float b, float h);
	void xuat();
};

double HinhBinhHanh::chuVi() {
	return (a + b) * 2;	
}

double HinhBinhHanh::dienTich() {
	return a * h;	
}

HinhBinhHanh::HinhBinhHanh(float a, float b, float h) {
	this->a = a;
	this->b = b;
	this->h = h;
}

void HinhBinhHanh::xuat() {
	cout << "CHIEU DAI DAY: " << a << endl;
	cout << "CHIEU DAI BEN: " << b << endl;
	cout << "CHIEU CAO: " << h << endl;
	cout << "CHU VI: " << chuVi() << endl;
	cout << "DIEN TICH: " << dienTich() << endl;	
}

int main() {
	HinhBinhHanh a(1.2, 4.5, 6);
	HinhBinhHanh b(10, 11, 1.2);
	
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








