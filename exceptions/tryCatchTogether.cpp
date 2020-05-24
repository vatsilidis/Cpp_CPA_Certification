// pokazujemy prosty przyk³ad, w którym catch jest w tej samej funkcji, co throw

#include <iostream>

using namespace std;

float DoCalculations(float a, float b, float c, float d) {
    try {
	float x;
	if(a == 0.0)
		throw string("Bad arg a");
	x = 1 / a;
	if(b == 0.0)
		throw string("Bad arg b");
	x /= b;
	if(c == 0.0)
		throw string("Bad arg c");
	x /= c;
	if(d == 0.0)
		throw string("Bad arg d");
	return x / d;
   } catch(string &exc) {
	cout << "Something bad happened: " << exc << endl;
	return 0;
   }
}

int main(void) {
	DoCalculations(1,2,3,0);
	return 0;
}