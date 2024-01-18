## Hierarchical Inheritance
This C++ code defines a simple inheritance structure involving a base class `Animal` and two derived classes, `Dog` and `Cat`. The base class has a default constructor that outputs a message indicating it is an animal. Both the `Dog` and `Cat` classes publicly inherit from the `Animal` base class. In the `main()` function, objects of both the `Dog` and `Cat` classes are created, triggering the invocation of the base class constructor due to the inheritance relationship. The output demonstrates the sequential construction of objects, with each object creation triggering the display of the "This is an Animal" message from the base class constructor.


## Multilevel Inheritance
This C++ code defines a hierarchy of classes involving a base class `Animal` and two derived classes, `Mammal` and `Dog`. The base class has a constructor that outputs "This is an Animal." The `Mammal` class is derived from the `Animal` class and has its constructor that outputs "Mammals are animals." The `Dog` class, in turn, is derived from the `Mammal` class and has its constructor that outputs "Dog is a mammal."

In the `main()` function, an object of the `Dog` class is created, which triggers the constructors of all the base classes (`Animal` and `Mammal`) due to the inheritance hierarchy. The output demonstrates the sequential execution of constructors, showcasing the relationship between the classes in the hierarchy.

##  Multiple Inheritance

This C++ code defines a multiple inheritance scenario with two base classes, `Animal` and `Mammal`, and a derived class `Dog` that inherits from both base classes. The `Animal` class has a constructor outputting "This is an Animal," and the `Mammal` class has a constructor outputting "This is a Mammal."

In the `main()` function, an object of the `Dog` class is created. This triggers the constructors of both base classes (`Animal` and `Mammal`) due to the multiple inheritance relationship. The output demonstrates the initialization sequence of constructors for each base class in the derived class, illustrating the use of multiple inheritance in C++.