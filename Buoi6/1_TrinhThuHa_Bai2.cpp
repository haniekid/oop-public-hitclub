#include <bits/stdc++.h>

using namespace std;

class Khoa {
private:
	char maKhoa[30], tenKhoa[30], truongKhoa[30];
public:
	friend class TruongDH;
};

class Ban {
private:
	char maBan[30], tenBan[30], ngay[30];
public:
	friend class TruongDH;
};

class Truong {
protected:
	char maTruong[30], tenTruong[30], diaChiTruong[30];
public:
	void nhap();
	void xuat();
	
};	

void Truong::nhap() {
	cout << "NHAP MA TRUONG: ";
	fflush(stdin);
	gets(maTruong);
	
	cout << "NHAP TEN TRUONG: ";
	fflush(stdin);
	gets(tenTruong);
	
	cout << "NHAP DIA CHI TRUONG: ";
	fflush(stdin);
	gets(diaChiTruong);
	
}
	
void Truong::xuat() {
	cout << "MA TRUONG: " << maTruong << endl;
	cout << "TEN TRUONG: " << tenTruong << endl;
	cout << "DIA CHI TRUONG: " << diaChiTruong << endl;

}	
	
class TruongDH : public Truong {
	Khoa *x;
	int n;
	Ban *y;
	int m;
public:
	void nhap();
	void xuat();
};

void TruongDH::nhap() {
	Truong::nhap();
	
	cout << "NHAP SO KHOA: ";
	cin >> n;
	x = new Khoa[n];
	for(int i = 0; i < n; i++) {
		cout << "--------------------------------" << endl;
		cout << "NHAP THONG TIN KHOA THU " << i + 1 << endl;
		cout << "NHAP MA KHOA: ";
		fflush(stdin);
		gets(x[i].maKhoa);
	
		cout << "NHAP TEN KHOA: ";
		fflush(stdin);
		gets(x[i].tenKhoa);
	
		cout << "NHAP TRUONG KHOA: ";
		fflush(stdin);
		gets(x[i].truongKhoa);
	
	}
	
	cout << "NHAP SO BAN: ";
	cin >> m;
	y = new Ban[m];
	
	for(int i = 0; i < m; i++) {
		cout << "--------------------------------" << endl;
		cout << "NHAP THONG TIN BAN THU " << i + 1 << endl;
		cout << "NHAP MA BAN: ";
		fflush(stdin);
		gets(y[i].maBan);
	
		cout << "NHAP TEN BAN: ";
		fflush(stdin);
		gets(y[i].tenBan);
	
		cout << "NHAP NGAY THANH LAP: ";
		fflush(stdin);
		gets(y[i].ngay);
	}
	
}

void TruongDH::xuat() {
	Truong::xuat();
	
	for(int i = 0; i < n; i++) {
		cout << "--------------------------------" << endl;
		cout << "THONG TIN KHOA THU " << i + 1 << endl;
		cout << "MA KHOA: " << x[i].maKhoa << endl;
		cout << "TEN KHOA: " << x[i].tenKhoa << endl;
		cout << "TRUONG KHOA: " << x[i].truongKhoa << endl;
	}
	
	for(int i = 0; i < m; i++) {
		cout << "--------------------------------" << endl;
		cout << "THONG TIN BAN THU " << i + 1 << endl;
		cout << "MA BAN: " << y[i].maBan << endl;
		cout << "TEN BAN: " << y[i].tenBan << endl;
		cout << "NGAY THANH LAP BAN: " << y[i].ngay << endl;
	}
	
}

int main() {
	TruongDH a;
	a.nhap();
	
	cout << "-------------------------------------INFORMATION-----------------------------" << endl;
	a.xuat();
	
}
	
