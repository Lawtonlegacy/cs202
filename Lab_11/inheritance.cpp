#include <iostream>

class Person
{
public:

	Person() : _age(0)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	Person(int age) : _age(age)
	{
		std::cout << "Made a person with age " << _age << std::endl;
	}

	~Person()
	{
		std::cout << "Got rid of a person" << std::endl;
	}

	int getAge()
	{
		return _age;
	}

	void setAge(int age)
	{
		_age = age;
	}


protected:
	int _age;
};

class Child : public Person {

public:

	Child() : _height(0)
	{
		std::cout << "Made a child with height" << _height << std::endl;
	}

	Child(int height, int age) : _age(age), _height(height)
	{
		std::cout << "Made a child with height: " << _height << " and age: " << _age << std::endl;
	}
	
	~Child()
	{
		std::cout << "Destroying child with height " << _height << " and age " << _age << std::endl;
	}
	

private:
	int _height;
};

int main()
{
	Person p(20);
}
