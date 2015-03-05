/**
*	@file : main.cpp
*	@author :  Garion Morgan
*	@date : 2015.3.4
*	Purpose: Creating main to implement all the files created
*/
#include <iostream>
#include "Stack.h"
#include <string>

void printMenu();
template <typename T>
void compareStacks(const StackInterface<T>& s1, const StackInterface<T>& s2);

int main()
{
	int number;
	std::string names;

	StackInterface<std::string>* stack1 = new Stack<std::string>();
	StackInterface<std::string>* stack2 = new Stack<std::string>();
	
	do
		{
		printMenu();
		
		std::cin >> number;
		switch(number)
			{
			case 1 : std::cout << "What is going into stack 1?: ";
			std::cin >> names;
			stack1->push(names);
			std::cout << names << " successfully added to stack 1" << std::endl;
			break;
			case 2 : std::cout << "What is going into stack 2?: ";
			std::cin >> names;
			stack2->push(names);
			std::cout << names << " successfully added to stack 2" << std::endl;
			break;
			case 3 :			
			try
				{
				std::string temp = stack1->peek();
				std::cout << temp << " is on the top of stack 1" << std::endl;
				}
			catch(std::runtime_error& e)
				{
				std::cout << e.what() << std::endl;
				}
			break;
			case 4 :			
			try
				{
				std::string temp = stack2->peek();
				std::cout << temp << " is on the top of stack 2" << std::endl;
				}
			catch(std::runtime_error& e)
				{
				std::cout << e.what() << std::endl;
				}
			break;
			case 5 : stack1->print();
			break;
			case 6 : stack2->print();
			break;
			case 7 :
			try
				{
				std::string temp = stack1->pop();
				std::cout << temp << " removed from stack 1" << std::endl; 
				}
			catch(std::runtime_error& e)
				{
				std::cout << e.what() << std::endl;
				}
			break;
			case 8 :
			try
				{
				std::string temp = stack2->pop();
				std::cout << temp << " removed from stack 2" << std::endl;
				}
			catch(std::runtime_error& e)
				{
				std::cout << e.what() << std::endl;
				}
			break;
			case 9 : compareStacks(*stack1,*stack2);
			break;
			case 10 : std::cout << "Program ending..." << std::endl;
			break;

			default : std::cout << "Invalid Choice" << std::endl;
			}
		}while(number!=10);
	
	delete stack1;
	delete stack2;
	
	
	return 0;
}

void printMenu()
{
	std::cout << "\n\nSelect an action:\n";
	std::cout << "1) Add something to stack 1\n";
 	std::cout << "2) Add something to stack 2\n";
	std::cout << "3) See what is at the top of stack 1\n";
	std::cout << "4) See what is at the top of stack 2\n";
	std::cout << "5) Print contents in stack 1\n";
	std::cout << "6) Print contents in stack 2\n";
	std::cout << "7) Remove something from stack 1\n";
	std::cout << "8) Remove something from stack 2\n";
	std::cout << "9) Compare Stacks\n";
	std::cout << "10) Quit\n";
	std::cout << "Enter choice: ";
}
template <typename T>
void compareStacks(const StackInterface<T>& s1, const StackInterface<T>& s2)
{
	std::cout 	<< "\nComparison of stacks:\n"
			<< "lane 1 < lane 2: " <<  (s1 <  s2) 	<< "\n"
			<< "lane 1 > lane 2: " <<  (s1 >  s2) 	<< "\n"
			<< "lane 1 >= lane 2: " << (s1 >= s2) 	<< "\n"
			<< "lane 1 <= lane 2: " << (s1 <= s2) 	<< "\n"
			<< "lane 1 == lane 2: " << (s1 == s2) 	<< "\n"
			<< "lane 1 != lane 2: " << (s1 != s2) 	<< "\n";
}
