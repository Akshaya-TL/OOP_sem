#include<iostream> 
  
using namespace std; 
  
class base { 
  public: 
    base()      
    { cout<<"Constructing base \n"; } 
    ~base() 
    { cout<<"Destructing base \n"; }      
}; 
  
class derived: public base { 
  public: 
    derived()      
    { cout<<"Constructing derived \n"; } 
    ~derived() 
    { cout<<"Destructing derived \n"; } 
}; 
  
int main(void) 

{ 
int *a = new int[15];
  derived *d = new derived;   
  base *b = d; 
  delete b; 
  return 0; 
} 
