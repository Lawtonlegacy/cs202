// Homework #5 HollowBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef HOLLOWBOX_HPP
#define HOLLOWBOX_HPP


#include "box.hpp"
#include <iostream>

class HollowBox : public Box {

public:

	HollowBox();

	HollowBox(int width, int height);

	std::string type() const ;

	void print(std::ostream& os) const ;

};

#endif