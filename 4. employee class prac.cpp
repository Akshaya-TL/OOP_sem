// 52% of basic is da
// 30% of (basic + da) is income tax

#include<iostream>
using namespace std;

class Employee{
	private:
		int EmpID;
		string EmpName;
		float empBasic;
		float empDA;
		float IT;
		float EmpNetSal;
	public:
		void getDetails();
		void ComputeSal();
		void Show();
};

void Employee :: getDetails(){
	cout << "Enter employee ID: ";
	cin >> EmpID;
	cout << "Enter employee name: ";
	cin >> ws;
	getline(cin, EmpName);
	cout << "Enter employee basic salary: ";
	cin >> empBasic;
	cout << endl;
}

void Employee :: ComputeSal(){
	empDA = empBasic*0.52;
	IT = (empBasic + empDA)*0.30;
	EmpNetSal = empBasic + empDA - IT;
}

void Employee :: Show(){
	cout << "Employee ID                 : " << EmpID << endl;
	cout << "Employee name               : " << EmpName << endl;
	cout << "Employee Basic              : " << empBasic << endl;
	cout << "Employee Dearness Allowance : " << empDA << endl;
	cout << "Employee income tax         : " << IT << endl;
	cout << "Employee net salary         : " << EmpNetSal << endl << endl;	
}
int main(){
	Employee emp[3];
	int i;
	cout << "Getting employee details: " << endl;
	for(i = 0; i < 3; i++){
		emp[i].getDetails();
		emp[i].ComputeSal();
	}
	
	cout << "\nDisplaying data in data members : " << endl;
	for(i = 0; i < 3; i++){
		emp[i].Show();
	}
	return 0;
}
