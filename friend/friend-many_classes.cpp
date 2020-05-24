#include <iostream>

using namespace std;

class A {
friend class B;
friend class C;
private:
	int field;
protected:
	void print(void) { cout << "It's a secret that field = " << field << endl; }
};

class C {
public:
	void DoIt(A &a) { a.print(); }
};

class B {
public:
	void DoIt(A &a, C &c) { a.field = 111; c.DoIt(a); }
};


int main(void) {
	A a; B b; C c;
	
	b.DoIt(a,c);
	return 0;
}
