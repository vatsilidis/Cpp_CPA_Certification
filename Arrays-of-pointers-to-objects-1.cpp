#include <iostream>

using namespace std;

class Array {
	int *values;
	int  size;
public:
	Array(int siz) { 
		size = siz; values = new int[size];
		cout << "Array of " << size << " ints constructed." << endl; 
	}
	~Array(void) { 
		delete [] values; 
		cout << "Array of " << size << " ints destructed." << endl; 
	
	}
	int Get(int ix) { return values[ix]; }
	void Put(int ix, int val) { values[ix] = val; }
};

int main(void) {
	Array *arr = new Array(2);
	
	for(int i = 0; i < 2; i++)
		arr->Put(i, i + 100);
	for(int i = 0; i < 2; i++)
		cout << "#" << i + 1 << ":" << arr->Get(i) << endl;
	delete arr;
	return 0;
}
