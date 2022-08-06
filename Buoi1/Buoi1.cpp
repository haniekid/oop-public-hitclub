#include<iostream>

using namespace std;

class SACH{
private:
	char tenSach[30];
	int soTrang;
	char tacGia[30];
public:
	void nhap();
	void xuat();
};

void SACH::nhap(){
	cout << "Nhap ten sach: "; fflush(stdin); gets(tenSach);
	cout << "Nhap so trang: "; cin >> soTrang;
	cout << "Nhap ten tac gia: "; fflush(stdin); gets(tacGia);
}

void SACH::xuat(){
    cout << "Ten sach: " << tenSach <<endl;
	cout << "So trang: " << soTrang <<endl;
	cout << "Ten tac gia: " << tacGia <<endl;	
}
int main(){
	SACH a;
	a.nhap();
	a.xuat();
}


