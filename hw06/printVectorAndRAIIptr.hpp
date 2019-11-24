#ifndef PRINTVECTORANDRAIIPTR_HPP_
#define PRINTVECTORANDRAIIPTR_HPP_

#include <iostream>
#include <vector>

template<typename V>
void printVector(std::ostream& os, std::vector <V> any) {
	for (auto i : any) {
		os << i << std::endl;
	}
	std::endl;
}

template<typename T>
class RAIIPtr {
public:
	RAIIPtr(const T* &ptr);

private:
	T _ptrVal;
};

template <typename T>
RAIIPtr<T>::RAIIPtr(const T*& ptr) :_ptrVal(ptr) {}

#endif
