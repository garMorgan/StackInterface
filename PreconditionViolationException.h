/**
*	@file : PreconditionViolationException.h
*	@author :  Garion Morgan
*	@date : 2015.3.4
*	Purpose: Creating an exception
*/
#ifndef PRECONDITIONVIOLATIONEXCEPTION_H
#define PRECONDITIONVIOLATIONEXCEPTION_H

#include <stdexcept>

class PreconditionViolationException: public std::runtime_error
{
	public:
		/**
		*  @pre call from main was thrown
		*  @post returns an exception message
		*  @return exception message
		*/
		PreconditionViolationException(char* msg);
};

#endif

