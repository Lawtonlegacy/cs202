#ifndef PRINTVECTORANDRAIIPTR_HPP_
#define PRINTVECTORANDRAIIPTR_HPP_

#include <iostream>
#include <vector>

//Part A printVector template function
template<typename T>
void printVector(std::ostream& os, std::vector <T> any) {
	for (auto i : any) {
		os << i << '\n';
	}

}

//Part B RAIIptr Class Template
template<typename T>
class RAIIPtr {
public:

	//Constructor
	RAIIPtr(T* ptr);
	
	//Overloaded operator* (dereference)
	T& operator*();

	//Overloaded operator->
	T* operator->();

	//Destuctor
	~RAIIPtr();

private:
	T* _raiiPtr;
};

//Constructor which takes a T*
template <typename T>
RAIIPtr<T>::RAIIPtr(T* ptr) :_raiiPtr(ptr) {}

//Destrutor
template <typename T>
RAIIPtr<T>::~RAIIPtr() { delete(_raiiPtr); }

//Overloaded operator*
template <typename T>
T& RAIIPtr<T>::operator*() { return *_raiiPtr; };

//Overloaded operator->
template <typename T>
T* RAIIPtr<T>::operator->() { return _raiiPtr; };


#endif