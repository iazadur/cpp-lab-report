This C++ code illustrates the use of a parameterized constructor and a destructor in a class named `class_name`. The class contains private data members `a` and `b`. The parameterized constructor is defined to initialize these members when an object is instantiated.

In the `main` function:

- An object `obj` of class `class_name` is created, and the parameterized constructor is invoked with values 5 and 6.
- The constructor prints a message indicating its invocation and displays the values of `a` and `b`.
- Upon exiting the `main` function, the destructor is automatically called, printing a message and displaying the values of `a` and `b` again.

This code demonstrates the use of constructors for initializing object states during instantiation and the destructor for cleanup when the object goes out of scope. In this case, the constructor initializes the values, and the destructor displays the values before the object is destroyed.

## Output

```
Constructor is called
Value of a: 5
Value of b: 6

Destructor is called
Value of a: 5
Value of b: 6
```