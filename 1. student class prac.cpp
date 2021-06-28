#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		string rollNum;
		string grade;
		static int count;
	public:
		void getInfo(){
			cout << "Student " << count << "\n";
			cout << "Enter student name: ";
			cin >> ws;
			getline(cin, name);
			cout << "Enter roll number: ";
			cin >> rollNum;
			cout << "Enter grade: ";
			cin >> grade;
			count++;
		}
		
		void display(){
			cout << name << " (" << rollNum << ") has secured grade " << grade << endl << endl;
		}
};

int Student :: count = 1;

int main(){
	Student s1[3];
	int i;
	
	cout << "Reading contents of array\n" << endl;
	for(i = 0; i < 3; i++){
		s1[i].getInfo();
		cout << endl;
	}
	
	cout << "Displaying contents of array\n" << endl;
	for(i = 0; i < 3; i++){
		s1[i].display();
	}
	return 0;
}
