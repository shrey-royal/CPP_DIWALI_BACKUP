#include<iostream>
using namespace std;

//if any class have a single pure virtual function then we can say that the class is now abstracted
class Shape {   //abstract class
public:
    virtual void draw() = 0;    //pure virtual function -> do-nothing function
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle!" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle!" << endl;
    }
};

int main() {

    Shape *s;
    Rectangle rect;
    Circle cir;

    s = &rect;
    s->draw();

    s = &cir;
    s->draw();

    s = &rect;
    s->draw();

    return 0;
}

