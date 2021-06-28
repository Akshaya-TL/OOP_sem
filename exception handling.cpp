#include<iostream>
using namespace std;

int main(){
	try{
		int a, b;
		cin >> a >> b;
		if(b == 0)
			throw 0;
		else
		cout << "the resukt is " << a/b;
	}
	catch(...){
		cout << "dont give 0\n";
	}
	cout << "hello exception !";
	return 0;
}
