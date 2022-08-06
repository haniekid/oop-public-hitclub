
#include <bits/stdc++.h> 

using namespace std;

class Phieu;

class Nguoi {
	char ten[30];
	char sdt[30];
	char diaChi[30];
public:
	void nhap();
	void xuat();	
};

void Nguoi::nhap() {
	cout << "NHAP TEN NGUOI DI CHO: ";
	fflush(stdin);
	gets(ten);
	
	cout << "NHAP SDT NGUOI DI CHO: ";
	fflush(stdin);
	gets(sdt);
	
	cout << "NHAP DIA CHI NGUOI DI CHO: ";
	fflush(stdin);
	gets(diaChi);	
}

void Nguoi::xuat() {
	cout << "Ho va ten nguoi di cho: " << ten << endl;
	cout << "So dien thoai: " << sdt << endl;
	cout << "Dia chi: " << diaChi << endl;	
}

class Hang {
	char tenHang[30];
	float donGia;
	int soLuong;
public:
	void nhap();
	void xuat();
	
	Hang();
	Hang(const char* tenHang, float donGia, int soLuong);
	friend class Phieu;	
	friend void sortAsc(Phieu a);
	friend void searchSP(Phieu a);
	friend void deleteSP(Phieu &a, int pos);
	friend void deleteTM(Phieu &a);
	friend void insert(Phieu &a, Hang b, int pos);
};
Hang::Hang() {
	tenHang[0] = '\0';
	donGia = 0;
	soLuong = 0;	
}
Hang::Hang(const char* tenHang, float donGia, int soLuong) {
	strcpy(this->tenHang, tenHang);
	this->donGia = donGia;
	this->soLuong = soLuong;	
}
void Hang::nhap() {
	cout << "NHAP TEN HANG: ";
	fflush(stdin);
	gets(tenHang);
	
	cout << "NHAP DON GIA: ";
	cin >> donGia;
	
	cout << "NHAP SO LUONG: ";
	cin >> soLuong;
}	

void Hang::xuat() {
	cout << setw(15) << left << tenHang;
	cout << setw(15) << left << donGia;
	cout << setw(15) << left << soLuong;
	cout << setw(15) << left << soLuong*donGia << endl;
}

class Phieu {
	char maPhieu[30];
	char ngay[30];
	
	Nguoi x;
	Hang *y;
	int n;
public:
	void nhap();
	void xuat();
	
	friend void sortAsc(Phieu a);
	friend void searchSP(Phieu a);	
	friend void deleteSP(Phieu &a, int pos);
	friend void deleteTM(Phieu &a);
	friend void insert(Phieu &a, Hang b, int pos);
	
};

void Phieu::nhap() {
	cout << "NHAP MA PHIEU: ";
	fflush(stdin);
	gets(maPhieu);
	
	cout << "NHAP NGAY: ";
	fflush(stdin);
	gets(ngay);	
	
	x.nhap();
	
	cout << "NHAP SO MAT HANG: ";
	cin >> n;
	y = new Hang[n];
	for (int i = 0; i < n; i++) {
		cout << "NHAP THONG TIN MAT HANG THU " << i + 1 << endl;
		y[i].nhap();
	}
}

void Phieu::xuat() {
	cout << "\t\t  PHIEU DI CHO" << endl;
	cout << "Ma phieu: " << setw(25) << left << maPhieu;
	cout << "Ngay: " << ngay << endl;
	
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

void sortAsc(Phieu a) {
	for (int i = 0; i < a.n; i++) {
		for (int j = i + 1; j < a.n; j++) {
			if(a.y[i].soLuong*a.y[i].donGia > a.y[j].soLuong*a.y[j].donGia) {
				swap(a.y[i], a.y[j]);		
			}	
		}
	}	
}

void searchSP(Phieu a) {
	cout << setw(15) << left << "Ten hang";
	cout << setw(15) << left << "Don gia";
	cout << setw(15) << left << "So luong";
	cout << setw(15) << left << "Thanh tien" << endl;
	
	int count = 0;
	for (int i = 0; i < a.n; i++) {
		if(strcmp(a.y[i].tenHang, "Rau") == 0) {
			a.y[i].xuat();	
			count ++;
		} 
	}
	if(count = 0) {
		cout << "KHONG TON TAI MAT HANG Rau" << endl;
	}	
}

void deleteSP(Phieu &a, int pos) {
	for (int i = pos - 1; i < a.n-1; i++) {
		a.y[i] = a.y[i+1];
	}	
	a.y = (Hang* )realloc(a.y, (a.n-1)*sizeof(Hang));
	a.n--;
}

void deleteTM(Phieu &a) {
	for (int i = 0; i < a.n; i++) {
		if(a.y[i].soLuong < 5) {
			deleteSP(a, i+1);
			i--;	
		}
	}	
}

void insert(Phieu &a, Hang x, int pos) {
	a.y = (Hang*)realloc(a.y, a.n+1*sizeof(Hang));
	for(int i = a.n; i >= pos; i--) {
		a.y[i] = a.y[i - 1];
	}	
	a.y[pos-1] = x;
	a.n++;
}


int main() {
	Phieu a;
	a.nhap();
	cout << "---------------------------1--------------------------" << endl;
	a.xuat();
	
//	cout << "---------------------------2--------------------------" << endl;
//	sortAsc(a);
//	a.xuat();
//	
//	cout << "---------------------------3-------------------------" << endl;
//	searchSP(a);
//	
//	cout << "---------------------------4--------------------------" << endl;
//	deleteTM(a);
//	a.xuat();
	
	cout << "-----------------------Chen them san pham--------------------------" << endl;
	Hang x("ThuHa", 1, 100000); 
	insert(a, x, 1);
	a.xuat();
	
	return 0;	
}
