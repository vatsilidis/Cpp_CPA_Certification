#include <iostream>

using namespace std;

class Class {
	int *data;
public:
	Class(int value) {
		 data = new int;
		*data = value;
	}
	Class(Class &source) { 
		 data = new int;
		*data = source.value();
	}
	void increment(void) {	(*data)++; }
	int value(void) { return *data; }
};


int main(void) {
	Class o1(123);
	Class o2 = o1;
	Class o3(o2);
	
	o1.increment();
	cout << o1.value() << endl;
	cout << o2.value() << endl;
	cout << o3.value() << endl;

	return 0;
}