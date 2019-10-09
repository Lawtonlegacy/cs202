// Homework #2 files.hpp
// Robert Lawton
// CS 202 with Hartman
// 9/26/2019

#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <ostream>


int getIdFromFile(std::string filename, std::istream& input, std::ostream& output);
void numberChase(std::string filename, std::ostream& output);

#endif