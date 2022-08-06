#include <bits/stdc++.h>

using namespace std;

class Student {
private:
    int age;
	char name[30];
	char sex[30];
public:
	Student();
	Student(int a, const char* n, const char* s);
    void NHAP();
	void XUAT();	
	
	~Student();
};

Student::~Student()
{
	cout << "Da huy" << endl;
}

void Student::NHAP()
{
	cout << "Age: ";
	cin >> age;
	
	cout << "Name: ";
	fflush(stdin);
	gets(name);
	
	cout << "Sex: ";
	fflush(stdin);
	gets(sex);
}

void Student::XUAT()
{
	cout << "Age: " << age << endl;
	cout << "Name: " << name << endl;
	cout << "Sex: " << sex << endl;
}
	
	
// Phuong thuc khoi tao khong doi
Student::Student()
{
	age = 0;
//	name[0] = '\0';
//	sex[0] = '\0';
    strcpy(name, "Hacute");
	strcpy(sex, "Nu");
}

//Phuong thuc khoi tao co doi
Student::Student(int a, const char* n, const char* s)
{
    age = a;
	strcpy(name, n);
	strcpy(sex, s);
}
	
int main () {
	Student s1;
	Student s2 = Student(18, "Hacuteee", "Nu");
	s1.XUAT();
	s2.XUAT();
	
	return 0;
}
