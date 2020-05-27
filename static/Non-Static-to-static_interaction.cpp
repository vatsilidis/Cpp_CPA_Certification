#include <iostream>

using namespace std;

class Test {
public:
	static void funS1(void) { cout << "static" << endl; }
	void funN1(void) { funS1(); }
};

int main(void) {
	Test object;
	// Test::funN1(); <- not allowable here - why?
	object.funN1();
	return 0;
}