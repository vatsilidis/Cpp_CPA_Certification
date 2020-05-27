#include <iostream>

using namespace std;

void fun(void) {
	auto int var = 99;
	cout << "var = " << ++var << endl;
}

int main(void) {
	for(int i = 0; i < 5; i++)
		fun();
	return 0;
}
