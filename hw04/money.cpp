// Homework #4 money.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/16/2019

#include "money.hpp"

//Default Constructor
Money::Money()
	: _amount(0.00) {}

//Dollars and cents constructor
Money::Money(const int& dollars, const int& cents)
	: _amount((double)dollars + (double)cents/100) {}

//Double constructor
Money::Money(const double& amount)
	: _amount(floor(amount*100+0.5)/100) {}

//Test if one Money object is equal to another (==)
bool operator ==(const Money& lhs, const Money& rhs) { lhs.getAmount() == rhs.getAmount();}



//Accessor function for balance
double Money::getAmount() const {
	return _amount;
}
//******************************************************************
//**************** Canonical Functions from Hartman ****************
//******************************************************************

Money& Money::operator+=(const Money& rhs) {
	return *this = *this + rhs;
}

Money& Money::operator-=(const Money& rhs) {
	return *this = *this - rhs;
}

Money operator*(Money lhs, const Money& rhs) { return lhs *= rhs; }


Money operator/(Money lhs, const Money& rhs) { return lhs /= rhs; }


bool operator>(const Money& lhs, const Money& rhs) { return rhs < lhs; }


bool operator!=(const Money& lhs, const Money& rhs) {
	return !(lhs == rhs);
}