#ifndef __MYSTACK__
#define __MYSTACK__

#include <exception>
#include <stdexcept>
#include <string>

class stack_size_error : public std::length_error {
public:
	explicit stack_size_error(const std::string &msg);
};

class stack_bad_alloc : public std::bad_alloc {
public:
	explicit stack_bad_alloc(void);
};

class stack_overflow : public std::logic_error {
public:
	explicit stack_overflow(const std::string &msg);
};

class stack_empty : public std::logic_error {
public:
	explicit stack_empty(const std::string &msg);
};

class Stack {
    private:
	int *stackstore;
	int stacksize;
	int SP;
    public:
	Stack(int size = 100) throw(stack_size_error, stack_bad_alloc);
	~Stack();
	void push(int value) throw(stack_overflow);
	int pop(void) throw(stack_empty);
};

#endif