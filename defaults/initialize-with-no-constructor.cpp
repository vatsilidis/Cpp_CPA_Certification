#include <iostream>

using namespace std;

class NoConstructorsAtAll {
public:
	int i;
	float f;
	void Display(void) { cout << "i=" << i << ",f=" << f << endl; }
};

int main(void) {
	NoConstructorsAtAll  o1;
	NoConstructorsAtAll *o2;
	
	o2 = new NoConstructorsAtAll;
	o1.Display();
	o2 -> Display();
	return 0;
}