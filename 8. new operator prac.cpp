#include<iostream>
using namespace std;

int main(){
	int num, i;
	float *marks;
	cout << "Number of students whose marks are to be entered: " ;
	cin >> num;
	marks = new float[num];
	for(i = 0; i < num; i++){
		cout << "Enter marks of student " << i+1 << ": ";
		cin >> marks[i];
	}
	
	cout << "\nDisplaying student marks: \n";
	for(i = 0; i < num; i++){
		cout << "Student " << i+1 << " secured " << marks[i] << " marks!\n";
	}
	
	delete[] marks;
	return 0;
}
