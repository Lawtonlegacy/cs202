#include "complex.hpp"


int main() {
	
	//Class object for testing with default constructor
	Complex tester1(5.13, 7.92);
	
	//Testing overloaded stream insertion operator
	std::cout << "Created Complex number with default constructor, value: " << tester1 << std::endl;

	//Class object for testing with second constructor
	Complex tester2(9.87);

	std::cout << "Created another Complex number with 1 param construcor, value: " << tester2 << std::endl;

	//Testing overloaded addition operator
	Complex tester3 = tester1 + tester2;

	std::cout << "Testing addition with sum of the 2 previous Complex numbers, value: " << tester3 << std::endl;

	//Testing overloaded += operator
	std::cout << "Testing += on tester1 & tester2: " << (tester1 += tester2) << std::endl;

	//Testing adding natural number to Object
	std::cout << "testing additon of int with complex number: " << 1 + Complex(3.4, 1.1) << std::endl;

	return 0;
}