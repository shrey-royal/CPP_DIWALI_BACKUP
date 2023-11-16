#include<iostream>
using namespace std;

class Calculator {
public:
    virtual void add(int a, int b) {
        cout << a << " + " << b << " = " << a+b << endl;
    }
};

class Calc : public Calculator {
public:
    void add(int a, int b, int c) {
        cout << a << " + " << b << " + " << c << " = " << a+b+c << endl;
    }

    void add(int a, int b) override {
        cout << a << " + " << b << " = " << a+b << " (overriden)" << endl;
    }
};

int main() {

    // Calc c;
    // c.add(1, 2);
    // c.add(1, 2, 3);

//virutal functions
    Calculator *c;
    Calc c1;
    c = &c1;
    c->add(1, 2);

    return 0;
}