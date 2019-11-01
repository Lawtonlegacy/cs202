// Homework #5 box.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef BOX_HPP
#define BOX_HPP

#include "Filledbox.hpp"
#include "HollowedBox.hpp"
#include "CheckeredBox.hpp"

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

	virtual void print(std::ostream& stream) const = 0;

	virtual std::string type() const = 0;

	friend std::ostream& operator<<(std::ostream& output, const Box& box);


protected:
	static int _boxCount;
	int _height;
	int _width;
};

std::unique_ptr<Box> boxFactory(char c, int w, int h);

#endif 