#include<iostream>
#include<string.h>

using namespace std;

int main() {
    string str1, str2;

    cout << "\nEnter str1: ";
    getline(cin, str1);
    cout << "\nEnter str2: ";
    getline(cin, str2);
    //char array -> cin.getline(arr, 20);
    cout << "\nstr1: " << str1 << "\nstr2: " << str2;

    cout << "\nstr1.compare(str2): " << str1.compare(str2);
    cout << "\nstr1.append(str2): " << str1.append(str2);
    cout << "\nstr1.length(): " << str1.length() << "\nstr2.length(): " << str2.length();
    char arr[str2.length()] = "\0";
    cout << "\nstr1.copy(arr, str2.length(), 0): " << str1.copy(arr, str1.length(), 0);

    cout << "\nstr1: " << str1 << "\nstr2: " << str2 << endl;
    cout << arr;


    return 0;
}