#include <bits/stdc++.h>

using namespace std;

class LopHoc;

class Nguoi {
	char hoTen[30];
	char ngaySinh[30];	
	char queQuan[30];
public:
	void nhap();
	void xuat();

};

void Nguoi::nhap() {
	cout << "NHAP HO TEN: ";
	fflush(stdin);
	gets(hoTen);	
	
	cout << "NHAP NGAY SINH: ";
	fflush(stdin);
	gets(ngaySinh);
	
	cout << "NHAP QUE QUAN: ";
	fflush(stdin);
	gets(queQuan);
}

void Nguoi::xuat() {
	cout << "HO TEN: " << hoTen << endl;
	cout << "NGAY SINH: " << ngaySinh << endl;
	cout << "QUE QUAN: " << queQuan << endl;
}


class SinhVien : public Nguoi{
protected:
	char maSV[30], nganh[30];
	int khoaHoc;
public:
	void nhap();
	void xuat();
		
	friend void count(LopHoc a);
	friend void sort(LopHoc a);
	
};

void SinhVien::nhap() {
	Nguoi::nhap();
	cout << "NHAP MA SV: ";
	fflush(stdin);
	gets(maSV);
	
	cout << "NHAP NGANH: ";
	fflush(stdin);
	gets(nganh);
	
	cout << "NHAP KHOA HOC: ";
	cin >> khoaHoc;	
}

void SinhVien::xuat() {
	Nguoi::xuat();
	cout << "MA SV: " << maSV << endl;
	cout << "NGANH: " << nganh << endl;
	cout << "KHOA HOC: " << khoaHoc << endl;	
}

class LopHoc {
	char maLH[30];
	char tenLH[30], ngayMo[30];
	SinhVien *x;
	int n;
	char giaoVien[30];
public:
	void nhap();
	void xuat();
	
	friend void count(LopHoc a);
	friend void sort(LopHoc a);
};

void LopHoc::nhap() {
	cout << "NHAP MA LH: ";
	fflush(stdin);
	gets(maLH);	
	
	cout << "NHAP TEN LH: ";
	fflush(stdin);
	gets(tenLH);
	
	cout << "NHAP NGAY MO: ";
	fflush(stdin);
	gets(ngayMo);
	
	cout << "NHAP SO SINH VIEN: ";
	cin >> n;
	
	x = new SinhVien[n];
	for(int i = 0; i < n; i++) {
		cout << "----------------------------------" << endl;
		cout << "NHAP THONG TIN SV THU " << i + 1 << endl;
		x[i].nhap();	
	}
	
	cout << "NHAP TEN GIAO VIEN: ";
	fflush(stdin);
	gets(giaoVien);
}

void LopHoc::xuat() {
	cout << "MA LH: " << maLH << endl;
	cout << "TEN LH: " << tenLH << endl;
	cout << "NGAY MO: " << ngayMo << endl;
	
	for(int i = 0; i < n; i++) {
		cout << "----------------------------------" << endl;
		cout << "THONG TIN SV THU " << i + 1 << endl;
		x[i].xuat();	
	}	
	
	cout << "GIAO VIEN: " << giaoVien << endl;
}

void count(LopHoc a) {
	int count = 0;
	for(int i = 0; i < a.n; i++) {
		if(a.x[i].khoaHoc == 11) 
			count ++;
	}
	
	if(count == 0) {
		cout << "KHONG CO SINH VIEN NAO CUA KHOA 11" << endl;	
	}else {
		cout << "LOP HOC CO " << count<< " SV KHOA 11 " << endl;
	}	
}

void sort(LopHoc a) {
	for(int i = 0; i < a.n; i++) {
		for(int j = i+ 1; j < a.n; j++) {
			if(a.x[i].khoaHoc > a.x[j].khoaHoc) {
				swap(a.x[i], a.x[j]);	
			}
		}
	}	
}

int main() {
	LopHoc a;
	cout << "------------------------1----------------------" << endl;
	a.nhap();
	a.xuat();
	
	cout << "------------------------2----------------------" << endl;
	count(a);	
	
	cout << "------------------------3----------------------" << endl;
	sort(a);
	a.xuat();
}





