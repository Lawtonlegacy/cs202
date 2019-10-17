// Homework #4 money.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/16/2019

#include <iostream>

class Money {

private:

	double _balance;

public:

	Money();

	Money(const int& dollars, const int& cents);

	double getBalance() const;

	Money& operator+=(const Money& rhs);

	Money& operator-=(const Money& rhs);

};

Money operator*(Money lhs, const Money& rhs);

Money operator/(Money lhs, const Money& rhs);

bool operator>(const Money& lhs, const Money& rhs);

bool operator!=(const Money& lhs, const Money& rhs);

