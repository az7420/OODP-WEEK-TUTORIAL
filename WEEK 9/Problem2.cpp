#include <iostream>
using namespace std;

void checkPositive(int num) {
    if (num <= 0)
        throw "Number is not positive.";
}

void checkEven(int num) {
    if (num % 2 != 0)
        throw "Number is not even.";
}

void checkRange(int num) {
    if (num < 1 || num > 100)
        throw "Number is not in range 1-100.";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        checkPositive(num);
        try {
            checkEven(num);
            try {
                checkRange(num);
                cout << "Valid input: " << num << endl;
            } catch (const char* msg) {
                cout << "Range Exception: " << msg << endl;
            }
        } catch (const char* msg) {
            cout << "Even Check Exception: " << msg << endl;
        }
    } catch (const char* msg) {
        cout << "Positive Check Exception: " << msg << endl;
    }

    return 0;
}
