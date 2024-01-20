This C++ code defines a basic inheritance structure with classes representing different types of vehicles. The `Vehicle` class serves as a base class, containing private, protected, and public members. The `Car`, `Motorcycle`, and `Truck` classes inherit from the `Vehicle` class with different access specifiers.

- The `Car` class privately inherits from `Vehicle`, making all members of `Vehicle` private in `Car`. It has a member function `accessBaseMembers()` that calls the `showInfo()` function and accesses the `maxSpeed` member.

- The `Motorcycle` class protects its inheritance from `Vehicle`, making all members of `Vehicle` protected in `Motorcycle`. Similar to `Car`, it has a member function `accessBaseMembers()` that calls `showInfo()` and accesses the `maxSpeed` member.

- The `Truck` class publicly inherits from `Vehicle`, so all public and protected members of `Vehicle` remain accessible in `Truck`. It also has a member function `accessBaseMembers()` that calls `showInfo()` and accesses the `maxSpeed` member.

In the `main()` function, instances of `Car`, `Motorcycle`, and `Truck` are created, and their `accessBaseMembers()` functions are called to demonstrate the access levels in the inheritance hierarchy.



## Output
```
Vehicle ID: 18222624
Max Speed: 0 km/h
Number of Wheels: 4055040
Car accessing members: 0 km/h
Vehicle ID: 6422356
Max Speed: 4201019 km/h
Number of Wheels: 4200928
Motorcycle accessing members: 4201019 km/h
Vehicle ID: 6422280
Max Speed: 1968669293 km/h
Number of Wheels: 4200928
Truck accessing members: 1968669293 km/h
```