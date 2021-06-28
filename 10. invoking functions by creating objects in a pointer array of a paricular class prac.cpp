#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		static int count;
	public:
		void setName();
		void getName();
};

int Student :: count = 1;

void Student :: setName(){
	cout << "Enter student name: ";
	cin >> ws;
	getline(cin, name);
} 

void Student :: getName(){
	cout << "Student " << count << " name is " << name << endl;
	count++;
}

int main(){
	int num, i;
	cout << "Enter number of students: ";
	cin >> num;
	Student *studentPtrArr[num];
	cout << "Obtaining details from user: " << endl;
	for(i = 0; i < num; i++){
		studentPtrArr[i] = new Student;
		studentPtrArr[i]->setName();
	}
	cout << endl;
	cout << "==============================================\n";
	cout << "Displaying names of students: \n\n";
	for(i = 0; i < num; i++){
		studentPtrArr[i]->getName();
	}
	
	
	return 0;
}
