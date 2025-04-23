#include <iostream>
#include <exception>
using namespace std;

class NegativeValueException : public exception {
public:
    const char* what() const noexcept override {
        return "Deposit amount cannot be negative!";
    }
};

void deposit(float amount) {
    if (amount < 0)
        throw NegativeValueException();
    cout << "Deposit successful: Rs." << amount << endl;
}

int main() {
    float amount;
    cout << "Enter deposit amount: ";
    cin >> amount;

    try {
        deposit(amount);
    } catch (const NegativeValueException& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
