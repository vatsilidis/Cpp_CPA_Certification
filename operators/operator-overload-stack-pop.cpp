#include "mystack_02.h"

stack_size_error::stack_size_error(const std::string &msg) : std::length_error(msg) {
};

stack_bad_alloc::stack_bad_alloc(void) : std::bad_alloc() {
};

stack_overflow::stack_overflow(const std::string &msg) : std::logic_error(msg) {
};

stack_empty::stack_empty(const std::string &msg) : std::logic_error(msg) {
};

Stack::Stack(int size) throw(stack_size_error, stack_bad_alloc) { 
	if(size <= 0)
		throw stack_size_error("size must be >= 0");
	try {
		stackstore = new int[size];
	} catch(std::bad_alloc ba) {
		throw stack_bad_alloc();
	}
	stacksize = size;
	SP = 0;
}

Stack::~Stack(void) {
	delete stackstore;
}

void Stack::push(int value) throw(stack_overflow) {
	if(SP == stacksize)
		throw stack_overflow("stack size exceeded");
	stackstore[SP++] = value;
}

int Stack::pop(void) throw(stack_empty) { 
	if(SP == 0)
		throw stack_empty("stack is empty");
	return stackstore[--SP]; 
}

void Stack::operator<< (int v) throw (stack_overflow) {
	push(v);
}

void Stack::operator>> (int &v) throw(stack_empty) {
	v = pop();
}

