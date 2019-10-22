// Homework #4 money.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/16/2019

#include <iostream>
#include <math.h>

class Money {

private:

	double _amount;

public:

	Money();

	Money(const int& dollars, const int& cents);

	Money(const double& amount);

	double getAmount() const;

	Money& operator+(const Money& rhs)const;

	Money& operator-(const Money& rhs)const;

	friend Money operator*(const double& amount, const Money& dolamount);

	friend Money operator*(const Money& dolamount, const double& amount);

	friend Money operator/(const double& amount, const Money& dolamount);

	Money& operator+=(const Money& rhs);

	Money& operator-=(const Money& rhs);

};

bool operator ==(const Money& lhs, const Money& rhs);

bool operator<(const Money& lhs, const Money& rhs);

bool operator<=(const Money& lhs, const Money& rhs);

bool operator>=(const Money& lhs, const Money& rhs);

//******************************************************************
//**************** Canonical Functions from Hartman ****************
//******************************************************************

Money operator*(Money lhs, const Money& rhs);

Money operator/(Money lhs, const Money& rhs);

bool operator>(const Money& lhs, const Money& rhs);

bool operator!=(const Money& lhs, const Money& rhs);

