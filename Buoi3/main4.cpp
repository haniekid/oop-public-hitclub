#include <bits/stdc++.h>

using namespace std;

// khai báo và d?nh nghia l?p Sinh viên
class SinhVien
{
private:
	char maSV[10];
	char hoTen[25];
	char lop[10];
	int khoa;
public:
	void Nhap();
	void Xuat();
};

void SinhVien::Nhap()
{
	cout<<"Nhap ma sinh vien: "; fflush(stdin); gets(maSV);
	cout<<"Nhap ten sinh vien: "; fflush(stdin); gets(hoTen);
	cout<<"Nhap lop: "; fflush(stdin); gets(lop);
	cout<<"Nhap khoa: "; cin>>khoa;
}

void SinhVien::Xuat()
{
	cout<<"Ma sinh vien: "<<setw(25)<<left<<maSV<<"Ten sinh vien: "<<hoTen<<endl;
	cout<<"Lop: "<<setw(34)<<left<<lop<<"Khoa: "<<khoa<<endl;
}
// sewt(25)<<left<<maSV
// dành ra 25 ký t? tr?ng d? ghi thông tin maSV và can l? v? bên trái
// ghi setw (25) là can l? v? bên ph?i
class Mon
{
private:
	char tenMon[20];
	int sotrinh;
	float diem;
	friend class Phieu;// khai báo l?p Phieu là b?n c?a l?p Mon
public:
	void Nhap();
	void Xuat();
};

void Mon::Nhap()
{
	cout<<"Nhap ten mon hoc: "; fflush(stdin); gets(tenMon);
	cout<<"Nhap so trinh: "; cin>>sotrinh;
	cout<<"Nhap diem: "; cin>>diem;
}

void Mon::Xuat()
{
	cout<<setw(20)<<left<<tenMon<<setw(20)<<left<<sotrinh<<diem<<endl;
}

class Phieu
{
private:
	SinhVien x;
	Mon *y;
	int n;
public:
	void Nhap();
	void Xuat();
};

void Phieu::Nhap()
{
	x.Nhap();
	cout<<"Nhap so mon hoc: "; cin>>n;
	y = new Mon[n]; // c?p phát b? nh? cho con tr?/ khai báo không gian m?ng
	for(int i = 0; i < n; ++ i)
	{
		cout<<"Nhap thong tin mon hoc thu "<<i + 1<<":"<<endl;
		y[i].Nhap();
	}
}

void Phieu::Xuat()
{
	cout<<"\n====================\n";
	cout<<"\t\tPHIEU BAO DIEM"<<endl;
	x.Xuat();
	cout<<setw(20)<<left<<"Ten mon"<<setw(20)<<left<<"So trinh"<<"Diem"<<endl;
	int sumDiem = 0, sumST = 0;
	for(int i = 0; i < n; ++ i)
	{
		y[i].Xuat();
		sumDiem += y[i].sotrinh * y[i].diem; // vì trong hàm Xuat c?a l?p Phieu truy xu?t d?n thu?c tính riêng tu
		// là s? trình và di?m c?a l?p Mon, nên c?n khai báo cho l?p Phi?u là b?n c?a l?p Môn
		// khai báo l?p b?n thì m?i thu?c tính cung nhu phuong th?c c?a l?p này, s? truy c?p du?c d?n thu?c tính + phuong th?c 
		// riêng tu c?a l?p kia
		sumST += y[i].sotrinh;
	}
	cout<<"\t\t       Diem trung binh: "<<sumDiem * 1. / sumST<<endl; // Nhân 1. là ép ki?u sang float ho?c ghi 1.0 ho?c (float)sumDiem...
}

int main()
{
	Phieu A;
	A.Nhap();
	A.Xuat();
}

