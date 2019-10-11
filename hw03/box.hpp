// Homework #3 box.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/11/2019

#ifndef BOX_HPP
#define BOX_HPP

#include <string>
#include <ostream>


class Box {

public:

	enum boxType {FILLED, HOLLOW, CHECKERED};
	
	Box();

	Box(int width, int height);

	Box(int width, int height, bool filled);

	std::string type() const;

	int getWidth() const;

	int getHeight() const;

	void setWidth(const int& width);

	void setHeight(const int& height);

	void print(std::ostream& stream) const;

private:

	int _height;
	int _width;
	bool _filled;

};

#endif 