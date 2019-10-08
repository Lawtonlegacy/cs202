#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostram>

class Complex {
	
public:

	//Default Constructor
	Complex(double real, double complex);

	//Single paramater constructor
	Complex(double real, double imag = 0);
	
};

std::ostream & operator <<()

#endif 
