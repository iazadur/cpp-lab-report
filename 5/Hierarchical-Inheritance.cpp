#include <iostream>
using namespace std;

// base class
class Animal {
public:
	Animal() { cout << "This is an Animal\n"; }
};

// first sub class
class Dog : public Animal {
};

// second sub class
class Cat : public Animal {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Dog dogObj;
	Cat catObj;
	return 0;
}


