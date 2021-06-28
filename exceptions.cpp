#include <iostream>
using namespace std;
 
// Here we specify the exceptions that this function 
// throws.
void fun(int *ptr, int x) throw (int *, int) // Dynamic Exception specification
{
    if (ptr == NULL)
        throw "hello";
    if (x == 0)
        throw x;
    /* Some functionality */
}
 
int main()
{
    try {
       fun(NULL, 0);
    }
    catch(const char* s){
    	cout << "pointer type int caught" << s << endl;
	}
	catch(int){
		cout << "int caught" << endl;
	}
    catch(...) {
        cout << "Caught exception from fun()";
    }
    return 0;
}
