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

//Accessor function for balance
double Money::getAmount() const {
	return _amount;
}

//Test if one Money object is equal to another (==)
bool operator ==(const Money& lhs, const Money& rhs) { return (lhs == rhs);}

//Test if one Money object is less than another (<)
bool operator<(const Money& lhs, const Money& rhs) { return rhs > lhs;}

//Test if one Money object is less than or equal to another (<=)
bool operator<=(const Money& lhs, const Money& rhs) { return rhs >= lhs;}

//Test if one Money object is less than or equal to another (>=)
bool operator>=(const Money& lhs, const Money& rhs) { return rhs <= lhs;}

//Add two Money objects
Money& Money::operator+(const Money& rhs)const {
	Money newBal(*this + rhs);
	return newBal;
}
//Subtract two Money objects
Money& Money::operator-(const Money& rhs)const {
	Money newBal(*this - rhs);
	return newBal;
}

//Multiply a double times a Money object
Money operator*(const double& amount, const Money& dolamount) {
	double temp = amount * dolamount.getAmount();
	double fixedAmount = floor(temp * 100 + 0.5) / 100;
	Money result(fixedAmount);
	return result;
}

//Multiply a Money object times a double
Money operator*(const Money& dolamount, const double& amount) {
	double temp = amount * dolamount.getAmount();
	double fixedAmount = floor(temp * 100 + 0.5) / 100;
	Money result(fixedAmount);
	return result;
}

//Divide a Money object by a double
Money operator/(const Money& dolamount, const double& amount) {
	double temp = dolamount.getAmount() / amount;
	double fixedAmount = floor(temp * 100 + 0.5) / 100;
	Money result(fixedAmount);
	return result;
}

Money& Money::operator*= (const Money& rhs) {
	return *this = *this * rhs;
}

Money& Money::operator/= (const Money& rhs) {
	return *this = *this / rhs;
}


//******************************************************************
//**************** Canonical Functions from Hartman ****************
//******************************************************************

//Test if one Money object is greater than another (>)
bool operator>(const Money& lhs, const Money& rhs) { return rhs < lhs; }

//Test if one Money object is not equal to another (!=)
bool operator!=(const Money& lhs, const Money& rhs) { return !(lhs == rhs);}

Money& Money::operator+=(const Money& rhs) {
	return *this = *this + rhs;
}

Money& Money::operator-=(const Money& rhs) {
	return *this = *this - rhs;
}

Money operator*(Money lhs, const Money& rhs) { return lhs *= rhs; }

Money operator/(Money lhs, const Money& rhs) { return lhs /= rhs; }