#include <bits/stdc++.h>

using namespace std;
// windown + v : hien bang sao chep 
class PhanSo {
private:
	int tuSo, mauSo;
	friend istream &operator>>(istream &in, PhanSo &a);
	friend ostream &operator<<(ostream &out, PhanSo a);
	
public:
	PhanSo() {};
	PhanSo(int a, int b){
		tuSo = a;
		mauSo = b;	
	}
// Kieu_tra_ve operatortoan_tu(tham so truyen vao)
	PhanSo operator*(PhanSo &k){
		PhanSo c;
		c.tuSo = this->tuSo * k.tuSo; // ps luc sau bang ps ban dau(ps1) * ps truyên vao(ps2)
		c.mauSo = this->mauSo * k.mauSo;
		return c;	
	}
	
	PhanSo operator/(PhanSo &k){
		PhanSo c;	
		c.tuSo = this->tuSo * k.mauSo;
		c.mauSo = this->mauSo * k.tuSo;
		return c;
	}
	
	PhanSo operator+(PhanSo &k){
		PhanSo c;
		c.tuSo = this->tuSo*k.mauSo + this->mauSo*k.tuSo;
		c.mauSo = this->mauSo * k.mauSo;
		return c;
	}
	
	PhanSo operator-(PhanSo &k){
		PhanSo c;
		c.tuSo = this->tuSo*k.mauSo - this->mauSo*k.tuSo;
		c.mauSo = this->mauSo * k.mauSo;
		return c;
	}
	
	void xuat(){
		cout << tuSo << "/" << mauSo << endl;	
	}
};

ostream &operator<<(ostream &out, PhanSo a){
//	out << a.tuSo << "/" << a.mauSo	<< endl;
	a.xuat();
	return out;
}
istream &operator>>(istream &in, PhanSo &a){
	cout << "Nhap tu so: ";
	in >> a.tuSo;
	cout << "Nhap mau so: ";
	in >> a.mauSo;
	return in;	
}

int main(){
//	PhanSo a(2, 3);
//	PhanSo b(3, 5);
//	PhanSo c;
//	c = a * b;
//	c.xuat(); 
//	
//	c = a / b;
//	c.xuat();
//	
//	c = a + b;
//	c.xuat();
//	
//	c = a - b;
//	c.xuat();

	PhanSo a;
	cin >> a;
	cout << a << endl;
	
	
	
}
