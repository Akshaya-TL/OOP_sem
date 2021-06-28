#include<iostream> 
  
using namespace std; 
  
class base { 
  protected:
  	int a;
  
  public: 
  
  void set(){
  	a = 10;
  }
    virtual void show()      
    { cout<<"Constructing base \n";
	set(); } 
    ~base() 
    { cout<<"Destructing base \n"; }      
}; 
  
class derived: protected base { 
  public: 
    void show()      
    { cout<<"Constructing derived \n"; } 
    ~derived() 
    { cout<<"Destructing derived \n"; } 
}; 
 
class derived2: public derived { 
  public: 
    void show()      
    { cout<<"Constructing derived2 \n";
	cout << a; } 
    ~derived2() 
    { cout<<"Destructing derived2 \n"; } 
}; 
  
int main(void) 
{ 
  derived* d;
  derived2 d2;
  d = &d2;
  d->show();
  return 0; 
} 
