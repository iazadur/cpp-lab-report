##  Polymorphism through Function Overloading

The provided C++ code illustrates the concept of Polymorphism through Function Overloading. Polymorphism allows a class to provide multiple implementations of a function, and in this case, the `Calculator` class showcases function overloading for addition.

The `Calculator` class has three overloaded `add` functions, each tailored for different parameter sets. 

1. The first `add` function takes two integers and returns their sum.
2. The second `add` function takes three integers and returns their sum.
3. The third `add` function takes two double numbers and returns their sum.

In the `main` function, an object of the `Calculator` class, `myCalculator`, is created. Subsequently, the different `add` functions are called with various sets of parameters, demonstrating the versatility of function overloading. The appropriate function is invoked based on the number and types of arguments provided, showcasing polymorphism at the function level.

The output of the program prints the results of the addition operations, demonstrating how the compiler resolves which overloaded function to call based on the provided arguments.


##  Polymorphism through Function overriding

The provided C++ code exemplifies the concept of virtual function overriding and demonstrates runtime polymorphism. 

There are two classes in the program: `base` and `derived`. The `base` class has a virtual function named `print()` and a non-virtual function named `show()`. The `derived` class is derived from the `base` class and overrides the virtual function `print()`.

In the `main` function, a pointer `bptr` of type `base` is created, and it is assigned the address of an object of the `derived` class. This is a common scenario in polymorphism where a base class pointer is used to point to objects of its derived classes.

The key observation is in the function calls:

1. `bptr->print();`: This calls the virtual function `print()`. The actual function called is determined at runtime based on the type of the object being pointed to. In this case, it calls the overridden version in the `derived` class, demonstrating runtime polymorphism.

2. `bptr->show();`: This calls the non-virtual function `show()`. The function to be called is determined at compile-time based on the type of the pointer, not the type of the object. In this case, it calls the `show()` function of the `base` class.

The program output showcases the difference between virtual and non-virtual functions, emphasizing how virtual functions enable dynamic binding at runtime, providing flexibility in handling derived class implementations.