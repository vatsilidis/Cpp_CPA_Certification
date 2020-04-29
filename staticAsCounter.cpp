#include <iostream>

using namespace std;

class Class {
public:
	static int Counter;
	Class(void) { ++Counter; };
	~Class(void) { --Counter; if(Counter == 0) cout << "Bye, bye!" << endl; };
	void HowMany(void) { cout << Counter << " instances" << endl; }
};

int Class::Counter = 0;

int main(void) {
	Class a;
	Class b;
	cout << Class::Counter << " instances so far" << endl;
	Class c;
	Class d;
	d.HowMany();
	return 0;
}