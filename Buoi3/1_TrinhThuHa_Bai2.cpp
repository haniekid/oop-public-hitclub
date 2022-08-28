#include <bits/stdc++.h>

using namespace std;

class ARRAY 
{
	int n;
	int *VALUE;
public:
	ARRAY();
	ARRAY(int a);
	~ARRAY();
	void NHAP();
	void XUAT();	
};

ARRAY::~ARRAY()
{
	n = 0;
	VALUE = NULL;
// Hoac: delete[] VALUAE;
//	cout << " Da huy: ";
}

ARRAY::ARRAY()
{
	n = 0;	
}

ARRAY::ARRAY(int a)
{
	n = a;
	VALUE = new int[n];
	cout << "Mang vua khoi tao: ";
	for(int i = 0; i < n; i++){
		VALUE[i] = 0;
	}
}	

void ARRAY::NHAP()
{	
	cout << "ENTER TOTAL NUMBER OF ELEMENTS: ";
	cin >> n;
	
	cout << "INPUT AN ARRAY: \n";
	
	VALUE = new int[n];
	for(int i = 0; i < n; i++){
		cout << "VALUE[" << i << "] = ";
		cin >> VALUE[i];		
	}
}

void ARRAY::XUAT()	
{
	for(int i = 0; i < n; i++){
		cout << VALUE[i] << " ";	
	}	
	cout << "\n";
}

int main() {
	ARRAY A = ARRAY();
	A.XUAT();
	ARRAY B = ARRAY(3); // ARRAY B(3);
	B.XUAT();
	ARRAY a;
	a.NHAP();
	cout << "ARRAY: ";
	a.XUAT();
	
	return 0;	
}
