#include<iostream>
using namespace std;

float division(int a, int b) {
    if(b == 0) {
        throw "Attemped to divide by Zero!";
    }
    return a/b;
}

int main() {

    cout << "\nBefore Exception!" << endl;

    try {
        cout << division(1, 0);
    } catch(const char* e) {
        cerr << e << endl;
    }    

    cout << "\nAfter Exception!" << endl;
    return 0;
}