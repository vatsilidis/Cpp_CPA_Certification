#include <iostream>

using namespace std;

float div(float a, float b) {
	if(b == 0.0)
		throw string("division by zero :(");
	return a/b;
}

int main(void) {
	float a, b;
	while(cin >> a) {
		try {
			cin >> b;
			cout << div(a, b) << endl;
		} catch (int problem) {
			cout << "Look what you did, you bad user!" << endl;
			cout << problem << endl;
		}
	}
	return 0;
}
