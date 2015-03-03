lab4: main.o PreconditionViolationException.o
	g++ -std=c++11 -g -Wall main.o PreconditionViolationException.o -o lab4
main.o: main.cpp Node.h Node.hpp StackInterface.h Stack.h Stack.hpp
	g++ -std=c++11 -g -Wall -c main.cpp
PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -std=c++11 -g -Wall -c PreconditionViolationException.cpp
clean:
	rm *.o lab4

