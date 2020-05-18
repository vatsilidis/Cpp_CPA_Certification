#include <iostream>

using namespace std;

class V {
public:
	int vec[2];
	V(int a0, int a1) { vec[0]=a0; vec[1]=a1; }
	V& operator+=(V &arg) {
		for(int i = 0; i < 2; i++)
			vec[i] += arg.vec[i];
		return *this;
	}
};

V& operator+(V &left, V &right) {
	V *res = new V(0, 0);
	for(int i = 0; i < 2; i++)
		res->vec[i] = left.vec[i] + right.vec[i];
	return *res;
}

int main(void) {
	V v1(0, 0), v2(1, 2), v3(3, 4);
	v1 = v2 + v3;
	v1 += v1;
	cout << "(" << v1.vec[0] << ", " << v1.vec[1] << ")" << endl;
	return 0;
}
