#include <iostream>

using namespace std;

class Test {
public:
	void funN1(void) { cout << "non-static" << endl; }
	static void funS1(void) { funN1(); }
};

int main(void) {
	Test object;
	Test::funS1();
	object.funS1();
	return 0;
}