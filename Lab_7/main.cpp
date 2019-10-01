// Lab_7.cpp 
// Robert Lawton
// 10/1/2019
// CS 201 w/Hartman

#include "class.h"


int main()
{

	int input1, input2;

	std::cout << "Enter a number for object 1: ";
	std::cin >> input1;

	MyClass foo(input1);

	std::cout << foo;


	std::cout << "\nEnter a number for object 2: ";
	std::cin >> input2;

	MyClass foo2(input2);

	std::cout << foo2 << std::endl;

	MyClass sum = foo + foo2+foo+foo+foo+foo;
	std::cout << sum.getValue();

	return 0;
}

