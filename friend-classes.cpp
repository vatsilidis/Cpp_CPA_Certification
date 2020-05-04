#include <iostream>

using namespace std;

class Class {
friend class Friend;
private:
	int field;
	void print(void) { cout << "It's a secret that field = " << field << endl; }
};

class Friend {
public:
	void DoIt(Class &c) { c.field = 100; c.print(); }
};

int main(void) {
	Class o;
	Friend f;
	
	f.DoIt(o);
	return 0;
}
