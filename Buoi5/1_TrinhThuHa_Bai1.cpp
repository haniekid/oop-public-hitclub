#include <bits/stdc++.h>

using namespace std;

class Printer{
protected:
	double trongLuong;
	char hangSX[30];
	int namSX;
	int tocDo;
};

class Dotprinter : public Printer {
	int matDoKim;
public:
	void nhap();
	void xuat();	
};

class Laserprinter : public Printer {
	int doPhanGiai;
public:
	void nhap();
	void xuat();	
};

void Dotprinter::nhap() {
	cout << "NHAP TRONG LUONG: ";
	cin >> trongLuong;
	
	cout << "NHAP HANG SAN XUAT: ";
	fflush(stdin);
	gets(hangSX);
	
	cout << "NHAP NAM SAN XUAT: ";
	cin >> namSX;
	
	cout << "NHAP TOC DO: ";
	cin >> tocDo;
	
	cout << "NHAP MAT DO KIM: ";	
	cin >> matDoKim;
}

void Dotprinter::xuat() {
	cout << "TRONG LUONG: " << trongLuong << endl;
	cout << "HANG SAN XUAT: " << hangSX << endl;
	cout << "NAM SAN XUAT: " << namSX << endl;
	cout << "TOC DO: " << tocDo << endl;
	cout << "MAT DO KIM: " << matDoKim << endl;	
	
}

void Laserprinter::nhap() {
	cout << "NHAP TRONG LUONG: ";
	cin >> trongLuong;
	
	cout << "NHAP HANG SAN XUAT: ";
	fflush(stdin);
	gets(hangSX);
	
	cout << "NHAP NAM SAN XUAT: ";
	cin >> namSX;
	
	cout << "NHAP TOC DO: ";
	cin >> tocDo;
	
	cout << "NHAP DO PHAN GIAI: ";
	cin >> doPhanGiai;
}

void Laserprinter::xuat() {
	cout << "TRONG LUONG: " << trongLuong << endl;
	cout << "HANG SAN XUAT: " << hangSX << endl;
	cout << "NAM SAN XUAT: " << namSX << endl;
	cout << "TOC DO: " << tocDo << endl;
	cout << "DO PHAN GIAI: " << doPhanGiai << endl;	
}

int main() {
	Dotprinter a;
	Laserprinter *b;	
	
	cout<< "NHAP THONG TIN CHO MAY IN KIM: " << endl;
    a.nhap();
    int n;
	cout << "NHAP SO MAY IN LASER: ";
	cin >> n;
	
	b = new Laserprinter[n];
	for(int i = 0; i < n; i++) {
		cout << "NHAP THONG TIN CHO MAY IN LASER THU " << i + 1 << endl;
		b[i].nhap();	
	}
	
	cout << "------------------------------" << endl;
    cout<<"THONG TIN MAY IN KIM: "<<endl;
    a.xuat();
    
    cout << "------------------------------" << endl;
    for(int i = 0; i < n; i++) {
		cout << "THONG TIN CHO MAY IN LASER THU " << i + 1 << endl;
		b[i].xuat();	
	}
}
