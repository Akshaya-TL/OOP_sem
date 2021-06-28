#include<iostream>
using namespace std;

typedef struct Student{
	string name;
	string rollNum;
	string grade;
	
	void getInfo(){
	cout << "Enter student name: ";
	cin >> ws;
	getline(cin, name);
	cout << "Enter student roll number: ";
	cin >> rollNum;
	cout << "Enter student grade: ";
	cin >> grade;
	cout << endl;
	}

	void display(){
	cout << name << "(" << rollNum << ") " << "has secured grade " << grade << endl;
	}
	
}STUDENT;


int main(){
	STUDENT s2[3];
	int i;
	cout << "Reading contents: \n" << endl;
	for(i = 0; i < 3; i++){
		s2[i].getInfo();
	}
	
	cout << "Displaying contents: \n" << endl;
	for(i = 0; i < 3; i++){
		s2[i].display();
	}
	return 0;
}
