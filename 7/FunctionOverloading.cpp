// Polymorphism
// Function Overloading.
// Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two double numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator myCalculator;

    // Calling the add function with two integers
   cout << "Sum of 5 and 10: " << myCalculator.add(5, 10) << endl;

    // Calling the add function with three integers
    cout << "Sum of 5, 10, and 15: " << myCalculator.add(5, 10, 15) << endl;

    // Calling the add function with two double numbers
    cout << "Sum of 3.5 and 2.7: " << myCalculator.add(3.5, 2.7) << endl;

    return 0;
}