#include <bits/stdc++.h>

using namespace std;

int ID () 
{  
    static int a = 0;
    return ++a;
}

class Student {
private:
    int id;
	char ten[30];
public:
    void NHAP();	
    void XUAT();
};

void Student::NHAP() {
	id = ID();
	cout << "Nhap ten: ";
	fflush(stdin);
	

int main() {
   	Student *a = new Student[];
   	
}

// chua kip code xong 
