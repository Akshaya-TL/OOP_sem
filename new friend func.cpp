#include <iostream> 
using namespace std;
class B; 
  
class A { 
public: 
    void showB(B&); 
}; 
  
class B { 
private: 
    int b; 
  
public: 
    B() { b = 0; } 
    friend void A::showB(B& x); // Friend function 
    static int a;
    static void funcs(){
    	a = 1;
	}
}; 
int B :: a = 10;
void A::showB(B& x) 
{ 
    // Since showB() is friend of B, it can 
    // access private members of B 
    std::cout << "B::b = " << x.b << endl; 
    x.a += 1;
} 
  
int main() 
{ 
    A a; 
    B x; 
    x.a += 1;
	a.showB(x);
    
   // x.funcs();
	cout << x.a;   // class name followed by scope resolution operator for static variables 
    return 0; 
}
