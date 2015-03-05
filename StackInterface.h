/**
*	@file : StackInterface.h
*	@author :  Garion Morgan
*	@date : 2015.3.4
*	Purpose: Creating an inheritance program
*/
#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H
#include "PreconditionViolationException.h"
template<typename T>
class StackInterface
{
public:
	/**
	*  @pre ending of program
	*  @post rids all remaining nodes
	*  @return empty list
	*/
	virtual ~StackInterface() {};
	/**
	*  @pre m_counter
	*  @post m_counter
	*  @return m_counter
	*/
	virtual bool isEmpty() const = 0;
	/**
	*  @pre call from main
	*  @post adds value to top of list
	*  @return a new value
	*/
	virtual void push(const T newEntry) = 0;
	/**
	*  @pre call from main
	*  @post deletes value from top of list
	*  @return deletes value
	*/
	virtual T pop() throw(PreconditionViolationException) = 0;
	/**
	*  @pre call from main
	*  @post looks at top of list
	*  @return value from top of list
	*/
	virtual T peek() const throw(PreconditionViolationException) = 0;
	/**
	*  @pre m_counter
	*  @post m_counter
	*  @return m_counter
	*/
	virtual int size() const = 0;
	/**
	*  @pre call from main
	*  @post prints out entire list
	*  @return values from list
	*/
	virtual void print() const = 0;
	/**
	*  @pre call from template class in main
	*  @post returns true if less than and false otherwise
	*  @return compares depending on value of operator
	*/
	virtual bool operator< (const StackInterface<T>& rhs) const = 0;
	/**
	*  @pre call from template class in main
	*  @post returns true if less or equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	virtual bool operator<= (const StackInterface<T>& rhs) const = 0;
	/**
	*  @pre call from template class in main
	*  @post returns true if greater than and false otherwise
	*  @return compares depending on value of operator
	*/
	virtual bool operator> (const StackInterface<T>& rhs) const = 0;
	/**
	*  @pre call from template class in main
	*  @post returns true if greater than and equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	virtual bool operator>= (const StackInterface<T>& rhs) const = 0;
	/**
	*  @pre call from template class in main
	*  @post returns true if equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	virtual bool operator== (const StackInterface<T>& rhs) const = 0;
	/**
	*  @pre call from template class in main
	*  @post returns true if not equal to and false otherwise
	*  @return compares depending on value of operator
	*/
	virtual bool operator!= (const StackInterface<T>& rhs) const = 0;

};



#endif
