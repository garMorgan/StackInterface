#ifndef PRECONDITIONVIOLATIONEXCEPTION_H
#define PRECONDITIONVIOLATIONEXCEPTION_H

#include <stdexcept>

class PreconditionViolationException: public std::runtime_error
{
	public:
		PreconditionViolationException(char* msg);
};

#endif

