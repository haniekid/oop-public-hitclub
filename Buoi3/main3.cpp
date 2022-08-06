#include <bits/stdc++.h>

using namespace std;

class DATE 
{
private:
	int day;
	int month;
	int year;
	friend class HANG; 
};

class HANG 
{
private:
	char maHang[30];
	char tenHang[30];
	DATE ngaySX;
public:
	void NHAP();
	void XUAT();
};

void HANG::NHAP()
{
	cout << "NHAP MA HANG: ";
	fflush(stdin);
	gets(maHang);
	
	cout << "NHAP TEN HANG: ";
	fflush(stdin);
	gets(tenHang);
	
	cout << "DAY? ";
	cin >> ngaySX.day;
	
	cout << "MONTH? ";
	cin >> ngaySX.month;
	
	cout << "YEAR? ";
	cin >> ngaySX.year;
}

void HANG::XUAT()
{
    cout << "MA HANG: " << maHang << endl;
	cout << "TEN HANG: " << tenHang << endl;
	cout << "Day: " << ngaySX.day << endl;
    cout << "Month: " << ngaySX.month << endl;
    cout << "Year: " << ngaySX.year << endl;
	
}	

int main()
{
	HANG a;
	a.NHAP();
	a.XUAT();
	
}
