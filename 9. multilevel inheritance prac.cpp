#include<iostream>
using namespace std;

class parentClass{
	public:
		parentClass(){
			cout << "Inside parent class constructor!\n";
		}
};

class Derived1 : public parentClass{
	public:
		Derived1(){
			cout << "Inside derived class 1 constructor!\n";
		}
};

class Derived2 : public Derived1{
	public:
		Derived2(){
			cout << "Inside derived class 2 constructor!\n";
		}
};

int main(){
	Derived2 d2;
	return 0;
}
