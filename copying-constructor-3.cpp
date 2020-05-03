#include <iostream>

using namespace std;

class Dummy {
public:
	Dummy(int value) {}
	Dummy(Dummy &source) { 
		cout << "Hi from the copy constructor!" << endl;
	}
};

void DoSomething(Dummy ob) {
	cout << "I'm here!" << endl;
}

int main(void) {
	Dummy o1(123);
	
	DoSomething(o1);
	return 0;
}