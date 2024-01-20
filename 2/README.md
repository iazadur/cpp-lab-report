This C++ code demonstrates the concept of inheritance with a base class (`Parent`) and a derived class (`Child`). The base class contains a protected member `id_protected` and a private member `radius`. It also has a function `compute_area` that calculates the area of a circle based on the given radius.

The derived class `Child` publicly inherits from the `Parent` class. It has additional member functions `setId` and `displayId`, allowing access to the protected member `id_protected` from the base class.

In the `main` function:

- An object `obj1` of the `Child` class is created.
- The `compute_area` function from the base class is called with a radius value of 1.5.
- The `setId` function is used to set the value of `id_protected`.
- The `displayId` function is called to display the protected member.

This example showcases how a derived class can inherit members from the base class and extend its functionality, including accessing protected members. It also demonstrates encapsulation by using private members in the base class that are indirectly accessed through public or protected functions in the derived class.

## Output

```
Radius is: 1.5
Area is: 7.065
id_protected is: 81
```