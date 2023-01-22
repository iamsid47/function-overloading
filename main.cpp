#include <iostream>
using namespace std;

class Base {
	public:
		int a;
		float b;
		double c;
		
		void fun1 (int x) {
			a = x;
			cout << "The value of x is " << a << endl;
		}	
		
		float fun1 (float y, float z) {
			b = y + z;
			cout << "The value of b is " << b << endl;
			return b;
		}
		
};
int main() {
	Base obj;
	Base *ptr = &obj;
	ptr -> fun1 (20);
	ptr -> fun1 (10.594, 23.653);
	return 0;
}
