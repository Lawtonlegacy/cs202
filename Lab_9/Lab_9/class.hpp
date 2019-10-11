#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>


class Stuff {

private:

	int _var1;
	static int _var2;

public:

	
	int getVar1() {
		return _var1;
	}

	static int getVar2() {
		return _var2;
	}


};


#endif 
