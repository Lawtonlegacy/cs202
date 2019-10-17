// Homework #4 money.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/16/2019

#include "money.hpp"







//**************Canonical Functions from Hartman****************
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