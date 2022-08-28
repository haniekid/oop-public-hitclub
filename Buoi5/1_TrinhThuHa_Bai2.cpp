#include <bits/stdc++.h>
// Chú thich: float: dienAp
using namespace std;

class Electronic {
protected:
	float congSuat;
	int dienAp;
public:
	Electronic(float congSuat, int dienAp);	
};

class MayGiat : public Electronic {
	float dungTich;
	char loai[30];	
public:
	void xuat();
	MayGiat(float congSuat, int dienAp, float dungTich, const char* loai);	
};

void MayGiat::xuat() {
	cout << "CONG SUAT: " << this->congSuat << endl;
	cout << "DIEN AP: " << this->dienAp << endl;
	cout << "DUNG TICH: " << this->dungTich << endl;
	cout << "LOAI: " << this->loai << endl;	
}

class TuLanh : public Electronic {
	float dungTich;
	int soNgan;
public: 
	void xuat();
	TuLanh(float congSuat, int dienAp, float dungTich, int soNgan);	
};

void TuLanh::xuat() {
	cout << "CONG SUAT: " << this->congSuat << endl;
	cout << "DIEN AP: " << this->dienAp << endl;
	cout << "DUNG TICH: " << this->dungTich << endl;
	cout << "SO NGAN: " << this->soNgan << endl;	
}

Electronic::Electronic(float congSuat, int dienAp) {
	this->congSuat = congSuat;
	this->dienAp = dienAp;
}	

MayGiat::MayGiat(float congSuat, int dienAp, float dungTich, const char* loai) : Electronic(congSuat, dienAp) {
	this->congSuat = congSuat;
	this->dienAp = dienAp;
	this->dungTich = dungTich;
	strcpy(this->loai, loai);	
}

TuLanh::TuLanh(float congSuat, int dienAp, float dungTich, int soNgan) : Electronic(congSuat, dienAp) {
	this->congSuat = congSuat;
	this->dienAp = dienAp;
	this->dungTich = dungTich;
	this->soNgan = soNgan;	
}

int main() {
	MayGiat a(1.5, 3, 4.5, "TOT");
	TuLanh b(2.3, 2, 4.6, 7);
	
	cout << "------------------------------" << endl;
	cout << "THONG TIN MAY GIAT: " << endl;
	a.xuat();
	cout << "------------------------------" << endl;
	cout << "THONG TIN TU LANH: " << endl;
	b.xuat();	
}





