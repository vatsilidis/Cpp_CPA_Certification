#include <iostream>

using namespace std;

class A { 
public:
	void Do(void) { cout << "A is doing something" << endl; }
};

class B { 
public:
	void Do(void) { cout << "B is doing something" << endl; }
};

class Compo {
public:
	A f1;
	B f2;
};

int main(void) {
	Compo  co;
	
	co.f1.Do();
	co.f2.Do();
	return 0;
}