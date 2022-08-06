#include <bits/stdc++.h>

using namespace std;

class HANG {
private:
    int Mahang;
    char Tenhang[30];
    int Dongia;
public:
	void NHAP();
	void XUAT();
};

class PHIEU {
private:
    int Maphieu;
	int n;
	HANG *x ;
public:
	void NHAP();
	void XUAT();
};

void HANG::NHAP(){
    cout << "Nhap ma hang: "; cin >> Mahang;
	cout << "Nhap ten hang: "; fflush(stdin); gets(Tenhang);
	cout << "Nhap don gia: "; cin >> Dongia;	
}

void HANG::XUAT(){
    cout << "Ma hang: " << Mahang << endl;
	cout << "Ten hang: " << Tenhang << endl;
	cout << "Don gia: " << Dongia << endl;
}

void PHIEU::NHAP(){
    cout << "Nhap ma phieu: "; cin >> Maphieu;	
    cout << "Nhap so mat hang trong phieu: "; cin >> n;
    x = new HANG[n];
    for(int i = 0; i < n; i++){
    	cout << "Nhap hang so " << i+1 << endl;
    	x[i].NHAP();
	}
}

void PHIEU::XUAT(){
    cout << "Ma phieu: " << Maphieu << endl;	
    
	for(int i = 0; i < n; i++){
		cout << "Hang so " << i+1 << endl;
    	x[i].XUAT();
	}
}

int main(){
	PHIEU a;
	a.NHAP();
	a.XUAT();
}
