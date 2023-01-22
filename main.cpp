#include <iostream>

class Base {
	public:
		int a;
		float b;
		double c;
		
		void fun1 (int x) {
			a = x;
		}	
		
		float fun1 (float y, float z) {
			b = y + z;
			cout << "The value of b is " << b << endl;
			return b;
		}
		
		double fun1 (float y) {
			c = y * y;
			cout << "The value of c is " << c << endl;
			return c;
		}
};
int main() {
	return 0;
}
