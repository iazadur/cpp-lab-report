// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.

#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
    int a, b, c;

public:
    Triangle(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void perimeter()
    {
        cout << "Perimeter of triangle is: " << a + b + c << endl;
    }
    void area()
    {
        float s = (a + b + c) / 2;
        cout << "Area of triangle is: " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
    }
};

int main()
{
    Triangle t(3, 4, 5);
    t.perimeter();
    t.area();
    return 0;
}



// output:
// Perimeter of triangle is: 12
// Area of triangle is: 6