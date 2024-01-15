#include <bits/stdc++.h>
using namespace std;

class A {
private:
    int a=10;

protected:
    int b=20;

public:
    int c=30;

    void display() {
        cout << "A display(): " << a << " " << b << " " << c << endl;
    }
};

class B : private A {
public:


    void accessBaseMembers() {
        display();
        cout << "B accessing members: " << b << " " << c << endl;
    }
};

class C : protected A {
public:


    void accessBaseMembers() {
        display();
        cout << "C accessing members: " << b << " " << c << endl;
    }
};

class D : public A {
public:


    void accessBaseMembers() {
        display();
        cout << "D accessing members: " << b << " " << c << endl;
    }
};

int main() {
    B b;
    C c;
    D d;

    b.accessBaseMembers();
    c.accessBaseMembers(); // Error: inaccessible due to protected inheritance
    d.accessBaseMembers();

    return 0;
}
