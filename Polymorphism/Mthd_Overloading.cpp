#include<iostream>
using namespace std;

class School {
    string desg;
public:
    void lady(string desg) {
        cout << "Lady is " << desg << "!" << endl;
    }

    void lady() {
        cout << "Lady is a mother!" << endl;
    }
};

class Calculator {
    float a, b;
public:
    void add(float a, float b) {
        cout << a << " + " << b << " = " << a+b << endl;
    }

    void add() {
        cout << "Enter a & b: ";
        cin >> a >> b;

        // cout << a << " + " << b << " = " << a+b << endl;
        add(a, b);
    }

    int add(int a, int b) {
        return a+b;
    }
};

int main() {
    // School s;
    // s.lady();

    // s.lady("teacher");
    // s.lady("cook");
    // s.lady("president");

    Calculator c;

    c.add();
    cout << 2 << " + " << 3 << " = " << c.add(2, 3) << endl;
    c.add(2.3f, 1.7f);

    return 0;
}



/*

poly(many) + morph(forms) -> many forms


compile time polymorphism -> overloading
run time polymorphism -> overriding, virtual function


Overloading -> Method, Constructor, Operator
-> it is a technique of using a method with same name but in same classes. 
-> using different number of parameters
-> using different data type of parameters


> Inheritance should be followed by classes.
Overriding -> Method -> a method with same name in different classes 

Virtual Functions
*/