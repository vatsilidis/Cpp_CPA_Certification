#include <iostream>

using namespace std;

class Class {
public:
	Class(void) { cout << "Object constructed (#1)" << endl; }
	Class(int v) { value = v; cout << "Object constructed (#2)" << endl; }
	~Class(void) { cout << "Object destructed! val = " << value << endl; }
	void IncAndPrint(void) {
		cout << "value = " << ++value << endl;
	}
	int value;
};

int main(void) {
	Class *ptr1, *ptr2;
	
	ptr1 = new Class;
	ptr2 = new Class(2);
	ptr1 -> value = 1;
	ptr1 -> IncAndPrint();
	ptr2 -> IncAndPrint();
	delete ptr2;

	return 0;
}
