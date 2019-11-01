// Homework #5 box.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019



// Created by Robert Lawton 10/15
//
//	INSTRUCTIONS TO ADD A NEW TYPE OF BOX:
//		
//	1.) Add the type you wish to incorporate to the ENUM below.
//	2.) Add your new box type as a new switch case to the type() function in box.cpp.
//	3.) Add a new else if statement with the required code to the print() function in box.cpp.
//

#ifndef BOX_HPP
#define BOX_HPP

#include <string>
#include <ostream>


class Box {

public:

	Box();
	Box(int width, int height);
	~Box();

	static int howMany();

	int getWidth() const;
	int getHeight() const;
	void setWidth(const int& width);
	void setHeight(const int& height);

	void print(std::ostream& stream) const;

	friend std::ostream& operator<<(std::ostream& output, const Box& box);


protected:
	static int _boxCount;
	int _height;
	int _width;
};

#endif 