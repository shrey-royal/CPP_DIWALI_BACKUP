#include<iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float per;
public:
    Student() {
        roll = 0;
        name = "NULL";
        per = 0;
    }

    Student(int roll, string name, float per) {
        this->roll = roll;
        this->name = name;
        this->per = per;
    }

    void print() {
        cout << "Roll No.: " << roll << "\nName: " << name << "\nPercentage: " << per << endl;
    }
};


int main() {
    Student s(12, "Shrey", 56), s1;

    s.print();
    s1.print();
}