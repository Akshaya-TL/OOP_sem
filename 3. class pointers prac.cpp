#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		string branchSec;
		int rollNum;
		// constructor initialization
		Student(){
			name = "Akshaya TL";
			branchSec = "CSE A";
			rollNum = 531;
		}
};

int main(){
	Student s3;
	Student *sptr = &s3;
	cout << sptr->name << "(" << sptr->rollNum << ") " << "is from " << sptr->branchSec << endl;
	return 0;
}
