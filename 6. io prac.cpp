/* #include <limits>
// for numeric_limits
this ^^ also probably works but is banned

void ignore_all(std::istream& is, char delim = '\n')
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), delim);
}

// later in code
ignore_all(std::cin);

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
*/

#include<iostream>
#include<iomanip.>
#include<limits>
#include<ios>

using namespace std;
class ConsoleIO{
	private:
		char ch;
		char pwd[30];
		
	public:
		void get_func(){
			ch = cin.get();
		}
		
		void put_func(){
			cout << "Character in ch is ";
			cout.put(ch) << endl;
		}
		
		void getline_func(){
			cout << "Enter password(limit length to 10): ";
			cin >> ws;
			cin.getline(pwd, 11);
		}
		
		void write_func(){
			cout << "Your password is: ";
			cout.write(pwd, 10) << endl;
		}
		
		void setw_func(){
			cout << "set width demo with width 15: \n";
			cout << setw(15) << 10 << endl;
		}
		
		void setfill_func(){
			cout << "Set fill demo: \n";
			cout << setw(10) << setfill('*') << 10 << endl;
		}
		
		void setprecision_func(){
			cout << "Set precision demo: \n";
			cout << setprecision(5) << 11.323224 << endl;
		}
};


int main(){
	ConsoleIO test;
	test.get_func();
	test.put_func();
	test.getline_func();
	test.write_func();
	test.setw_func();
	test.setfill_func();
	test.setprecision_func();
	return 0;
}
