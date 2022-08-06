#include <bits/stdc++.h>

using namespace std;

class teacher
{
private:
    char name[30];
    int age;
    char faculty[30]; // khoa
public:
	void inPut();
	void outPut();
};

void teacher::inPut(){
    cout << "Name: "; fflush(stdin); gets(name); 
// Hoac: cout << "Name: "; fflush(stdin); cin.getline(name, 30);
	cout << "Age: "; cin >> age;
	cout << "Faculty: "; fflush(stdin); gets(faculty);	
}
	
void teacher::outPut(){
    cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Faculty: " << faculty << endl;
}

class lopHoc {
private:
    char maLop[30];
    char tenLop[30];
    char phong[30];
    teacher x; // x la mot doi tuong
public:
	void inPut();
	void outPut();
};

void lopHoc::inPut(){
    cout << "Ma lop: "; fflush(stdin); gets(maLop);
    cout << "Ten lop: "; fflush(stdin); gets(tenLop);
    cout << "Phong: "; fflush(stdin); gets(phong);
    
    x.inPut();
}

void lopHoc::outPut(){
    cout << "Ma lop: " << maLop << endl;
	cout << "Ten lop: " << tenLop << endl;
	cout << "Phong: " << phong << endl;	
}

int main(){
    lopHoc k;
	k.inPut();
	k.outPut();	
}
	
	

	
