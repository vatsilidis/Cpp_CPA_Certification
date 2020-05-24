#include <iostream>

using namespace std;

class Class {
public:
	string msg;
	Class(string txt) : msg(txt)  { cout << "Object [" << msg << "] constructed" << endl; }
	~Class(void) { cout << "Object [" << msg << "] destructed" << endl; }
	void Hello(void) { cout << "Object [" << msg << "] says: hello" << endl; }
};

void DoCalculations(int i) {
	if(i == 0) 
		throw Class("exception 1");
	Class object("object");
	if(i == 1)
		throw Class("exception 2");
	object.Hello();
	if(i == 2)
		throw Class("exception 3");
}

int main(void) {
    for(int i = 0; i < 3; i++) {
	try {
	   cout << "-------" << endl;
	   DoCalculations(i);
	} catch (Class &exc) {
	   cout << "Caught!" << endl;
	   cout << exc.msg << endl;
	}
    }	
    return 0;
}