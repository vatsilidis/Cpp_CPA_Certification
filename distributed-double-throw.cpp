#include <iostream>

using namespace std;

class Class {
public:
	string msg;
	Class(string txt) : msg(txt) {}
};

void function(int i) throw (string,Class) {
    switch(i) {
	case 0 : throw string("string");
	case 1 : throw Class("object");
	default: cout << "OK" << endl;
    }
}

void level(int i) throw(Class) {
    try {
	function(i);
    } catch(string &exc) {
	cout << "String [" << exc << "] caught in level()" << endl;
    }    
}

int main(void) {
    for(int i = 0; i < 2; i++) {
        cout << "-------" << endl;
	try {
	    level(i);
	} catch(Class &exc) {
	    cout << "Object [" << exc.msg << "] caught in main()" << endl;
	}
    }
    return 0;
}