#include <bits/stdc++.h>

using namespace std;

class HCN {
private:
	double length;
    double width;
public:
	void inPut();
	void outPut();
	double getArea();
	double getPerimeter();
}; 

void HCN::inPut(){
    cout << "Length: "; cin >> length;
	cout << "Width: "; cin >> width;	
}

void HCN::outPut(){
    cout << "Length: " << length;
	cout << "\nWidth: " << width;	
	cout << "\nArea: " << getArea();
	cout << "\nPerimeter: " << getPerimeter();
}
	
double HCN::getArea() {
    return length*width;	
}
double HCN::getPerimeter(){
    return (length+width)*2;	
}

int main() {
    HCN *a;
    //a.inPut();
    //a.outPut();	   
    int n;
    cout << "\nNhap so HCN:";
    cin >> n;
    a = new HCN[n];
    for(int i = 0; i < n; i++){
       // HCN b;
		a[i].inPut();
		cout <<"\n";
	}
	
	 for(int i = 0; i < n; i++){
       // HCN b;
		a[i].outPut();
		cout <<"\n";
	}
}
