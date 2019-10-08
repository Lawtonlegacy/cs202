#ifndef CLASS_H
#define CLASS_H

#include <iostream>


class MyClass {

public:

	friend MyClass operator+(const MyClass & m1, const MyClass & m2);

	MyClass(int input)
		:_someData(input)
	{
		std::cout << "Default Constructor" << std::endl;
	};

	int getValue() const;

private:
	int _someData;
};

std::ostream& operator <<(std::ostream& os, const MyClass& f);

#endif
