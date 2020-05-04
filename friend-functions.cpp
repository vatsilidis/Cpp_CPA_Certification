#include <iostream>

using namespace std;

class A;

class C {
public:
	void dec(A &a);
};

class A {
friend class B;
friend void C::dec(A&);
friend void DoIt(A&);
private:
	int field;
protected:
	void print(void) { cout << "It's a secret that field = " << field << endl; }
};

void C::dec(A &a) { a.field--; }

class B {
public:
	void DoIt(A &a) { a.print(); }
};

void DoIt(A &a) {
	a.field = 99;
}

int main(void) {
	A a; B b; C c;
	
	DoIt(a);
	b.DoIt(a);
	return 0;
}
