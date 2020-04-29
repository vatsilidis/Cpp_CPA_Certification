#include <iostream>

using namespace std;

class Class {
public:
	static int Static;
	int NonStatic;
	void print(void) {
		cout << "Static = " << ++Static << 
		        ", NonStatic = " << NonStatic << endl;
	}
};

int Class::Static = 0;

int main(void) {
	Class instance1, instance2;

	instance1.NonStatic = 10;
	instance2.NonStatic = 20;
	instance1.print();
	instance2.print();
	return 0;
}
