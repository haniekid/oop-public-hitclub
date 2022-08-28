#include<bits/stdc++.h>

using namespace std;

class ThuaDat {
private:
	float length, width;
	float price;

	friend istream &operator>>(istream &is, ThuaDat &a);
	friend ostream &operator<<(ostream &os, ThuaDat a);
public:
	ThuaDat();
	ThuaDat(float a, float b, float c);

	float operator*(ThuaDat &a);
	bool operator==(ThuaDat &a);
};

ThuaDat::ThuaDat(){
	length = width = price = 0;
}

ThuaDat::ThuaDat(float a, float b, float c){
	length = a;
	width = b;
	price = c;
}

float ThuaDat::operator*(ThuaDat &a){
	return length*width;
}

bool ThuaDat::operator==(ThuaDat &a){
    if((this->length*width== a.length*width )&& (this->price == a.price)){
        return true;
    }
	return false;
}

istream &operator>>(istream &is, ThuaDat &a){
	cout << "\nNHAP LENGTH: ";
	is >> a.length;

	cout << "NHAP WIDTH: ";
	is >> a.width;

	cout << "NHAP PRICE: ";
	is >> a.price;

	return is;
}

ostream &operator<<(ostream &os, ThuaDat a){
	os << "\nLENGTH: " << a.length << endl;
	os << "WIDTH: " << a.width << endl;
	os << "PRICE: " << a.price << endl;
}

int main(){
	ThuaDat a, b;
	cout << "NHAP THONG TIN THUA DAT a: ";
	cin >> a;
	cout << "NHAP THONG TIN THUA DAT b: ";
	cin >> b;

	cout << "------------------------" << endl;
	cout << "THONG TIN THUA DAT a: ";
	cout << a;
	cout << "THONG TIN THUA DAT b: ";
	cout << b;

	cout << "------------------------" << endl;
	if(a == b){
		cout << "2 THUA a, b GIONG NHAU VE DIEN TICH VA GIA TIEN" << endl;
	}else {
		cout << "2 THUA a, b KHONG GIONG NHAU VE DIEN TICH VA GIA TIEN" << endl;
 	}
}


