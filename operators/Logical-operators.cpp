#include <iostream>
#include <cmath>

using namespace std;

class V {
public:
	int vec[2];
	V(int a0, int a1) { vec[0]=a0; vec[1]=a1; }
	bool operator&&(V &arg) {
		return abs(vec[0]) + abs(vec[1]) > 0 && 
		       abs(arg.vec[0]) + abs(arg.vec[1]) > 0;
	}
};

bool operator!(V &v) {
	return v.vec[0] * v.vec[1] != 0;
}

int main(void) {
	V v1(4, 8), v2(3, 7);
	cout << (v1 && v2 ? "true" : "false") << endl;
	cout << (!v1 ? "true" : "false") << endl;
	return 0;
}
