//
//  main.cpp
//  BinaryStreams
//
//  Created by Chris Hartman on 9/24/19.
//  Copyright © 2019 Chris Hartman. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
	   //std::ofstream ofile("output.dat" , std::ios::binary);
	
	   //for(int i=0;i<100;++i)
	   //   ofile.write(reinterpret_cast<const char *>(&i),sizeof(i));


	std::ifstream ifile("output.dat", std::ios::binary);
	ifile.seekg(sizeof(int) * 42);
	int x;
	ifile.read(reinterpret_cast<char*>(&x), sizeof(int));
	std::cout << x << "\n";
	return 0;
}