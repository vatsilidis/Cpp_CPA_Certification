#include <iostream>

using namespace std;

class V {
public:
	int vec[2];
	V(int a0, int a1) { vec[0]=a0; vec[1]=a1; }
	V operator++(int none) {
		for(int i = 0; i < 2; i++)
			++vec[i];
		V v(vec[0],vec[1]);
		return v;
	}
};

int main(void) {
	V v1(2, 3);
	v1++;
	cout << "(" << v1.vec[0] << ", " << v1.vec[1] << ")" << endl;
	return 0;
}
