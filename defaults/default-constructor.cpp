#include <iostream>

using namespace std;

class WithConstructor {
public:
	int i;
	float f;
	WithConstructor(int a = 0, float b = 0) : i(a), f(b) { }
	void Display(void) { cout << "i=" << i << ",f=" << f << endl; }
};

int main(void) {
	WithConstructor  o1;
	WithConstructor *o2;

	o2 = new WithConstructor;
	o1.Display();
	o2 -> Display();

	return 0;
}
