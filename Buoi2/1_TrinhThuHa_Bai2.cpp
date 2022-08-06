#include <bits/stdc++.h>

using namespace std;

class NSX {
    char Mansx[30];
	char Tennsx[30];
	char Dcnsx[30];
public:
    void NHAP();
	void XUAT();	
};

void NSX::NHAP() {
    cout << "NHAP MA NSX: ";
	fflush(stdin);
	gets(Mansx);
	
	cout << "NHAP TEN NSX: ";
	fflush(stdin);
	gets(Tennsx);
	
	cout << "NHAP DIA CHI NSX: ";
	fflush(stdin);
	gets(Dcnsx);	
}

void NSX::XUAT() {
    cout << "MA NSX: " << Mansx << endl;
	cout << "TEN NSX: " << Tennsx << endl;
	cout << "DIA CHI NSX: " << Dcnsx << endl;
}

class HANG {
    char Mahang[30];
	char Tenhang[30];
	NSX x;	
public:
	void NHAP();
	void XUAT();
};

void HANG::NHAP() {
    cout << "NHAP MA HANG: ";
	fflush(stdin);
	gets(Mahang);
	
	cout << "NHAP TEN HANG: ";
	fflush(stdin);
	gets(Tenhang);
	
	x.NHAP();	
}

void HANG::XUAT() {
    cout << "MA HANG: " << Mahang << endl;
	cout << "TEN HANG: " << Tenhang << endl;
	
	x.XUAT();	
}

int main() {
    HANG a;
	a.NHAP();
	a.XUAT();	
}


