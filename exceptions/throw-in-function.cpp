#include <iostream>

using namespace std;

class Class {
public:
	Class(void)  { cout << "Object constructed" << endl; }
	~Class(void) { cout << "Object destructed" << endl; }
	void Hello(void) { cout << "Object says: hello" << endl; }
};

void DoCalculations(int i) {
	if(i == 0) 
		throw string("fatal 1");
	Class object;
	if(i == 1)
		throw string("fatal 2");
	object.Hello();
	if(i == 2)
		throw string("fatal 3");
}

int main(void) {
    for(int i = 0; i < 3; i++) {
	try {
	   cout << "-------" << endl;	
	   DoCalculations(i);
	} catch (string &exc) {
	   cout << exc << endl;
	}
    }	
    return 0;
}