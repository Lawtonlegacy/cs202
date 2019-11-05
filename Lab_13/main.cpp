// Lab on Function Templates
// Robert Lawton

#include <iostream>

template<typename T>
T twice(const T& x) {
	return x + x;
}

std::string twice(const char* ptr) {
	std::string s(ptr);
	return s + s;
}


int main() {

	//Part 1
	std::cout << twice(2) << std::endl;
	std::cout << twice(2.3) << std::endl;
	std::cout << twice(std::string("Hello")) << std::endl;

	//Part 2 & 3 w/ C-style string
	const char *cstring = "World";
	std::cout << twice(cstring) << std::endl;

	return 0;
}