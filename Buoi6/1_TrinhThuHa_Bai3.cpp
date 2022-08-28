#include<bits/stdc++.h>

using namespace std;

class BenhNhan;

class Nguoi {
protected:
	char tenNguoi[30];
	int tuoi;
public:
	void nhap();
	void xuat();
	
	friend void count(BenhNhan *a, int n);
};

void Nguoi::nhap() {
	cout << "NHAP HO TEN: ";
	fflush(stdin);
	gets(tenNguoi);
	
	cout << "NHAP TUOI: ";
	cin >> tuoi;
	
}

void Nguoi::xuat() {
	cout << "HO TEN: " << tenNguoi << endl;
	cout << "TUOI: " << tuoi << endl; 
}
	
class BenhVien {
private:
	char tenBV[30], diaChiBV[30];
	Nguoi giamDoc;
public:
	friend class BenhNhan;
	
};

class BenhNhan: public Nguoi{
private:
	char maBN[30], tienSuBN[30], chuanDoanBN[30];
	BenhVien bv;
public:
	void nhap();
	void xuat();
	
	friend void change(BenhNhan *a, int n);
};

void BenhNhan::nhap(){
	
	cout << "NHAP MA BENH NHAN: ";
	fflush(stdin);
	gets(maBN);
	
	Nguoi::nhap();
	
	cout << "NHAP TIEN SU BENH NHAN: ";
	fflush(stdin);
	gets(tienSuBN);
	
	cout << "NHAP CHUAN DOAN BENH NHAN: ";
	fflush(stdin);
	gets(chuanDoanBN);
	
	cout << "NHAP TEN BENH VIEN: ";
	fflush(stdin);
	gets(bv.tenBV);
	
	cout << "NHAP DIA CHI BENH VIEN: ";
	fflush(stdin);
	gets(bv.diaChiBV);
	
	cout << "NHAP THONG TIN GIAM DOC BENH VIEN: " << endl;
	bv.giamDoc.nhap();
	
}

void BenhNhan::xuat(){
	cout << "MA BENH NHAN: " << maBN << endl;
	
	Nguoi::xuat();
	
	cout << "TIEN SU BENH NHAN: " << tienSuBN << endl;
	cout << "CHUAN DOAN BENH NHAN: " << chuanDoanBN << endl;
	
	cout << "TEN BENH VIEN: " << bv.tenBV << endl;
	cout << "DIA CHI BENH VIEN: " << bv.diaChiBV << endl;
	
	cout << "THONG TIN GIAM DOC BENH VIEN: " << endl;
	bv.giamDoc.xuat();
}

void count(BenhNhan *a, int n){
	int count = 0;
	for(int i = 0; i < n; i++){
		if(a[i].tuoi > 30){
			count++;
		}
	}	
	if(count == 0) {
		cout << "KHONG CO BENH NHAN NAO LON HON 30 TUOI" << endl;
	} else {
		cout << "CO " << count << " BENH NHAN LON HON 30 TUOI" << endl;
	}
}

void change(BenhNhan *a, int n){
	for(int i = 0; i < n; i++){
		if(strcmp(a[i].maBN, "BN01") == 0){
			a[i].tuoi = 20;
		}
	}	
}

int main(){
	BenhNhan *a;
	int n;
	cout << "NHAP SO BENH NHAN: ";
	cin >> n;
	a = new BenhNhan[n];
	for(int i = 0; i < n; i++){
		cout << "--------------------------------" << endl;
		cout << "NHAP THONG TIN BENH NHAN THU " << i + 1 << endl;
		a[i].nhap();
	}
	
	for(int i = 0; i < n; i++){
		cout << "--------------------------------" << endl;
		cout << "THONG TIN BENH NHAN THU " << i + 1 << endl;
		a[i].xuat();
	}
	
	cout << "---------------------------------BONUS1---------------------------" << endl;
	count(a, n);
	
	cout << "---------------------------------BONUS2---------------------------" << endl;
	change(a, n);
	for(int i = 0; i < n; i++){
		cout << "--------------------------------" << endl;
		cout << "THONG TIN BENH NHAN THU " << i + 1 << endl;
		a[i].xuat();
	}
	
}

