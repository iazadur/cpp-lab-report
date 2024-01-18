#include <iostream>
using namespace std;

// base class
class Animal {
public:
	Animal() { cout << "This is an Animal\n"; }
};

// first sub_class derived from class Animal
class Mammal : public Animal {
public:
	Mammal()
	{
		cout << "Mammals are animals\n";
	}
};

// sub class derived from the derived base class Mammal
class Dog : public Mammal {
public:
	Dog() { cout << "Dog is a mammal\n"; }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Dog myDog;
	return 0;
}
