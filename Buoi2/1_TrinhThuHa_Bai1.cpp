#include <bits/stdc++.h>

using namespace std;

class HANG {
private:
	char Mahang[30];
	char Tenhang[30];
	float Dongia;
	int Soluong;
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
	
	cout << "NHAP DON GIA: "; 
	cin >> Dongia;
	
	cout << "NHAP SO LUONG: "; 
	cin >> Soluong;	
}

void HANG::XUAT() {
    cout << "MA HANG: " << Mahang << endl;
	cout << "TEN HANG: " << Tenhang << endl;
	cout << "DON GIA: " << Dongia << endl;
	cout << "SO LUONG: " << Soluong << endl; 
	cout << "THANH TIEN: " << Soluong * Dongia << endl;
		
}

int main() {
	int n;
	HANG *x;
	
	cout << "NHAP SO MAT HANG: " ; 
	cin >> n;
	x = new HANG[n];
	
	for(int i = 0; i < n; i++){
	    cout << "NHAP THONG TIN MAT HANG THU " << i + 1 << endl;
		x[i].NHAP();	
	}
	
	for(int i = 0; i < n; i++){
	    cout << "THONG TIN MAT HANG THU " << i + 1 << endl;
		x[i].XUAT();
	}

	return 0;	
}
