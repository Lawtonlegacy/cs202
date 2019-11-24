#ifndef PRINTVECTORANDRAIIPTR_HPP_
#define PRINTVECTORANDRAIIPTR_HPP_

#include <iostream>
#include <vector>

//Part A printVector template function
template<typename V>
void printVector(std::ostream& os, std::vector <V> any) {
	for (auto i : any) {
		os << i << std::endl;
	}
	std::endl;
}

//Part B RAIIptr Class Template
template<typename T>
class RAIIPtr {
public:
	RAIIPtr(const T* &ptr);
	
	//Overloaded operator* (dereference)
	T& operator*(T ptr) {
		return *ptr;
	};

	//Overloaded operator->
	T* operator->;
private:
	T _ptrVal;
};

//Constructor which takes a T*
template <typename T>
RAIIPtr<T>::RAIIPtr(const T*& ptr) :_ptrVal(ptr) {}


#endif
