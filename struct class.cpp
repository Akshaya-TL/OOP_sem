#include<iostream>
using namespace std;

class dummy{
	
	public:
	dummy(){
		cout << "inside constuctor dummy\n";
	}
	
	~dummy(){
		cout << "exiting dummy\n";
	}
};

class funny{
	
	public:
	funny(){
		cout << "inside constuctor funny\n";
	}
	
	~funny(){
		cout << "exiting funny\n";
	}
};

int main(){
	dummy sq;
	funny ss;
	return 0;
}
