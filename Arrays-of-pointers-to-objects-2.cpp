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
	Array *arr[2] = { new Array(2), new Array(2) };
	
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			arr[i]->Put(j, j + 10 + i);
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++)
			cout << "#" << i + 1 << ":" << arr[i]->Get(j) << "; ";
		cout << endl;
	}
	delete arr[0];	delete arr[1];
	return 0;
}
