#include <iostream>

using namespace std;

class Class {
	static int Counter;
public:
	Class(void) { 
		++Counter; 
	};
	~Class(void) { 
		--Counter; 
		if(Counter == 0) 
			cout << "Bye, bye!" << endl; 
	};
	void HowMany(void) { cout << Counter << " instances" << endl; }
};

int Class::Counter = 0;

int main(void) {
	Class a;
	Class b;
	b.HowMany();
	Class c;
	Class d;
	d.HowMany();
	return 0;
}