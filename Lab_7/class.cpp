#include "class.h"


int MyClass::getValue() const {
	return _someData;
}

std::ostream& operator <<(std::ostream& os, const MyClass& f) {
	
	os << "This is an object of MyClass with value " << f.getValue();
	return os;
}

MyClass operator+(const MyClass& m1, const MyClass& m2) {
	return MyClass(m1._someData + m2._someData);
}