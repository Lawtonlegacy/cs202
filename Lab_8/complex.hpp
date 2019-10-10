#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>

class Complex {

private:
	double _real;
	double _comp;
	
public:

	//Default Constructor
	Complex(double real, double complex);

	//Single paramater constructor
	Complex(double real);
	
	friend std::ostream& operator << (std::ostream& out, const Complex& comp);

	friend Complex operator + (const Complex& comp1, const Complex& comp2);

	Complex & operator+= (const Complex& comp);
};



#endif 
