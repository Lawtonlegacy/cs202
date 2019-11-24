#include "wrapper.hpp"



int main() {

	Wrapper<int>w{ 2 };
	Wrapper<std::string> s{ "Hello world!" };

	std::cout << w << " " << s << std::endl;

	return 0;
}