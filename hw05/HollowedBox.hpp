// Homework #5 HollowedBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef HOLLOWEDBOX_HPP
#define HOLLOWEDBOX_HPP


#include "box.hpp"

class HollowedBox : public Box {

public:

	using Box::Box;

	std::string type() const override;

	void print(std::ostream& os) const override;

};

#endif