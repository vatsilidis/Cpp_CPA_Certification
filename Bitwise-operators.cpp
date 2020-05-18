#include <iostream>

using namespace std;

class V {
public:
	int vec[2];
	V(int a0, int a1) { vec[0]=a0; vec[1]=a1; }
	V operator>>(int arg) {
		V res(vec[0],vec[1]);
		for(int i = 0; i < 2; i++)
			res.vec[i] >>= arg;
		return res;
	}
};

float operator~(V &arg) {
	int res = 1.0;
	for(int i = 0; i < 2; i++)
		res *= arg.vec[i];
	return res;
}

int main(void) {
	V v(15, 7);
	v = v >> 1;
	cout << "(" << v.vec[0] << ", " << v.vec[1] << ")" << endl;
	cout << ~v << endl;
	return 0;
}
