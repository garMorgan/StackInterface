/**
*	@file : Stack.h
*	@author :  Garion Morgan
*	@date : 2015.3.4
*	Purpose: Creating a stack to either pop, push, peek, print, and compare.
*/
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
	/**
	*  @pre m_front and m_counter
	*  @post m_front and m_counter
	*  @return m_front and m_counter
	*/
	Stack();
	/**
	*  @pre ending of program
	*  @post rids all remaining nodes
	*  @return empty list
	*/
	~Stack();
	/**
	*  @pre m_counter
	*  @post m_counter
	*  @return m_counter
	*/
	bool isEmpty() const;
	/**
	*  @pre call from main
	*  @post adds value to top of list
	*  @return a new value
	*/
	void push(const T newEntry);
	/**
	*  @pre call from main
	*  @post deletes value from top of list
	*  @return deletes value
	*/
	T pop() throw(PreconditionViolationException);
	/**
	*  @pre call from main
	*  @post looks at top of list
	*  @return value from top of list
	*/
	T peek() const throw(PreconditionViolationException);
	/**
	*  @pre m_counter
	*  @post m_counter
	*  @return m_counter
	*/
	int size() const;
	/**
	*  @pre call from main
	*  @post prints out entire list
	*  @return values from list
	*/
	void print() const;
	/**
	*  @pre call from template class in main
	*  @post returns true if less than and false otherwise
	*  @return compares depending on value of operator
	*/
	bool operator< (const StackInterface<T>& rhs) const;
	/**
	*  @pre call from template class in main
	*  @post returns true if less or equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	bool operator<= (const StackInterface<T>& rhs) const;
	/**
	*  @pre call from template class in main
	*  @post returns true if greater than and false otherwise
	*  @return compares depending on value of operator
	*/
	bool operator> (const StackInterface<T>& rhs) const;
	/**
	*  @pre call from template class in main
	*  @post returns true if greater than and equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	bool operator>= (const StackInterface<T>& rhs) const;
	/**
	*  @pre call from template class in main
	*  @post returns true if equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	bool operator== (const StackInterface<T>& rhs) const;
	/**
	*  @pre call from template class in main
	*  @post returns true if not equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	bool operator!= (const StackInterface<T>& rhs) const;
private:
	/**
	*  @pre nullptr
	*  @post m_front
	*  @return keeps track of front of list
	*/
	Node<T>* m_front;
	/**
	*  @pre none
	*  @post size
	*  @return size
	*/
	int m_counter;
};
#include "Stack.hpp"
#endif
