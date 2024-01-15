#include <bits/stdc++.h>
using namespace std;

// Base class
class Parent
{
protected:
	int id_protected;

private:
	double radius;

public:
	void compute_area(double r)
	{
		radius = r;
		double area = 3.14 * radius * radius;
		cout << "Radius is: " << radius << endl;
		cout << "Area is: " << area << endl;
	}
};

// Subclass or derived class from the base class
class Child : public Parent
{
public:
	void setId(int id)
	{
		id_protected = id;
	}

	void displayId()
	{
		cout << "id_protected is: " << id_protected << endl;
	}
};

// Main function
int main()
{
	Child obj1;
	obj1.compute_area(1.5);
	obj1.setId(81);
	obj1.displayId();
	return 0;
}
