#include <iostream>

using namespace std;

class Class {
public:
	string msg;
	Class(string txt) : msg(txt) {}
};

void function(void) throw () {
	throw string("object");
}

void lastchance(void) {
	cout << "See what you've done! You've thrown an illegal exception!" << endl;
}

int main(void) {
    set_unexpected(lastchance);
    try {
	function();
    } catch(string &exc) {
	cout << "Caught!" << endl;
    }
    return 0;
}