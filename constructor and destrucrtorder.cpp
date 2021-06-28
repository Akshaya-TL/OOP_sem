#include<iostream>
using namespace std;

class name{
	private:
		int num;
		int hi;
	public:
		int setName(){
			cin >> num;
			cout << "the num is " << num << endl;
		}
		
		int hekllo(){
		int a = 31;
		
		{int a = 100;
		cout << a << endl; 
		}
		cout  << a << endl;
		this->setName();
		cout << "adress is: " << this << endl;	
		return 0;
		}
};

void hellkl(){
int a;	
}

int main(){
	name s1, *s2;
	s2 = &s1;
	s2->hekllo();
	cout << "size of class object is: "  << sizeof(s1) << endl;
	return 0;
}
