#pragma once

#include <iostream>



class Parent {
	
public:

	Parent() {};
	~Parent() {};

	virtual void virtFunc() { std::cout << "Base class virtual function called\n"; };

	void regFunc() { std::cout << "Base class regular function called\n"; };
};


class Child : public Parent {

public:

	Child() {};
	~Child() {};

	void virtFunc() { std::cout << "Derived class call to virtFunc\n"; };

	void regFunc() { std::cout << "Derived class regular function called\n"; };
	
};