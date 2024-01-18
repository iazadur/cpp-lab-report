#include <iostream>
using namespace std;

class Vehicle {
private:
    int vehicleID;

protected:
    int maxSpeed;

public:
    int numWheels;

    void showInfo() {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Max Speed: " << maxSpeed << " km/h" << endl;
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

class Car : private Vehicle {
public:
    void accessBaseMembers() {
        showInfo();
        cout << "Car accessing members: " << maxSpeed << " km/h" << endl;
    }
};

class Motorcycle : protected Vehicle {
public:
    void accessBaseMembers() {
        showInfo();
        cout << "Motorcycle accessing members: " << maxSpeed << " km/h" << endl;
    }
};

class Truck : public Vehicle {
public:
    void accessBaseMembers() {
        showInfo();
        cout << "Truck accessing members: " << maxSpeed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    Motorcycle myMotorcycle;
    Truck myTruck;

    myCar.accessBaseMembers();
    myMotorcycle.accessBaseMembers();
    myTruck.accessBaseMembers();

    return 0;
}
