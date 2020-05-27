#include <iostream>

using namespace std;

class V {
public:
	int vec[2];
	V(int a0, int a1) { vec[0]=a0; vec[1]=a1; }
	V(void) { vec[0]=vec[1]=0; }
	V& operator=(V &arg) {
		for(int i = 0; i < 2; i++)
			vec[i] = arg.vec[1 - i];
		return *this;
	}
};

int main(void) {
	V v1(4, 8), v2;
	v2 = v1;
	cout << "(" << v2.vec[0] << ", " << v2.vec[1] << ")" << endl;
	return 0;
}
