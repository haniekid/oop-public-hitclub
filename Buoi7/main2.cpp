#include <bits/stdc++.h>
// Nap chong toan tu
using namespace std;

class MyClass {
private:
	int age;
public:
	MyClass() {
	}
	//	gán age = a
	MyClass(int a) : age(a) { 
	}
	
	MyClass operator+(MyClass &obj){
		MyClass sumAge;
		sumAge.age = this->age + obj.age;
		return sumAge;
	}
};

int main(){
	MyClass obj1(12), obj2(13);
	MyClass sumAge = obj1 + obj2;
	
	cout << sumAge.age;
	
}




