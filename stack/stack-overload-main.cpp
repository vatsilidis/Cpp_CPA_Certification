#include "mystack.h"
#include <iostream>

using namespace std;

Stack& operator<< (Stack &s, int v) throw(stack_overflow) {
	s.push(v);
	return s;
}

Stack& operator>>(Stack &s, int &v) throw(stack_empty) {
	v = s.pop();
	return s;
}

int main(void) {
	int i = 2, j;
	Stack stk;
	stk << 1 << 2 * i;
	stk >> j >> i;
	cout << j << endl << i << endl;
	return 0;
}
