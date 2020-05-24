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
};

int main(void) {
	Class *ptr;
	
	ptr = new Class();
	delete ptr;
	return 0;
}
