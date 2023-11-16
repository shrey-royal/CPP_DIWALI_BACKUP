#include<iostream>
using namespace std;

class Mathematics {
private:
    int num;
public:
    Mathematics(int num) {
        this->num = num;
    }

    void operator ++() {
        num+=2; //num = num + 2;
    }

    void print() {
        cout << "num is " << num << endl;
    }

    void operator +(Mathematics m) {
        int x = this->num + m.num;
        cout << this->num << " + " << m.num << " = " << x  << "." << endl;
    }
};

// void Mathematics :: operator +(Mathematics m) {
//     int x = this->num + m.num;
//     cout << this->num << " + " << m.num << " = " << x  << "." << endl;
// }


int main() {
    Mathematics m(6);
    ++m;

    m.print();

    Mathematics m1(5), m2(15);

    m1+m2;

    return 0;
}