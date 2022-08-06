#include <bits/stdc++.h>

using namespace std;

class Nguoi {
	char tenNguoi[30], sdtNguoi[30];
	char diaChiNguoi[30];
public:
	void nhap();
	void xuat();	
};

void Nguoi::nhap() {
	cout << "NHAP TEN NGUOI DI CHO: ";
	fflush(stdin);
	gets(tenNguoi);
	
	cout << "NHAP SDT NGUOI DI CHO: ";
	fflush(stdin);
	gets(sdtNguoi);
	
	cout << "NHAP DIA CHI NGUOI DI CHO: ";
	fflush(stdin);
	gets(diaChiNguoi);	
}

void Nguoi::xuat() {
	cout << "Ho va ten nguoi di cho: " << tenNguoi << endl;
	cout << "So dien thoai: " << sdtNguoi << endl;
	cout << "Dia chi: " << diaChiNguoi << endl;
}

class Hang {
	char ten[30];
	float donGia;
	int soLuong;
	
	friend class Phieu;
public:
	void nhap();
	void xuat();
		
};

void Hang::nhap() {
	cout << "NHAP TEN HANG: ";
	fflush(stdin);
	gets(ten); 	
	
	cout << "NHAP DON GIA: ";
	cin >> donGia;
	
	cout << "NHAP SO LUONG: ";
	cin >> soLuong;
}

void Hang::xuat() {
	cout << setw(15) << left << ten;
	cout << setw(15) << left << donGia;
	cout << setw(15) << left << soLuong;
	cout << setw(15) << left << donGia * soLuong << endl;	
}

class Phieu {
	char maPhieu[30];
	char ngay[30];
public:
	void nhap();
	void xuat();
	
	Nguoi x;
	Hang *y;
	int n;
	
		
};

void Phieu::nhap() {
	cout << "NHAP MA PHIEU: ";
	fflush(stdin);
	gets(maPhieu); 
	
	cout << "NHAP NGAY: ";
	fflush(stdin);
	gets(ngay); 
	
	x.nhap();
	
	int n;
	cout << "NHAP SO HANG: ";
	cin >> n;
	y = new Hang[n];
	for (int i = 0; i < n; i++){
		cout << "------------------------------------------" << endl;
		cout << "NHAP THONG TIN SAN PHAN THU " << i + 1 << endl;
		y[i].nhap();
	}
}

void Phieu::xuat() {
	cout << "\t\t PHIEU DI CHO" << endl;
	cout << endl;
	cout << "Ma phieu: " << setw(20) << left << maPhieu;
	cout << "Ngay: " << setw(20) << left << ngay << endl;
	
	x.xuat();
	
	cout << setw(15) << left << "Ten hang";
	cout << setw(15) << left << "Don gia";
	cout << setw(15) << left << "So luong";
	cout << setw(15) << left << "Thanh tien" << endl;
	
	float sum = 0;
	for (int i = 0; i < n; i++) {
		y[i].xuat();
		sum += y[i].soLuong*y[i].donGia;	
	}
	
	cout << setw(50) << right << "Cong thanh tien:    " << sum << endl;
		
}

void sort(Phieu a) {
	for(int i = 0; i < a.n; i++) {
		for( int j = i + 1; j < a.n; j++){
			if(a.y[i].soLuong*a.y[i].donGia > a.y[j].soLuong*a.y[j].donGia) [
				swap(a.y[i], a.y[j]);
			}
		}
	}	
}

void search (Phieu a) {
	int count = 0;
	for(int i = 0; i < a.n; i++) {
		if(strcmp(a.y[i].ten, "Rau") == 0) {
			a.y[i].xuat();
			count ++;	
		}
	}
	
	if(count = 0) {
		cout << "Khong ton tai mat hang nay" << endl;
	}	
}

void deleteSP(Phieu &a, int pos) {
	for(int i = 0; i < a.n; i++) {
		a.y[i] = a.y[i - 1];
	}
	a.y = (Hang *)realloc(a.y, a.n-1*sizeof(Hang));
	a.n--;	
}

void deleteTM(Phieu &a) {
	for(int i = 0; i < a.n; i++) {
		if(a.y[i].soLuong < 5) {
			deleteSP(a, i + 1);
			i--;
		}	
	}
}



int main() {
	Phieu a;
	a.nhap();
	cout << "----------------------------1----------------------" << endl;
	a.xuat();	
	
	
	
}
 

