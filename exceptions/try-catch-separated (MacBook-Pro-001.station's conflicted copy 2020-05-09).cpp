// a teraz wyrzucamy catch w inne miejsce

#include <iostream>

using namespace std;

float DoCalculations(float a, float b, float c, float d) {
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
}

int main(void) {
   try {
	DoCalculations(1,2,3,0);
   } catch(string &exc) {
	cout << "Something bad happened: " << exc << endl;
   }
   return 0;
}