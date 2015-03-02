#ifndef STACK_H
#define STACK_H
#include "Node.h"
#include "PreconditionViolationException.h"
#include "StackInterface.h"
#include <string>
#include <iostream>

template <typename T>
class Stack : public StackInterface<T>
{
public:
	Stack();
	~Stack();
	bool isEmpty() const;
	void push(const T newEntry);
	T pop() throw(PreconditionViolationException);
	T peek() const throw(PreconditionViolationException);
	int size() const;
	void print() const;
	bool operator< (const StackInterface<T>& rhs) const;
	bool operator<= (const StackInterface<T>& rhs) const;
	bool operator> (const StackInterface<T>& rhs) const;
	bool operator>= (const StackInterface<T>& rhs) const;
	bool operator== (const StackInterface<T>& rhs) const;
	bool operator!= (const StackInterface<T>& rhs) const;
private:
	Node<T>* m_front;
	int m_counter;
};
#include "Stack.hpp"
#endif
