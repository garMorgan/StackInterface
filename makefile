lab4: main.o PreconditionViolationException.o
	g++ -std=c++11 -g main.o PreconditionViolationException.o -o lab4
main.o: main.cpp Node.h Node.hpp StackInterface.h Stack.h Stack.hpp
	g++ -std=c++11 -g -c main.cpp
PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -std=c++11 -g -c PreconditionViolationException.cpp
clean:
	rm *.o lab4

