#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;

class Myclass {
public:
	Myclass() { cout << "Object constructed \n"; };
	~Myclass() { cout << "Object destructed \n"; };
};


void functionC() {
	throw std::runtime_error("function C() threw std::runtime_error");
}

void functionB() {
	Myclass test1;
	cout << "Starting functionB()" << endl;
	functionC();
	cout << "Ending functionB()" << endl;
}

void functionA() {
	try {
		functionB();
	}
	catch (const std::exception& e) {
		cout << "Caught an exception: " << e.what() << endl;
	}
}
int main() {
	cout << "Starting main()" << endl;
	functionA();
	cout << "Ended normally." << endl;
	return 0;
}