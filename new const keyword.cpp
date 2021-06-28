#include<iostream>
using namespace std;
 
class Point
{
private:
    int x, y;
    char s[8];
public:
    Point(int x1, int y1, char * a) { x = x1; y = y1, *s = *a; }
 
    // Copy constructor
  //  Point(const Point &p1) {x = p1.x; y = p1.y; }
 
    int getX()            {  return x; }
    int getY()            {  return y; }
    char* getst() {return s;	}
	void alter(){
    		s="akshaya";
	}
};
 
int main()
{
    Point p1(10, 15, "sanjeev"); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here
   cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();
  
    // Let us access values assigned by constructors
    p1.alter();
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << " " << p1.getst() << endl;
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY() << p2.getst() << endl;
 
    return 0;
}


/*include<iostream> 
	using namespace std; 
	  
	class Test { 
	
	    int value; 
	    int a;
	public: 
	    Test(int v) {value = v ;} 
	    
	    // We get compiler error if we add a line like "value = 100;" 
	    // in this function. 
	    void d(){value += 3;
	    
		}
	    int getValue() const {
		return this->value;}   
	}; 
	  
	int main() { 
	    Test t; 
	   //const Test a(13);
	  t.d();
	   // cout << a.getValue() << endl;
	    cout<<t.getValue(); 
	    return 0; 
	} 
	*/
