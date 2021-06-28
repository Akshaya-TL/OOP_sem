#include<iostream>
using namespace std;
//class arithmetic;
class B;
class arithmetic{
	public:
	int sum(B x);
};
class B{
	private:
		int a, b;
	public:
		void set(){
			a = 3;
			b = 4;
		}
		friend int arithmetic :: sum(B x);
};

int arithmetic :: sum(B x){
	return x.a + x.b;
}


int main(){
	arithmetic a;
	B s;
	s.set();
	cout << a.sum(s);
	return 0;
}
