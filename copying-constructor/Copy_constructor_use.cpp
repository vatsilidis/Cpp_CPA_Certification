#include <iostream>
using namespace std;
class Class1 {
public:
	Class1(int val) { this -> value = val; }
	Class1(Class1 const &source) { value = source.value + 100; }
	int value;
};
class Class2 {
public:
	Class2(int val) { this -> value = val; }
	int value;
};
int main(void) {
	Class1 object11(100), object12 = object11;
	Class2 object21(200), object22 = object21;
	cout << object12.value << endl;
	cout << object22.value << endl;
	return 0;
}
