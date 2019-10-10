#include "complex.hpp"


Complex::Complex(double real, double complex)
	:_real(real), _comp(complex)
{}

Complex::Complex(double real)
	: _real(real), _comp(0)
{}

std::ostream& operator << (std::ostream& out, const Complex& comp) {
	
	if (comp._comp != 0) {
		out << comp._real << " + ";
		out << comp._comp << "i" << "\n";
		return out;
	}else {
		out << comp._real << "\n";
	}
}

Complex operator + (const Complex& comp1, const Complex& comp2) {

	Complex result(comp1._real + comp2._real, comp1._comp + comp2._comp);
	return result;
}

Complex & Complex::operator+= (const Complex& comp) {

	return *this = *this + comp;
}