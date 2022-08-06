#include <bits/stdc++.h>

using namespace std;

class Phieu;

class NCC {
	char maNCC[30];
	char tenNCC[30];
	char diaChiNCC[30];
	char sdtNCC[30];
public:
	void nhap();
	void xuat();
};

void NCC::nhap() {
	cout << "NHAP MA NCC: ";
	fflush(stdin);
	gets(maNCC);
	
	cout << "NHAP TEN NCC: ";
	fflush(stdin);
	gets(tenNCC);	
	
	cout << "NHAP DIA CHI NCC: ";
	fflush(stdin);
	gets(diaChiNCC);
	
	cout << "NHAP SDT NCC: ";
	fflush(stdin);
	gets(sdtNCC);
}

void NCC::xuat() {
	cout << "Ma nha cung cap: " << setw(15) << left << maNCC;
	cout << "Ten nha cung cap: " << tenNCC << endl;
	cout << "Dia chi: " << setw(27) << left << diaChiNCC;
	cout << "SDT: " << sdtNCC << endl;
}

class SanPham {
	char maSP[30];
	char tenSP[30];
	int soLuong;
	int donGia;	
	
	friend void sortDesc(Phieu a);
public:
	void nhap();
	void xuat();
	
	friend class Phieu;
};

void SanPham::nhap() {
	cout << "NHAP MA SP: ";
	fflush(stdin);
	gets(maSP);
	
	cout << "NHAP TEN SP: ";
	fflush(stdin);
	gets(tenSP);
	
	cout << "NHAP SO LUONG: ";
	cin >> soLuong;
	
	cout << "NHAP DON GIA: ";
	cin >> donGia;
}

void SanPham::xuat() {
	cout << setw(15) << left << maSP;	
	cout << setw(15) << left << tenSP;
	cout << setw(15) << left << soLuong;
	cout << setw(15) << left << donGia;
	cout << setw(15) << left << soLuong * donGia << endl;
}

class Phieu {
	char maPhieu[30];
	char ngayLap[30];
	
	SanPham *y;
	NCC x;
	int n;
	
public: 
	void nhap();
	void xuat();
	friend void sortDesc(Phieu a);	
};

void Phieu::nhap() {
	cout << "NHAP MA PHIEU: ";
	fflush(stdin);
	gets(maPhieu);
	
	cout << "NHAP NGAY LAP: ";
	fflush(stdin);
	gets(ngayLap);
		
	x.nhap();
	
	cout << "NHAP SO SAN PHAM: ";
	cin >> n;
	y = new SanPham[n];
	for(int i = 0; i < n; i++){
		cout << "NHAP THONG TIN SP THU " << i + 1 << endl;
		y[i].nhap();	
	}
}

void Phieu::xuat() {
	cout << "Dai hoc Victory" << endl;
	cout << "\t\t  PHIEU NHAP VAN PHONG PHAM" << endl;
	cout << "Ma phieu: " << setw(25) << left << maPhieu;
	cout << "Ngay lap: " << ngayLap << endl;
	
	x.xuat();
	
	cout << setw(15) << left << "Ma SP ";
	cout << setw(15) << left << "Ten SP ";
	cout << setw(15) << left << "So luong ";
	cout << setw(15) << left << "Don gia ";
	cout << setw(15) << left << "Thanh tien " << endl;
	
	float sum = 0;
	for(int i = 0; i < n; i++){
		y[i].xuat();
		sum += y[i].soLuong*y[i].donGia;	
	}
	cout << setw(65) << right << "Tong: " << sum << endl;
	cout << endl;
	cout << "\tHieu truong \t\t Phong tai chinh \t\t Nguoi lap" << endl;
	
}

void sortDesc(Phieu a) {
	for (int i = 0; i < a.n; i++) {
		for (int j = i + 1; j < a.n; j++) {
			if(a.y[i].soLuong*a.y[i].donGia < a.y[j].soLuong*a.y[j].donGia) {
				swap(a.y[i], a.y[j]);		
			}
		}
	}	
}

void insert(Phieu &a, SanPham b, int pos) {
	
	for (int i = 0; i < a.n; i++) {
		a.
	}	
}

int main() {
	Phieu a;
	a.nhap();
	cout << "-------------------------1----------------------" << endl;
	a.xuat();
	
	cout << "-------------------------2----------------------" << endl;
	sortDesc(a);
	a.xuat();
	
	cout << "-------------------------3----------------------" << endl;
	
	cout << "-------------------------4----------------------" << endl;
	
	cout << "-------------------------5----------------------" << endl;
}



