#include <bits/stdc++.h>

using namespace std;

class MAY {
    char Mamay[30];
	char Kieumay[30];
	char Tinhtrang[30];
public:
	void NHAP();
	void XUAT();
};

void MAY::NHAP(){
    cout << "NHAP MA MAY: "; 
	fflush(stdin); 
	gets(Mamay);
	
    cout << "NHAP KIEU MAY: "; 
	fflush(stdin); 
	gets(Kieumay);
	
    cout << "NHAP TINH TRANG: "; 
	fflush(stdin); 
	gets(Tinhtrang);
}

void MAY::XUAT(){
    cout << "MA MAY : " << Mamay << endl;
    cout << "KIEU MAY: " << Kieumay << endl;
    cout << "TINH TRANG: " << Tinhtrang << endl;
}

class QUANLY {
    char Maql[30];
    char Hoten[30];
public:
    void NHAP();
	void XUAT();	
};

void QUANLY::NHAP(){
    cout << "NHAP MA NGUOI QL: "; 
	fflush(stdin); 
	gets(Maql);
	
    cout << "NHAP TEN NGUOI QL: "; 
	fflush(stdin); 
	gets(Hoten);
}
void QUANLY::XUAT(){
    cout << "MA NGUOI QL: " << Maql << endl;
    cout << "TEN NGUOI QL: " << Hoten << endl;
}

class PHONGMAY {
    char Maphong[30];
	char Tenphong[30];
	char Dientich[30];
	
	QUANLY x;
	MAY *y;
	int n;
public:
    void NHAP();
	void XUAT();	
};

void PHONGMAY::NHAP(){
    cout << "NHAP MA PHONG: ";
	fflush(stdin);
	gets(Maphong);
	
	cout << "NHAP TEN PHONG: ";
	fflush(stdin);
	gets(Tenphong);
	
	cout << "NHAP DIEN TICH: ";
	fflush(stdin);
	gets(Dientich);	
	
	x.NHAP();
	
	cout << "NHAP SO MAY TINH: ";
	cin >> n;
	
	y = new MAY[n];
	for(int i = 0; i < n; i++){
	    cout << "NHAP THONG TIN MAY THU " << i + 1 << endl;
	    y[i].NHAP();
	}
}

void PHONGMAY::XUAT(){
	
    cout << "NHAP MA PHONG: " << Maphong << endl;
	cout << "NHAP TEN PHONG: " << Tenphong << endl;
	cout << "NHAP DIEN TICH: "	<< Dientich << endl;
	
	x.XUAT();
	
	for(int i = 0; i < n; i++){
	    cout << "THONG TIN MAY THU " << i + 1 << endl;
	    y[i].XUAT();
	}
}

int main() {
	
    PHONGMAY a;
	a.NHAP();
	a.XUAT();	
	
	return 0;
}

	
