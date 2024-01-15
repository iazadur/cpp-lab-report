## Hierarchical Inheritance
The provided C++ code illustrates the concept of Hierarchical Inheritance, a form of inheritance in which multiple derived classes inherit from a single base class. In this example, there is a base class called `Vehicle`. Two derived classes, `Car` and `Bus`, inherit from the `Vehicle` class.

The `Vehicle` class has a constructor that prints the message "This is a Vehicle" when an object of the class is instantiated. Both `Car` and `Bus` are derived classes, meaning they inherit the properties and behaviors of the `Vehicle` class.

In the `main` function, two objects are created: `obj1` of type `Car` and `obj2` of type `Bus`. When these objects are instantiated, the constructor of the base class (`Vehicle`) is invoked, resulting in the message "This is a Vehicle" being printed for each object.

This example demonstrates the hierarchical relationship between the base class and its derived classes, showcasing how common functionalities can be inherited and shared among multiple subclasses in a hierarchy.


## Multilevel Inheritance
The provided C++ code exemplifies Multilevel Inheritance, a type of inheritance where a derived class serves as the base class for another class. In this example, there is a base class named `Vehicle`. A first-level derived class, `fourWheeler`, inherits from the `Vehicle` class. Finally, a second-level derived class, `Car`, inherits from the `fourWheeler` class.

The `Vehicle` class has a constructor that prints the message "This is a Vehicle" when an object of the class is instantiated. The `fourWheeler` class, derived from `Vehicle`, has its own constructor which adds the message "Objects with 4 wheels are vehicles."

The `Car` class, derived from `fourWheeler`, also has its own constructor that outputs "Car has 4 Wheels." In the `main` function, an object `obj` of type `Car` is created. When this object is instantiated, the constructors of the base classes (`Vehicle` and `fourWheeler`) are invoked in sequence, resulting in the respective messages being printed.

This example illustrates the multilevel inheritance relationship, where each derived class inherits properties and behaviors from its immediate base class, creating a hierarchical structure.

##  Multiple Inheritance

The given C++ code demonstrates the concept of Multiple Inheritance, where a derived class inherits from more than one base class. In this example, there are two base classes: `Vehicle` and `FourWheeler`. The `Vehicle` class has a constructor that prints "This is a Vehicle," and the `FourWheeler` class has a constructor that prints "This is a 4 wheeler Vehicle."

The derived class, `Car`, is created by inheriting from both the `Vehicle` and `FourWheeler` classes. Consequently, the `Car` class inherits the characteristics of both base classes.

In the `main` function, an object `obj` of type `Car` is instantiated. During the object creation, the constructors of both base classes (`Vehicle` and `FourWheeler`) are invoked, resulting in the respective messages being printed.

This example illustrates the ability of a derived class to inherit attributes and behaviors from multiple base classes, showcasing the flexibility and expressiveness of multiple inheritance in C++.