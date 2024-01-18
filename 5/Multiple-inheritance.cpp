#include <iostream>
using namespace std;

// first base class
class Animal {
public:
	Animal() { cout << "This is an Animal\n"; }
};

// second base class
class Mammal {
public:
	Mammal()
	{
		cout << "This is a Mammal\n";
	}
};

// sub class derived from two base classes
class Dog : public Animal, public Mammal {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Dog myDog;
	return 0;
}
