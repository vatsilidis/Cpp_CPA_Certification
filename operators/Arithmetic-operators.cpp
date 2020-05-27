#include <iostream>

using namespace std;

class V {
public:
	float vec[2];
	V(float a0, float a1) { vec[0]=a0; vec[1]=a1; }
	V operator+(V &arg) {
		V res(0.0f,0.0f);
		for(int i = 0; i < 2; i++)
			res.vec[i] = vec[i] + arg.vec[i];
		return res;
	}
};

float operator*(V &left, V &right) {
	float res = 0.0;
	for(int i = 0; i < 2; i++)
		res += left.vec[i] * right.vec[i];
	return res;
}

int main(void) {
	V v1(0.0f, 1.0f), v2(1.0f, 0.0f), v3(0.0f, 0.0f);
	float x;
	v3 = v1 + v2;
	x = v1 * v2;
	x = v1 * v2 * v3;
	cout << "(" << v3.vec[0] << ", " << v3.vec[1] << ")" << endl;
	cout << x << endl;
	return 0;
}
