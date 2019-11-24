#ifndef WRAPPER_HPP
#define WRAPPER_HPP
#include <iostream>

template <typename T>
class Wrapper {
	template<typename U>
	friend std::ostream& operator<<(std::ostream& os, const Wrapper<U>& type);
public:
	Wrapper(const T& obj) :_first(obj) {}

private:
	T _first;
};

template<typename U>
std::ostream& operator<<(std::ostream& os, const Wrapper<U>& type) {
	os << type._first;
	return os;
}


#endif
