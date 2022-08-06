// Giai phuong trinh bac 2

#include <bits/stdc++.h>

using namespace std;

class PT2 {
private:
	float a;
	float b;
	float c;
public:
	double getDelta();
	void inPut();
    void outPut();
};

double PT2::getDelta(){
    return b*b-4*a*c;	
}

void PT2::inPut(){
	
    do{
    	cout << "a = ";
    	cin >> a;
	}while(a == 0);
	
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
}

void PT2::outPut(){
	double Delta = getDelta();
	
    if(Delta > 0)
	{
	    cout << "PT co 2 nghiem phan biet: " << endl;
		cout << "x1 = " << (-b-(sqrt(Delta)))/2*a << endl;
		cout << " x2 = " << (-b+(sqrt(Delta)))/2*a << endl;
	} else if(Delta == 0)
	{
	    cout << "PT co nghiem kep: " << "x1 = x2 = " << -b/2*a << endl;
	}else
	{
		cout << "PT vo nghiem!" << endl;
	}
			
}

int main() {
    PT2 a;
	a.inPut();
	a.outPut();	 			
}
	

