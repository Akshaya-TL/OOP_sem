#include<iostream>
using namespace std;

class Teacher{
	public:
		virtual void work(){
			cout << "Inside Teacher class.\n";
			cout << "I teach students!\n";
		}
};

class Student : public Teacher{
	public:
		void work(){
			cout << "Inside Student class.\n";
			cout << "I learn new things!\n";
		}
};

int main(){
	Student s1;
	Teacher *t1 = &s1;
	t1->work();
	return 0;
}
