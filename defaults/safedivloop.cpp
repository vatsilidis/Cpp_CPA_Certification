#include <iostream>

using namespace std;

int main(void) {
	float a, b;
	while(cin >> a) {
		cin >> b;
		if(b != 0.0)
			cout << a / b << endl;
		else
			cout << "Are you kidding me?" << endl;
	}
	return 0;
}
