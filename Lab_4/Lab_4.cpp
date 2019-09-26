//Lab 4 CS 202
// 9/17/2019
// Prof. Hartman
// Code by Robert Lawton

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int getNum();
std::string getLineText();

int main()
{	
	

	std::string fromStream;
	std::ifstream ifile;
	ifile.open("readwrite.txt");


	std::getline(ifile, fromStream);
	std::cout << fromStream << std::endl;
	

	//Part 2 Query user for a number and line of text
	
	int part2 = getNum();
	std::string part2string = getLineText();

	//Part 3 Append user number of copies of the line of text to the file
	std::ofstream ofile("readwrite.txt", std::ios::app);
	
	for (int i = 0; i < part2; ++i) {
		ofile << part2string << std::endl;
	}


	return 0;
}


int getNum(){

	std::cout << "Enter a number \n" << std::endl;
	std::string input = "";
	int num = 0;
	while (true){	//do until valid input

		std::getline(std::cin, input);
		std::istringstream numValid(input);

		numValid >> num;		// put input string into num

		if (!numValid){		// input has type conflict
			std::cout << "input not valid, enter a number" << std::endl;
			continue;
		}
		if (num <= 0){
			std::cout << "please enter a positive number" << std::endl;
			continue;
		}
		break;
	}
	return num;
}

std::string getLineText()
{
	std::string str;
	std::cout << "enter a line of text \n" << std::endl;
	std::getline(std::cin, str);
	return str;
}
