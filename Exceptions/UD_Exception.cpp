#include<iostream>
using namespace std;

class CustomException : public exception {
public:
    const char* what() const throw() {
        return "\n->Exception Occurred: ArrayIndexOutOfRange!";
    }
};

int getElement(int *arr, int pos, int n) {
    if(pos >= n) {
        CustomException c;
        throw c;
    }

    return arr[pos];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = sizeof(arr)/sizeof(arr[0]);
    cout << "\nBefore Exception!" << endl;

    try {
        cout << getElement(arr, 7, n);
    } catch(CustomException e) {
        cerr << e.what() << endl;
    }

    cout << "\nAfter Exception!" << endl;
    return 0;
}