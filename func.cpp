#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string iteratively
string iterativeReverse(const string& str) {
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

// Function to reverse a string recursively
string recursiveReverse(const string& str) {
    if (str.length() == 0) {
        return "";
    }
    return str.back() + recursiveReverse(str.substr(0, str.length() - 1));
}

int main() {
    string inputStr;

    cout << "Enter a string: ";
    cin >> inputStr;

    string iterativeResult = iterativeReverse(inputStr);
    string recursiveResult = recursiveReverse(inputStr);

    cout << "Iteratively Reversed: " << iterativeResult << endl;
    cout << "Recursively Reversed: " << recursiveResult << endl;

    return 0;
}
