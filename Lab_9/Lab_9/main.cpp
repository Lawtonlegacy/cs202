#include "class.hpp"


int Stuff::_var2 = 5;

int main() {


	//Part 1 Static local variable
	{	
		//Created new scope so test1 would be deleted.
		Stuff test1;
		std::cout << Stuff::getVar2() << std::endl;
	}
	
	//Reprinting Part 1 Static local variable
	std::cout << Stuff::getVar2() << std::endl;

	
	//Part 3 


	return 0;
}