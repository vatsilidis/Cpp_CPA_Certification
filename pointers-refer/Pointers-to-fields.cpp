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
	int value;
};

int main(void) {
	Class *ptr;
	
	ptr = new Class;
	ptr -> value = 0;
	cout << ++(ptr -> value) << endl;
	delete ptr;
	return 0;
}
