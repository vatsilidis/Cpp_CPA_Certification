#include <iostream>
using namespace std;
class Class {
public:
	Class(int val) { 
		value = new int[val]; 
		cout << "Allocation (" << val << ") done." << endl; 
	}
	~Class(void) {
		delete [] value;
		cout << "Deletion done." << endl;
	}
	int *value;
};
void MakeALeak(void) {
	Class object(1000);
}
int main(void) {
	MakeALeak();
	return 0;
}	
