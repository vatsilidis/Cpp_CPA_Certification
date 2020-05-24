#include <iostream>

using namespace std;

bool div(float &res, float arg1, float arg2) {
	if(arg2 == 0.0)
		return false;
	res = arg1 / arg2;
	return true;
}

int main(void) {
	float r, a, b;
	while(cin >> a) {
		cin >> b;
		if(div(r,a,b))
			cout << r << endl;
		else
			cout << "Are you kidding me?" << endl;

	}
	return 0;
}
