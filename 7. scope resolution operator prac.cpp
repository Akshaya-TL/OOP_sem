#include<iostream>
using namespace std;

int x = 100;

namespace n1{
	int x = 200;
}

namespace n2{
	int x = 300;
}

int main(){
	int x = 400;
	cout << "Value of x in namespace n1: " << n1::x << endl;
	cout << "Value of x in namespace n2: " << n2::x << endl;
	cout << "Value of x in main (local variable): " << x << endl;
	cout << "Value of x in global space: " << :: x << endl;
	return 0;
}
