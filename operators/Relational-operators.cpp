#include <iostream>

using namespace std;

class V {
public:
	int vec[2];
	V(int a0, int a1) { vec[0]=a0; vec[1]=a1; }
	bool operator==(V &arg) {
		for(int i = 0; i < 2; i++)
			if(vec[i] != arg.vec[i])
				return false;
		return true;
	}
};

bool operator>(V &l, V &r) {
	return l.vec[0]+l.vec[1] > r.vec[0]+r.vec[1];
}

int main(void) {
	V v1(4, 8), v2(3, 7);
	cout << (v1 == v2 ? "true" : "false") << endl;
	cout << (v1 > v2 ? "true" : "false") << endl;
	return 0;
}
