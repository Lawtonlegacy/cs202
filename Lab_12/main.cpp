#include "polymorphism.hpp"
#include <memory>


int main() {

	Parent base; 
	Child derived;


	//Base class pointer to base class object
	Parent *bcp;
	bcp = &base;
	std::cout << "Calling virtual funciton from base class pointer to base class object: ";
	bcp->virtFunc();
	std::cout << "Calling regular function from base class pointer to base class object: ";
	bcp->regFunc();
	std::cout << std::endl;

	//Base class pointer to derived class object
	Parent* bcp2;
	bcp2 = &derived;
	std::cout << "Calling virtual funciton from base class pointer to derived object: ";
	bcp2->virtFunc();
	std::cout << "Calling regular function from base class pointer to derived object: ";
	bcp2->regFunc();
	std::cout << std::endl;

	//Derived class pointer to derived class object
	Child *dcp;
	dcp = &derived;
	std::cout << "Calling virtual function from derived class pointer to derived class: ";
	dcp->virtFunc();
	std::cout << "Calling regular function from derived class pointer to derived class: ";
	dcp->regFunc();
	std::cout << std::endl;


	//Base class reference to base class object
	Parent &bcr = base;
	std::cout << "Calling virtual function from base class reference to base class object: ";
	bcr.virtFunc();
	std::cout << "Calling regular function from base class reference to base class object: ";
	bcr.regFunc();
	std::cout << std::endl;

	//Base class reference to derived class object
	Parent &bcr2 = derived;
	std::cout << "Calling virutal function from base class reference to derived class object: ";
	bcr2.virtFunc();
	std::cout << "Calling regular function from base class reference to derived class object: ";
	bcr2.regFunc();
	std::cout << std::endl;
	
	//Derived class reference to derived class object
	Child &dcr = derived;
	std::cout << "Calling virutal function from derived class reference to derived class object: ";
	dcr.virtFunc();
	std::cout << "Calling regular function from derived class reference to derived class object: ";
	dcr.regFunc();
	std::cout << std::endl;

	return 0;
}