#include <iostream>

using namespace std;

class Class {
public:
	Class(void) {
		cout << "Object constructed!" << endl;
	}
	~Class(void) {
		cout << "Object destructed!" << endl;
	}
	void IncAndPrint(void) {
		cout << "value = " << ++value << endl;
	}
	int value;
};

int main(void) {
	Class *ptr;
	
	ptr = new Class;
	ptr -> value = 1;
	ptr -> IncAndPrint();
	delete ptr;
	return 0;
}
