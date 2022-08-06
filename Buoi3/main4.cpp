#include <bits/stdc++.h>

using namespace std;

// khai b�o v� d?nh nghia l?p Sinh vi�n
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
// d�nh ra 25 k� t? tr?ng d? ghi th�ng tin maSV v� can l? v? b�n tr�i
// ghi setw (25) l� can l? v? b�n ph?i
class Mon
{
private:
	char tenMon[20];
	int sotrinh;
	float diem;
	friend class Phieu;// khai b�o l?p Phieu l� b?n c?a l?p Mon
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
	y = new Mon[n]; // c?p ph�t b? nh? cho con tr?/ khai b�o kh�ng gian m?ng
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
		sumDiem += y[i].sotrinh * y[i].diem; // v� trong h�m Xuat c?a l?p Phieu truy xu?t d?n thu?c t�nh ri�ng tu
		// l� s? tr�nh v� di?m c?a l?p Mon, n�n c?n khai b�o cho l?p Phi?u l� b?n c?a l?p M�n
		// khai b�o l?p b?n th� m?i thu?c t�nh cung nhu phuong th?c c?a l?p n�y, s? truy c?p du?c d?n thu?c t�nh + phuong th?c 
		// ri�ng tu c?a l?p kia
		sumST += y[i].sotrinh;
	}
	cout<<"\t\t       Diem trung binh: "<<sumDiem * 1. / sumST<<endl; // Nh�n 1. l� �p ki?u sang float ho?c ghi 1.0 ho?c (float)sumDiem...
}

int main()
{
	Phieu A;
	A.Nhap();
	A.Xuat();
}

