#include "PreconditionViolationException.h"

PreconditionViolationException::PreconditionViolationException(char* msg) : std::runtime_error(msg)
{

}

