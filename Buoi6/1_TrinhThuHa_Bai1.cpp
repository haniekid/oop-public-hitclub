#include <bits/stdc++.h>

using namespace std;

class School {
	char nameSchool[30];
	char dateSchool[30];
public:
	
	friend class Faculty;
	friend class Student;
	
};

class Faculty {
private:
	char nameFaculty[30];
	char dateFaculty[30];
	
	School x;
public:
	void nhap();
	void xuat();
	
	friend class Student;	
};

void Faculty::nhap() {
	cout << "NHAP TEN TRUONG: "; 
	fflush(stdin); 
	gets(x.nameSchool);
	
	cout << "NHAP NGAY THANH LAP TRUONG: "; 
	fflush(stdin); 
	gets(x.dateSchool);

	cout << "NHAP TEN KHOA: ";
	fflush(stdin); 
	gets(nameFaculty);
	
	cout << "NHAP NGAY THANH LAP KHOA: "; 
	fflush(stdin); 
	gets(dateFaculty);	
	
}

void Faculty::xuat() {
	cout << "SCHOOL-NAME: " << x.nameSchool << endl;
	cout << "SCHOOL-DATE: " << x.dateSchool << endl;
	
	cout << "FACULTY-NAME: " << nameFaculty << endl;
	cout << "FACULTY-DATE: " << dateFaculty << endl;

}

class Person {
protected:
	char namePerson[30], birth[30], address[30];
public:
	void nhap();
	void xuat();
	
	Person();	
};

void Person::nhap() {
	cout << "NHAP TEN NGUOI: ";
	fflush(stdin); 
	gets(namePerson);
	
	cout << "NHAP NGAY SINH NGUOI: ";
	fflush(stdin); 
	gets(birth);
	
	cout << "NHAP DIA CHI NGUOI: ";
	fflush(stdin); 
	gets(address);
	
}

void Person::xuat() {
	cout << "PERSON-NAME: " << namePerson << endl;
	cout << "PERSON-BIRTH: " << birth << endl;
	cout << "PERSON-ADDRESS: " << address << endl;
}

Person::Person() {
	strcpy(this->namePerson, "\0");
	strcpy(this->birth, "\0");
	strcpy(this->address, "\0");
}

class Student : public Person {
	Faculty y;
	char classStudent[30];
	float score;
public:
	void nhap();
	void xuat();
	
	Student();	
};

void Student::nhap() {
	Person::nhap();
	
	y.nhap();
	
	cout << "NHAP LOP CUA SV: ";
	fflush(stdin); 
	gets(classStudent);
	
	cout << "NHAP DIEM CUA SV: ";
	cin >> score;
}

void Student::xuat(){
	Person::xuat();
	
	y.xuat();
	
	cout << "STUDENT-CLASS: " << classStudent << endl;
	cout << "STUDENT-SCORE: " << score << endl;
}

Student::Student()  {
	strcpy(y.nameFaculty, "");
	strcpy(y.dateFaculty, "");
	strcpy(y.x.nameSchool, "");
	strcpy(y.x.dateSchool, "");
	strcpy(this->classStudent, "");
	this->score = 0;
	strcpy(namePerson, "");
	strcpy(birth, "");
	strcpy(address, "");
}

int main() {
	Student a;
	a.nhap();
	cout << "-------------------------------" << endl;
	a.xuat();	
}
