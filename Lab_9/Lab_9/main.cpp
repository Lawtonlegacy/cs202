#include "class.hpp"


//Initialize static member of class Stuff
int Stuff::_var2 = 5;

int main() {

	//Static local variable of main function
	// Part 1
	static int s_var = 0;

	for (int i = 0; i < 9; ++i) {
		s_var += 1;
		std::cout << s_var << " ";
	}

	std::cout << std::endl;

	//Part 3 & 4 Static member variable
	{	
		//Created new scope so test1 would be deleted.
		Stuff test1;
		std::cout << Stuff::getVar2() << std::endl;
	}
	
	//Part 4 Calling static member funciton. No object of class is needed.
	std::cout << Stuff::getVar2() << std::endl;




	return 0;
}