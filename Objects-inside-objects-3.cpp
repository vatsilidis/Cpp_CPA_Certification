#include <iostream>

using namespace std;

class Element {
	int value;
public:
	Element(int val) { value = val; cout << "Element(" << val << ") constructed!" << endl; }
	int Get(void) { return value; }
	void Put(int val) { value = val; }
};

class Collection {
	Element el1, el2;
public:	
	Collection(void) { cout << "Collection constructed!" << endl; }
	int Get(int elno) { return elno == 1 ? el1.Get() : el2.Get(); }
	int Put(int elno, int val) { if(elno == 1) el1.Put(val); else el2.Put(val); }
};

int main(void) {
	Collection coll;
	return 0;
}
