#ifndef STACK_H
#define STACK_H
#include "StackInterface.h"
template <typename T>
class Stack
{
public:
	~Stack() {};
	bool isEmpty() const = 0;
	void push(const T newEntry) = 0;
	T pop() throw(PreconditionViolationException) = 0;
	T peek() const throw(PreconditionViolationException) = 0;
	int size() const = 0;
	void print() const = 0;
	bool operator< (const StackInterface<T>& rhs) const = 0;
	bool operator<= (const StackInterface<T>& rhs) const = 0;
	bool operator> (const StackInterface<T>& rhs) const = 0;
	bool operator>= (const StackInterface<T>& rhs) const = 0;
	bool operator== (const StackInterface<T>& rhs) const = 0;
	bool operator!= (const StackInterface<T>& rhs) const = 0;
};
#endif
