#include <iostream>

class Stack {
    private:
	int stackstore[100];
	int SP;
    public:
	Stack(void) { SP = 0; }
	void push(int value);
	int pop(void) { return stackstore[--SP]; }
};

void Stack::push(int value) {
	stackstore[SP++] = value;
}

using namespace std;

int main(void) {
	Stack little_stack, other_stack, funny_stack;
	
	little_stack.push(1);
	other_stack.push(little_stack.pop() + 1);
	funny_stack.push(other_stack.pop() + 2);
	cout << funny_stack.pop() << endl;
	return 0;
}
