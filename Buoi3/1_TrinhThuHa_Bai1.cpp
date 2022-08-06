#include <bits/stdc++.h>

using namespace std;

class SCHOOL 
{
	char nameSchool[30];
	char dateSchool[30];
	
	friend class FACULTY;
};

class FACULTY 
{
	char name[30];
	char date[30];
	SCHOOL x;
	
public:
	void inPut();
	void outPut();
};

void FACULTY::inPut()
{
	cout << "NAME FACULTY? ";
	fflush(stdin);
	gets(name);
	
	cout << "DATE FACULTY? ";
	fflush(stdin);
	gets(date);
	
	cout << "NAME SCHOOL? ";
	fflush(stdin);
	gets(x.nameSchool);
	
	cout << "DATE SCHOOL? ";
	fflush(stdin);
	gets(x.dateSchool);
}

void FACULTY::outPut()
{
	cout << "NAME FACULTY: " << name << endl;
	cout << "DATE FACULTY: " << date << endl;
	cout << "NAME SCHOOL: " << x.nameSchool << endl;
	cout << "DATE SCHOOL: " << x.dateSchool << endl;
}

class STUDENT 
{
	char classSV[30];
	float score;
	FACULTY y;
public:
	void inPut();
	void outPut();
	
	STUDENT();
};

STUDENT::STUDENT()
{
    classSV[0] = '\0';
	score = 0;
}
	
void STUDENT::inPut()
{
	cout << "CLASS? ";
	fflush(stdin);
	gets(classSV);
	
	cout << "SCORE? ";
	cin >> score;
	
	y.inPut();
}

void STUDENT::outPut()
{
	cout << "CLASS: " << classSV << endl;
	cout << "SCORE: " << score << endl;
	
	y.outPut();
}

int main() 
{   
	STUDENT A;
	
	int n;
	cout << "NHAP SO SINH VIEN: ";
	cin >> n;
	
	STUDENT *z;
	z = new STUDENT[n];
	
	for(int i = 0; i < n; i++){
		cout << "NHAP THONG TIN SV THU " << i + 1 << endl;
			z[i].inPut();
	}
	
	for(int i = 0; i < n; i++){
		cout << "=========================" << endl;
		cout << "THONG TIN SV THU " << i + 1 << endl;
		z[i].outPut();
	}
}
	
	
	
	


	
