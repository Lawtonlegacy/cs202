// Homework #4 Money.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/16/2019

#include "Money.hpp"

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

//Conditional operators
bool operator ==(const Money& lhs, const Money& rhs) { return (lhs.getAmount() == rhs.getAmount());}
bool operator<(const Money& lhs, const Money& rhs) { return rhs.getAmount() > lhs.getAmount();}
bool operator<=(const Money& lhs, const Money& rhs) { return rhs.getAmount() >= lhs.getAmount();}
bool operator>=(const Money& lhs, const Money& rhs) { return rhs.getAmount() <= lhs.getAmount();}
//**************** Canonical Function from Hartman ****************
bool operator>(const Money& lhs, const Money& rhs) { return rhs < lhs;}
//**************** Canonical Function from Hartman ****************
bool operator!=(const Money& lhs, const Money& rhs) { return !(lhs == rhs);}

//Arithmetic operators

//Add two Money objects
Money operator+(const Money& lhs,const Money& rhs) {
	Money newBal(lhs.getAmount() + rhs.getAmount());
	return newBal;
}

//Subtract two Money objects
Money operator-(const Money& lhs, const Money& rhs) {
	Money newBal(lhs.getAmount() - rhs.getAmount());
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
	return *this = *this * rhs.getAmount();
}

Money& Money::operator/= (const Money& rhs) {
	return *this = *this / rhs.getAmount();
}


std::ostream& operator<<(std::ostream& output, const Money& amount) {
	if (amount.getAmount() == 0) {
		output << "$0.00";
	}
	else if (amount.getAmount() < 0) {
		double fixedAmount = amount.getAmount() * -1.00;
		output << "-$" << fixedAmount;
	}
	else {
		output << "$" << amount.getAmount();
	}

	return output;
}



Money& Money::operator+=(const Money& rhs) {
	return *this = *this + rhs;
}

Money& Money::operator-=(const Money& rhs) {
	return *this = *this - rhs;
}

Money operator*(Money lhs, const Money& rhs) { return lhs *= rhs; }

Money operator/(Money lhs, const Money& rhs) { return lhs /= rhs; }